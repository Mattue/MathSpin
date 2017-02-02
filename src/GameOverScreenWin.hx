
package ;

import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;

//код для конечного экрана, в случае победы

class GameOverScreenWin extends Sprite
{

	public function new()
	{
	    super ();

		useHandCursor = true;
		buttonMode = true;

		addEventListener(MouseEvent.CLICK, onClick); //клик по сцене, можно переделать под клик по кнопке  
	}

	public function onClick(e:MouseEvent)
	{
		dispatchEvent (new Event ("reload"));
	}


}