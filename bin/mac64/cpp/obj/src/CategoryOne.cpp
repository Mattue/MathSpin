#include <hxcpp.h>

#ifndef INCLUDED_CategoryOne
#include <CategoryOne.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif

Void CategoryOne_obj::__construct()
{
HX_STACK_FRAME("CategoryOne","new",0x95fbe6da,"CategoryOne.new","CategoryOne.hx",19,0x27b431d6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(97)
	this->frameCount = (int)0;
	HX_STACK_LINE(39)
	this->wordNumber = (int)0;
	HX_STACK_LINE(43)
	super::__construct();
	HX_STACK_LINE(45)
	this->useHandCursor = true;
	HX_STACK_LINE(46)
	this->buttonMode = true;
	HX_STACK_LINE(48)
	this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->onFrame_dyn(),null(),null(),null());
	HX_STACK_LINE(50)
	::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/background_blackboard.png"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	::openfl::_v2::display::Bitmap _g1 = ::openfl::_v2::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(50)
	this->background = _g1;
	HX_STACK_LINE(51)
	this->addChild(this->background);
	HX_STACK_LINE(53)
	::openfl::_v2::display::Sprite _g2 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(53)
	this->right = _g2;
	HX_STACK_LINE(54)
	this->right->get_graphics()->beginFill((int)851712,null());
	HX_STACK_LINE(55)
	this->right->get_graphics()->drawCircle((int)1000,(int)50,(int)50);
	HX_STACK_LINE(56)
	this->addChild(this->right);
	HX_STACK_LINE(58)
	this->right->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onRight_dyn(),null(),null(),null());
	HX_STACK_LINE(60)
	::openfl::_v2::display::Sprite _g3 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(60)
	this->wrong = _g3;
	HX_STACK_LINE(61)
	this->wrong->get_graphics()->beginFill((int)16711680,null());
	HX_STACK_LINE(62)
	this->wrong->get_graphics()->drawCircle((int)1000,(int)150,(int)50);
	HX_STACK_LINE(63)
	this->addChild(this->wrong);
	HX_STACK_LINE(65)
	this->wrong->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onWrong_dyn(),null(),null(),null());
	HX_STACK_LINE(67)
	::openfl::_v2::text::TextField _g4 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(67)
	this->cat_text = _g4;
	HX_STACK_LINE(68)
	::openfl::_v2::text::TextFormat _g5 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)70,(int)16711680,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(68)
	this->cat_textf = _g5;
	HX_STACK_LINE(69)
	this->cat_text->set_defaultTextFormat(this->cat_textf);
	HX_STACK_LINE(70)
	this->cat_text->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(71)
	::String _g6 = this->readLine(HX_CSTRING("words/lol.txt"),(int)0);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(71)
	this->cat_text->set_text(_g6);
	HX_STACK_LINE(73)
	this->cat_text->set_x((int)100);
	HX_STACK_LINE(74)
	this->cat_text->set_y((int)100);
	HX_STACK_LINE(75)
	this->addChild(this->cat_text);
	HX_STACK_LINE(77)
	::openfl::_v2::text::TextField _g7 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(77)
	this->points = _g7;
	HX_STACK_LINE(78)
	::openfl::_v2::text::TextFormat _g8 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)35,(int)16711680,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(78)
	this->points_tf = _g8;
	HX_STACK_LINE(79)
	this->points->set_defaultTextFormat(this->points_tf);
	HX_STACK_LINE(80)
	this->points->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(81)
	::String _g9 = ::Std_obj::string(::Main_obj::points);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(81)
	this->points->set_text(_g9);
	HX_STACK_LINE(83)
	this->points->set_x((int)100);
	HX_STACK_LINE(84)
	this->points->set_y((int)400);
	HX_STACK_LINE(85)
	this->addChild(this->points);
}
;
	return null();
}

//CategoryOne_obj::~CategoryOne_obj() { }

Dynamic CategoryOne_obj::__CreateEmpty() { return  new CategoryOne_obj; }
hx::ObjectPtr< CategoryOne_obj > CategoryOne_obj::__new()
{  hx::ObjectPtr< CategoryOne_obj > result = new CategoryOne_obj();
	result->__construct();
	return result;}

Dynamic CategoryOne_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CategoryOne_obj > result = new CategoryOne_obj();
	result->__construct();
	return result;}

::String CategoryOne_obj::readLine( ::String fileName,int lineNumber){
	HX_STACK_FRAME("CategoryOne","readLine",0xfa7d21b0,"CategoryOne.readLine","CategoryOne.hx",90,0x27b431d6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fileName,"fileName")
	HX_STACK_ARG(lineNumber,"lineNumber")
	HX_STACK_LINE(91)
	::String text_file = ::openfl::_v2::Assets_obj::getText(fileName);		HX_STACK_VAR(text_file,"text_file");
	HX_STACK_LINE(92)
	Array< ::String > _g = text_file.split(HX_CSTRING("\n"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(92)
	this->words = _g;
	HX_STACK_LINE(93)
	this->line = this->words->__get(lineNumber);
	HX_STACK_LINE(94)
	return this->line;
}


HX_DEFINE_DYNAMIC_FUNC2(CategoryOne_obj,readLine,return )

Void CategoryOne_obj::onFrame( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("CategoryOne","onFrame",0x360ef208,"CategoryOne.onFrame","CategoryOne.hx",100,0x27b431d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(101)
		(this->frameCount)++;
		HX_STACK_LINE(103)
		if (((::Main_obj::zAcc > (int)1))){
			HX_STACK_LINE(105)
			::haxe::Log_obj::trace(HX_CSTRING("\xd0""\x9f""\xd0""\xa0""\xd0""\x90""\xd0""\x92""\xd0""\x9e""!"),hx::SourceInfo(HX_CSTRING("CategoryOne.hx"),105,HX_CSTRING("CategoryOne"),HX_CSTRING("onFrame")));
		}
		HX_STACK_LINE(107)
		if (((::Main_obj::zAcc < (int)0))){
			HX_STACK_LINE(109)
			::haxe::Log_obj::trace(HX_CSTRING("\xd0""\x9d""\xd0""\x95"" \xd0""\x9f""\xd0""\xa0""\xd0""\x90""\xd0""\x92""\xd0""\x9e"""),hx::SourceInfo(HX_CSTRING("CategoryOne.hx"),109,HX_CSTRING("CategoryOne"),HX_CSTRING("onFrame")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CategoryOne_obj,onFrame,(void))

Void CategoryOne_obj::onRight( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CategoryOne","onRight",0x18ef85b7,"CategoryOne.onRight","CategoryOne.hx",114,0x27b431d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(115)
		::haxe::Log_obj::trace(HX_CSTRING("\xd0""\x9f""\xd0""\xa0""\xd0""\x90""\xd0""\x92""\xd0""\x9e""!"),hx::SourceInfo(HX_CSTRING("CategoryOne.hx"),115,HX_CSTRING("CategoryOne"),HX_CSTRING("onRight")));
		HX_STACK_LINE(116)
		(this->wordNumber)++;
		HX_STACK_LINE(117)
		(::Main_obj::points)++;
		HX_STACK_LINE(118)
		::String _g = ::Std_obj::string(::Main_obj::points);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		this->points->set_text(_g);
		HX_STACK_LINE(119)
		::String _g1 = this->readLine(HX_CSTRING("words/lol.txt"),this->wordNumber);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(119)
		this->cat_text->set_text(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CategoryOne_obj,onRight,(void))

Void CategoryOne_obj::onWrong( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CategoryOne","onWrong",0xffe96f08,"CategoryOne.onWrong","CategoryOne.hx",123,0x27b431d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(124)
		::haxe::Log_obj::trace(HX_CSTRING("\xd0""\x9d""\xd0""\x95"" \xd0""\x9f""\xd0""\xa0""\xd0""\x90""\xd0""\x92""\xd0""\x9e""!"),hx::SourceInfo(HX_CSTRING("CategoryOne.hx"),124,HX_CSTRING("CategoryOne"),HX_CSTRING("onWrong")));
		HX_STACK_LINE(125)
		(this->wordNumber)++;
		HX_STACK_LINE(126)
		::String _g = this->readLine(HX_CSTRING("words/lol.txt"),this->wordNumber);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		this->cat_text->set_text(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CategoryOne_obj,onWrong,(void))

Void CategoryOne_obj::destroy( ){
{
		HX_STACK_FRAME("CategoryOne","destroy",0xbdd40874,"CategoryOne.destroy","CategoryOne.hx",130,0x27b431d6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CategoryOne_obj,destroy,(void))


CategoryOne_obj::CategoryOne_obj()
{
}

void CategoryOne_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CategoryOne);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(wrong,"wrong");
	HX_MARK_MEMBER_NAME(documentDer,"documentDer");
	HX_MARK_MEMBER_NAME(cat_text,"cat_text");
	HX_MARK_MEMBER_NAME(cat_textf,"cat_textf");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(points_tf,"points_tf");
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(words,"words");
	HX_MARK_MEMBER_NAME(wordNumber,"wordNumber");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CategoryOne_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(wrong,"wrong");
	HX_VISIT_MEMBER_NAME(documentDer,"documentDer");
	HX_VISIT_MEMBER_NAME(cat_text,"cat_text");
	HX_VISIT_MEMBER_NAME(cat_textf,"cat_textf");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(points_tf,"points_tf");
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(words,"words");
	HX_VISIT_MEMBER_NAME(wordNumber,"wordNumber");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CategoryOne_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"wrong") ) { return wrong; }
		if (HX_FIELD_EQ(inName,"words") ) { return words; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFrame") ) { return onFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"onRight") ) { return onRight_dyn(); }
		if (HX_FIELD_EQ(inName,"onWrong") ) { return onWrong_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cat_text") ) { return cat_text; }
		if (HX_FIELD_EQ(inName,"readLine") ) { return readLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cat_textf") ) { return cat_textf; }
		if (HX_FIELD_EQ(inName,"points_tf") ) { return points_tf; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"wordNumber") ) { return wordNumber; }
		if (HX_FIELD_EQ(inName,"frameCount") ) { return frameCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"documentDer") ) { return documentDer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CategoryOne_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrong") ) { wrong=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"words") ) { words=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cat_text") ) { cat_text=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cat_textf") ) { cat_textf=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points_tf") ) { points_tf=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordNumber") ) { wordNumber=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"documentDer") ) { documentDer=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CategoryOne_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("wrong"));
	outFields->push(HX_CSTRING("documentDer"));
	outFields->push(HX_CSTRING("cat_text"));
	outFields->push(HX_CSTRING("cat_textf"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("points_tf"));
	outFields->push(HX_CSTRING("line"));
	outFields->push(HX_CSTRING("words"));
	outFields->push(HX_CSTRING("wordNumber"));
	outFields->push(HX_CSTRING("frameCount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CategoryOne_obj,background),HX_CSTRING("background")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CategoryOne_obj,right),HX_CSTRING("right")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CategoryOne_obj,wrong),HX_CSTRING("wrong")},
	{hx::fsString,(int)offsetof(CategoryOne_obj,documentDer),HX_CSTRING("documentDer")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(CategoryOne_obj,cat_text),HX_CSTRING("cat_text")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(CategoryOne_obj,cat_textf),HX_CSTRING("cat_textf")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(CategoryOne_obj,points),HX_CSTRING("points")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(CategoryOne_obj,points_tf),HX_CSTRING("points_tf")},
	{hx::fsString,(int)offsetof(CategoryOne_obj,line),HX_CSTRING("line")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(CategoryOne_obj,words),HX_CSTRING("words")},
	{hx::fsInt,(int)offsetof(CategoryOne_obj,wordNumber),HX_CSTRING("wordNumber")},
	{hx::fsInt,(int)offsetof(CategoryOne_obj,frameCount),HX_CSTRING("frameCount")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("background"),
	HX_CSTRING("right"),
	HX_CSTRING("wrong"),
	HX_CSTRING("documentDer"),
	HX_CSTRING("cat_text"),
	HX_CSTRING("cat_textf"),
	HX_CSTRING("points"),
	HX_CSTRING("points_tf"),
	HX_CSTRING("line"),
	HX_CSTRING("words"),
	HX_CSTRING("wordNumber"),
	HX_CSTRING("readLine"),
	HX_CSTRING("frameCount"),
	HX_CSTRING("onFrame"),
	HX_CSTRING("onRight"),
	HX_CSTRING("onWrong"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CategoryOne_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CategoryOne_obj::__mClass,"__mClass");
};

#endif

Class CategoryOne_obj::__mClass;

void CategoryOne_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CategoryOne"), hx::TCanCast< CategoryOne_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void CategoryOne_obj::__boot()
{
}

