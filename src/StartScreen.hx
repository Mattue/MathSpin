

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

//код для стартового экрана

class StartScreen extends Sprite
{

	var background: Bitmap;

	var spin: Sprite;
	var spin_thing: Bitmap;

	var logo: Bitmap;
	var sec_word: Bitmap;

	var start_button: Sprite;
	var about_button: Sprite;

	var about_back: Sprite;
	var about_textfield: TextField;
	var about_textformat: TextFormat;
	var about_but: Sprite;

	public function new()
	{
		super();

	    useHandCursor = true;
		buttonMode = true;

		background = new Bitmap(Assets.getBitmapData('img/background_blackboard.png'));
		addChild(background);

		spin_thing = new Bitmap(Assets.getBitmapData('img/pi_spin.png'));
		spin_thing.x = -spin_thing.width/2;
		spin_thing.y = -spin_thing.height/2;
		
		spin = new Sprite();
		spin.x = background.width/2 + spin_thing.width;
		spin.y = background.height/2;
		spin.addChild(spin_thing);
		addChild(spin);

		logo = new Bitmap(Assets.getBitmapData('img/logo.png'));
		logo.x = background.width/2 - spin.width*1.5;
		logo.y = background.height/2 - logo.height;
		addChild(logo);

		sec_word = new Bitmap(Assets.getBitmapData('img/sec_word.png'));
		sec_word.x = logo.x;
		sec_word.y = logo.y + sec_word.height*1.5; 
		addChild(sec_word);

		start_button = new Sprite();
		start_button.x = spin.x - spin.width;
		start_button.y = spin.y - spin.height/2;
		start_button.addChild(new Bitmap(Assets.getBitmapData('img/start.png')));
		addChild(start_button);

		start_button.addEventListener(MouseEvent.CLICK, onStartClick);

		about_button = new Sprite();
		about_button.addChild(new Bitmap(Assets.getBitmapData('img/about.png')));
		about_button.x = spin.x - spin.width;
		about_button.y = spin.y + spin.height/2 - about_button.height + 1;
		addChild(about_button);

		about_button.addEventListener(MouseEvent.CLICK, onAboutClick);

		about_back = new Sprite();
		about_back.graphics.beginFill(0x000000);
		about_back.graphics.drawRect(0, 0, 1000, 1000);
		
		about_textformat = new TextFormat();
		about_textformat.size = 20;
		about_textformat.font = "Arial";
		about_textformat.color = 0x00ff00;

		about_textfield = new TextField();
		about_textfield.defaultTextFormat = about_textformat;
		about_textfield.autoSize = LEFT;
		about_textfield.text = "     Правила очень простые. Вы выбираете категорию, затем у вас есть 3 секунды чтобы приложить 
		 устройство ко лбу.
		 И тут начинается игра! Задача - угадать как можно больше слов за 30 секунд из выбранной категории.
		 Если товарищи говорят, что ответ ПРАВИЛЬНЫЙ вы наклоняете устройство ВВНИЗ. 
		 Вам начисляется 1 балл. Чтобы ПРОПУСТИТЬ слово, наклоните устройство ВВЕРХ. 
		 Вот в общем-то и все! Удачи и наслаждайтесь!";

		about_but = new Sprite();
		about_but.graphics.beginFill(0xff0000);
		about_but.graphics.drawCircle(0, 0, 20);

		addChild(about_back);
		addChild(about_textfield);
		addChild(about_but);

		about_but.visible = false;
		about_textfield.visible = false;
		about_back.visible = false;

		about_but.addEventListener(MouseEvent.CLICK, about_but_clicked);

		addEventListener(Event.ENTER_FRAME, onFrame);

		//addEventListener(MouseEvent.CLICK, onClick); //клик по сцене, можно переделать под клик по кнопке  

	}

	public function about_but_clicked(e: MouseEvent)
	{

			about_but.visible = false;
			about_textfield.visible = false;
			about_back.visible = false;
	}

	var FrameCount:Int = 0;
	
 	public function onStartClick(e:MouseEvent)
 	{
 		//trace("start");
 		dispatchEvent (new Event ("startgame")); //пускает событие для закрытия стартового экрана
 	}

 	public function onAboutClick(e:MouseEvent)
 	{
 	    about_back.visible = true;
			about_textfield.visible = true;
			about_but.visible = true;
 	}

 	public function onFrame(e:Event)
 	{
 		FrameCount++;

 		spin.rotation++;
 	}

 	public function destroy()
 	{
 		removeEventListener (Event.ENTER_FRAME, onFrame);
 	}

}