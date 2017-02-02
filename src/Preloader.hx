package ;
import openfl.display.Sprite;
import openfl.display.Shape;
import openfl.display.BitmapData;
import openfl.display.Bitmap;

/**
 * ...
 * @author Zergling
 */

 @:bitmap("assets/img/center.png") class CenterBD extends BitmapData { }
 @:bitmap("assets/img/other.png") class OtherBD extends BitmapData { }

class Preloader extends NMEPreloader
{
	public var other: Shape;
	public var back_center: Sprite;
	public var other_fill: BitmapData;
	public var i: Int = 0;
	public var flag: Bool = true; 
	public var Width: Float;
	public var Height: Float;
	

	public function new() 
	{
		super();
		
		outline.visible = false;
		useHandCursor = true;
		buttonMode = true;
		
		Width = flash.Lib.current.stage.stageWidth;
		Height = flash.Lib.current.stage.stageHeight;
		
		back_center = new Sprite();
		back_center.addChild(new Bitmap(new CenterBD(266, 266)));
		back_center.x = Width / 2 - back_center.width / 2;
		back_center.y = Height / 2 - back_center.height / 2;
		addChild (back_center);
		back_center.alpha = 0;
		//back_center.addEventListener(MouseEvent.CLICK, button_clicked);
		
		other_fill = new OtherBD(1000, 1000);
		
		other = new Shape();
		other.x = (Width / 2) - (other_fill.width / 2);
		other.y = (Height / 2) - (other_fill.height / 2);
		
		other.graphics.beginBitmapFill(other_fill, null, false);
		other.graphics.moveTo(other_fill.width / 2, other_fill.height / 2 );
		//other.graphics.lineTo(other.x + other_fill.width, other.y + other_fill.height / 2);
		
		
		addChild (other);
		//addEventListener (Event.ENTER_FRAME, onframe);
		//addChild (back);
	}
	
	public override function onUpdate(bytesLoaded:Int, bytesTotal:Int)
	{
		var percent = (bytesLoaded / bytesTotal);
		
		if (percent < 1)
		{
			var R = 1000;
			var phi = percent * 2 * Math.PI;
			var x = Width / 2 + R * Math.cos(phi);
			var y = Height / 2 + R * Math.sin(phi);
			other.graphics.lineTo(x, y);
			back_center.alpha = percent;
		}
	}
	
}