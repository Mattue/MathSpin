
package ;

import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.Lib;
import openfl.display.Bitmap;
import openfl.Assets;
import openfl.text.TextField;
import openfl.text.TextFormat;

//выбор категории

class CategoryChoose extends Sprite
{

	var background: Bitmap;

	var one: Category_Button;
	var two: Category_Button;
	var three: Category_Button;
	var four: Category_Button;
	var five: Category_Button;

	var back_but: Sprite;

	public static var category: String;

	var rect: Sprite;

	var sec: Int = 3;

	public var time: TextField;
	public var timef: TextFormat;

	public var result: TextField;
	public var result_tf: TextFormat;

	public function new()
	{
	    super();

	    useHandCursor = true;
		buttonMode = true;

	    background = new Bitmap(Assets.getBitmapData('img/background_blackboard.png'));
	    addChild(background);

	    one = new Category_Button();
	    one.cat_text.text = "Любимый\nИМИТ";
	    addChild(one);

	    two = new Category_Button();
	    two.cat_text.text = "Школьная\nМатематика";
	    two.x = one.x + 250;
	    two.y = one.y;
	    addChild(two);

	    three = new Category_Button();
		three.cat_text.text = "Алгебра и\nЛогика";
	    three.x = two.x + 250;
	    three.y = two.y;
	    addChild(three);

	    four = new Category_Button();
	    four.cat_text.text = "Геометрия";
	    four.x = three.x;
	    four.y = three.y + 200;
	    addChild(four);

	    five = new Category_Button();
	    five.cat_text.text = "Математики\nлегкое";
	    five.x = one.x;
	    five.y = one.y + 200;
	    addChild(five);

	    back_but = new Sprite();
	    back_but.graphics.beginFill(0xff00000);
	    back_but.graphics.drawCircle(0,0,20);
	    back_but.x = 20;
	    back_but.y = 20;
		addChild(back_but);

		back_but.addEventListener(MouseEvent.CLICK, backClick);

	    time = new TextField ();
		timef = new TextFormat( "Arial", 70, 0x00ff00);
		time.defaultTextFormat = timef;
		time.autoSize = LEFT;
		time.text = Std.string(sec);

		time.x = 250;
		time.y = 250;

		result = new TextField();
		result_tf = new TextFormat("Arial", 70, 0xff0000);
		result.defaultTextFormat = result_tf;
		result.autoSize = CENTER;
		result.text = Std.string(Main.points);

		result.x = two.x + 150;
		result.y = five.y + 100;
		addChild(result);

		rect = new Sprite();
		rect.graphics.beginFill(0x000000);
		rect.graphics.drawRect(0,0,1000,1000);
		rect.alpha = 0.5;

		one.addEventListener(MouseEvent.CLICK, Category1Click.bind(1));
		two.addEventListener(MouseEvent.CLICK, Category1Click.bind(2));
		three.addEventListener(MouseEvent.CLICK, Category1Click.bind(3));
		four.addEventListener(MouseEvent.CLICK, Category1Click.bind(4));
		five.addEventListener(MouseEvent.CLICK, Category1Click.bind(5));

		addChild(rect);
		addChild(time);

		rect.visible = false;
		time.visible = false;


	}

	public function backClick(e:MouseEvent)
	{
	    dispatchEvent(new Event('back'));
	}

	public function Category1Click(categorynumber: Int, e:MouseEvent)
	{
		//trace(e.target.name);
		switch categorynumber
		{
			case 1: 
			{
				trace("Любимый Имит");
				category = "sweet_imit";
			}
			case 2: 
			{
				trace("Школьная Математика");
				category = "school_math";
			}
			case 3: 
			{
				trace("Алгебра и Логика");
				category = "algebra&logic";
			}
			case 4: 
			{
				trace("Георметрия");
				category = "geometry";
			}
			case 5: 
			{
				trace("Математики легкое");
				category = "mathematics";
			}
			default: trace("Ждем");
		}
		addEventListener(Event.ENTER_FRAME, onFrame);
		rect.visible = true;
		time.visible = true;
	}

	var frameCount: Int = 0;

	public function onFrame(e:Event)
	{
	    frameCount++;
	    time.text = Std.string(sec);
	    if (frameCount % 60 == 0)
	    {
	    	sec--;
	    }
	    if (sec == 0)
		{
			dispatchEvent(new Event('categoryOne'));
			rect.visible = false;
			time.visible = false;
			sec = 3;
			removeEventListener(Event.ENTER_FRAME, onFrame);
		}
	}

	public function destroy()
	{
	    //removeEventListener(Event.ENTER_FRAME, onFrame);
	}

}