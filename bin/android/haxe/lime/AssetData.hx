package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("img/about.png", "img/about.png");
			type.set ("img/about.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/background_blackboard.png", "img/background_blackboard.png");
			type.set ("img/background_blackboard.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/cat_but.png", "img/cat_but.png");
			type.set ("img/cat_but.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/center.png", "img/center.png");
			type.set ("img/center.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/imit_logo.png", "img/imit_logo.png");
			type.set ("img/imit_logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/logo.png", "img/logo.png");
			type.set ("img/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/other.png", "img/other.png");
			type.set ("img/other.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/pi_spin.png", "img/pi_spin.png");
			type.set ("img/pi_spin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/sec_word.png", "img/sec_word.png");
			type.set ("img/sec_word.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/sec_word.psd", "img/sec_word.psd");
			type.set ("img/sec_word.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("img/start.png", "img/start.png");
			type.set ("img/start.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("words/algebra&logic.txt", "words/algebra&logic.txt");
			type.set ("words/algebra&logic.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("words/geometry.txt", "words/geometry.txt");
			type.set ("words/geometry.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("words/math&difur.txt", "words/math&difur.txt");
			type.set ("words/math&difur.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("words/mathematics.txt", "words/mathematics.txt");
			type.set ("words/mathematics.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("words/mathematics_hard.txt", "words/mathematics_hard.txt");
			type.set ("words/mathematics_hard.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("words/mathenatics_extream.txt", "words/mathenatics_extream.txt");
			type.set ("words/mathenatics_extream.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("words/metOp&diskr.txt", "words/metOp&diskr.txt");
			type.set ("words/metOp&diskr.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("words/programing&computers.txt", "words/programing&computers.txt");
			type.set ("words/programing&computers.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("words/school_math.txt", "words/school_math.txt");
			type.set ("words/school_math.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("words/sweet_imit.txt", "words/sweet_imit.txt");
			type.set ("words/sweet_imit.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
