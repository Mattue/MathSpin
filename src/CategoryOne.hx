
package ;

import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.Lib;
import openfl.display.Bitmap;
import openfl.Assets;
import openfl.display.DisplayObject;
import openfl.text.TextField;
import openfl.text.TextFormat;
import sys.io.File;
import openfl.utils.SystemPath;
import sys.FileSystem;

//категория 1 - игра

class CategoryOne extends Sprite
{

	var background: Bitmap;

	var pause_but: Sprite;

	public var cat_text: TextField;
	public var cat_textf: TextFormat;

	public var points: TextField;
	public var points_tf: TextFormat;

	//public var category_name: TextField;

	//public var testX: TextField;
	//public var testY: TextField;
	//public var testZ: TextField;

	//public var checkX: TextField;
	//public var checkY: TextField;
	//public var checkZ: TextField;

	public var line: String;
	public var lineNumber: Int;
	public var fileName: String;

	public var words: Array<String>;

	var sec: Int = 1;

	var checkBool: Bool = true;
	var kostil: Bool = false;
	var pause_kostil: Bool = false;

	public var time: TextField;
	public var timef: TextFormat;
	public var time_time: Int = 30;

	public function new()
	{
	    super();

	    useHandCursor = true;
		buttonMode = true;

		addEventListener(Event.ENTER_FRAME, onFrame);

		switch CategoryChoose.category
		{
			case "sweet_imit": fileName = "words/sweet_imit.txt";
			case "school_math": fileName = "words/school_math.txt";
			case "algebra&logic": fileName = "words/algebra&logic.txt";
			case "geometry": fileName = "words/geometry.txt";
			case "mathematics": fileName = "words/mathematics.txt";
		}

		Main.points = 0;

		var text_file = Assets.getText(fileName);
	    words = text_file.split("\n");
	    lineNumber = Std.int(Math.random()*words.length);

	    background = new Bitmap(Assets.getBitmapData('img/background_blackboard.png'));
	    addChild(background);

	    cat_text = new TextField ();
		cat_textf = new TextFormat( "Arial", 70, 0xff0000);
		cat_text.defaultTextFormat = cat_textf;
		cat_text.autoSize = LEFT;
		cat_text.text = readLine(fileName, lineNumber);

		cat_text.x = 50;
		cat_text.y = 100;
		addChild(cat_text);

		points = new TextField ();
		points_tf = new TextFormat( "Arial", 35, 0xff0000);
		points.defaultTextFormat = points_tf;
		points.autoSize = LEFT;
		points.text = Std.string(Main.points);

		points.x = 100;
		points.y = 400;
		addChild(points);

		/*category_name = new TextField ();
		category_name.defaultTextFormat = points_tf;
		category_name.autoSize = LEFT;
		category_name.text = Std.string(fileName);
		category_name.x = 400;
		category_name.y = 400;
		addChild(category_name);*/

		/*testX = new TextField();
		testX.defaultTextFormat = points_tf;
		testX.autoSize = LEFT;
		testX.text = 'X ' + Std.string(Main.xAcc);
		testX.x = 400;
		testX.y = 100;
		addChild(testX);

		testY = new TextField();
		testY.defaultTextFormat = points_tf;
		testY.autoSize = LEFT;
		testY.text = 'Y ' + Std.string(Main.yAcc);
		testY.x = 400;
		testY.y = 200;
		addChild(testY);

		testZ = new TextField();
		testZ.defaultTextFormat = points_tf;
		testZ.autoSize = LEFT;
		testZ.text = 'Z ' + Std.string(Main.zAcc);
		testZ.x = 400;
		testZ.y = 300;
		addChild(testZ);*/

		/*checkX = new TextField();
		checkX.defaultTextFormat = points_tf;
		checkX.autoSize = LEFT;
		checkX.text = "X " + Std.string(Main.checkAccX - Main.checkAccY);
		checkX.x = 400;
		checkX.y = 100;
		addChild(checkX);

		checkY = new TextField();
		checkY.defaultTextFormat = points_tf;
		checkY.autoSize = LEFT;
		checkY.text = "Y " + Std.string(Main.checkAccY);
		checkY.x = 400;
		checkY.y = 200;
		addChild(checkY);

	  	checkZ = new TextField();
		checkZ.defaultTextFormat = points_tf;
		checkZ.autoSize = LEFT;
		checkZ.text = "Z " + Std.string(Main.checkAccZ);
		checkZ.x = 400;
		checkZ.y = 300;
		addChild(checkZ);*/

		pause_but = new Sprite();
		pause_but.graphics.beginFill(0xff0000);
		pause_but.graphics.drawCircle(0,0,15);
		pause_but.x = 400;
		pause_but.y = 400;
		pause_but.addEventListener(MouseEvent.CLICK, onPause);
		addChild(pause_but);

		time = new TextField ();
		timef = new TextFormat( "Arial", 70, 0x00ff00);
		time.defaultTextFormat = timef;
		time.autoSize = LEFT;
		time.text = Std.string(time_time);

		time.x = 250;
		time.y = 250;
		addChild(time);

	}

	public function readLine(fileName, lineNumber)
	{
	    line = words[lineNumber];
	    return line;
	}

	public function onPause(e:MouseEvent)
	{
	    pause_kostil = !pause_kostil;
	}

	var frameCount: Int = 0;

	public function onFrame(e:Event)
	{
	    frameCount++;

	    //testX.text = Std.string(Main.xAcc);
	    //testY.text = Std.string(Main.yAcc);
	    //testZ.text = Std.string(Main.zAcc);

	    //checkX.text = Std.string(Main.checkAccX);
	    //checkY.text = Std.string(Main.checkAccY);
	    //checkZ.text = Std.string(Main.checkAccZ);

	    if (pause_kostil == false)
	    {
	    	if (frameCount % 60 == 0)
	    	{
	    		time_time--;
	    		time.text = Std.string(time_time);
	    	}
	    }

	  	if (time_time == 0)
	  	{
	  		dispatchEvent(new Event('categoryEnd'));
	  	}

	    if (Main.zAcc > 0.9 || Main.zAcc < -0.9)
	    {
	    	return;
	    }

	    if (kostil == true)
	    {
	    	if (frameCount % 60 == 0)
	    	{
	    		sec--;
	    	}
	    	if (sec == 0)
	    	{
	    		kostil = false;
	    		checkBool = true;
	    	}
	    }

	    /*if (Main.checkAccZ > 0.1)
	    {
	    	if ((Main.checkAccX - Main.checkAccY) < 0.01 && (Main.checkAccX - Main.checkAccY) > -0.01)
	    	{
	    		trace("sdfsdf");
	    	}
	    }*/

		if(pause_kostil == false)
		{
		    if (Main.zAcc > 0.5)
	    		{
	    			if (checkBool == true)
	    			{
			    		onRight();
			    	}
			    }
			    if (Main.zAcc < -0.5)
			    {
			    	if (checkBool == true)
			    	{
			    		onWrong();
			    	}
			    }
		}

	}

	public function onRight()
	{
		//trace('ПРАВО!');
		checkBool = false;
		kostil = true;
		sec = 1;

	    lineNumber = Std.int(Math.random()*words.length);
	    Main.points ++;
	    points.text = Std.string(Main.points);
	    cat_text.text = readLine(fileName, lineNumber);
	}
	
	public function onWrong()
	{
	 	//trace('НЕ ПРАВО!'); 
	 	checkBool = false;
		kostil = true;
		sec = 1;

	 	lineNumber = Std.int(Math.random()*words.length);
	    cat_text.text = readLine(fileName, lineNumber);
	}

	public function destroy()
	{
	    removeEventListener(Event.ENTER_FRAME, onFrame);
	}

}