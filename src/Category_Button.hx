
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

class Category_Button extends Sprite
{
	public var cat_but: Sprite;
	public var cat_text:TextField;
	public var cat_textf:TextFormat;

	public function new()
	{
		super ();

		cat_but = new Sprite();
	    cat_but.addChild(new Bitmap(Assets.getBitmapData('img/cat_but.png')));
	    cat_but.x = 100;
	    cat_but.y = 100;
	    addChild(cat_but);

	    cat_text = new TextField ();
		cat_textf = new TextFormat( "Arial", 30, 0x000000);
		cat_text.autoSize = LEFT;
		cat_text.defaultTextFormat = cat_textf;
		cat_text.text = "Категория";
		cat_text.mouseEnabled = false;

		cat_text.x = cat_but.x + 15;
		cat_text.y = cat_but.y + 40;

		cat_text.width = cat_text.textWidth + 20;
		cat_text.height = cat_text.textHeight + 20;

		addChild(cat_text);
	}
	

}