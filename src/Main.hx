package ;

import openfl.display.Sprite;
import openfl.events.Event;
import openfl.Lib;
import openfl.events.MouseEvent;
import openfl.sensors.Accelerometer;
import openfl.events.AccelerometerEvent;

/**
 * ...
 * @author Mattue
 * Шаблон
 */

class Main extends Sprite 
{
	var inited:Bool;

	var startScreen: StartScreen;
	var categoryChoose: CategoryChoose;
	var categoryOne: CategoryOne;

	public static var points: Int = 0;

	private var _acc:Accelerometer = new Accelerometer();

	/* ENTRY POINT */
	
	function resize(e) 
	{
		if (!inited) init();
		// else (resize or orientation change)
	}
	
	function init() 
	{
		if (inited) return;
		inited = true;

		_acc.addEventListener(AccelerometerEvent.UPDATE, updateAcc);

		startScreen = new StartScreen();
		startScreen.addEventListener('startgame', onStart);
		addChild(startScreen);

	}

	/* SETUP */


	public static var xAcc: Float = 0;
	public static var xAcc_old: Float = 0;

	public static var yAcc: Float = 0;
	public static var yAcc_old: Float = 0;

	public static var zAcc: Float = 0;
	public static var zAcc_old: Float = 0;

	public static var checkAccX: Float = 0;
	public static var checkAccY: Float = 0;
	public static var checkAccZ: Float = 0;

	private function updateAcc(Event:AccelerometerEvent):Void 
	{
		//zAcc_old = zAcc; 
		//xAcc_old = xAcc;
		//yAcc_old = yAcc;
    	//xAcc = Event.accelerationX;
    	//yAcc = Event.accelerationY;
    	zAcc = Event.accelerationZ;
    	//trace("x:" + Event.accelerationX);
    	//trace("y:" + Event.accelerationY);
    	//trace("z:" + Event.accelerationZ);
    	//checkAccX = xAcc - xAcc_old;
    	//checkAccY = yAcc - yAcc_old;
    	//checkAccZ = zAcc - zAcc_old;
	}

	public function onStart(e:Event)
	{
		removeChild(startScreen);
		startScreen.destroy();
	   
	    categoryChoose = new CategoryChoose();
	    categoryChoose.addEventListener('categoryOne', startCategoryOne);
	    categoryChoose.addEventListener('back', back);
	    addChild(categoryChoose);
	}

	public function back(e:Event)
	{
	    removeChild(categoryChoose);
	    categoryChoose.destroy();

		startScreen.addEventListener('startgame', onStart);
		startScreen.addEventListener(Event.ENTER_FRAME, startScreen.onFrame);
		addChild(startScreen);
	}

	public function startCategoryOne(e:Event)
	{
	    removeChild(categoryChoose);
	    categoryChoose.destroy();

	    categoryOne = new CategoryOne();
	    categoryOne.addEventListener('categoryEnd', onCategoryEnd);
	    addChild(categoryOne);
	}

	public function onCategoryEnd(e:Event)
	{
	    removeChild(categoryOne);
		categoryOne.destroy();

		categoryChoose = new CategoryChoose();
	    categoryChoose.addEventListener('categoryOne', startCategoryOne);
	    addChild(categoryChoose);
	}

	public function new() 
	{
		super();	
		addEventListener(Event.ADDED_TO_STAGE, added);
	}

	function added(e) 
	{
		removeEventListener(Event.ADDED_TO_STAGE, added);
		stage.addEventListener(Event.RESIZE, resize);
		#if ios
		haxe.Timer.delay(init, 100); // iOS 6
		#else
		init();
		#end
	}
	
	public static function main() 
	{
		// static entry point
		Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
		Lib.current.addChild(new Main());
	}
}
