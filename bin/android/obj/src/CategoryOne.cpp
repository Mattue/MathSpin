#include <hxcpp.h>

#ifndef INCLUDED_CategoryChoose
#include <CategoryChoose.h>
#endif
#ifndef INCLUDED_CategoryOne
#include <CategoryOne.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
	HX_STACK_LINE(192)
	this->frameCount = (int)0;
	HX_STACK_LINE(56)
	this->time_time = (int)30;
	HX_STACK_LINE(52)
	this->pause_kostil = false;
	HX_STACK_LINE(51)
	this->kostil = false;
	HX_STACK_LINE(50)
	this->checkBool = true;
	HX_STACK_LINE(48)
	this->sec = (int)1;
	HX_STACK_LINE(60)
	super::__construct();
	HX_STACK_LINE(62)
	this->useHandCursor = true;
	HX_STACK_LINE(63)
	this->buttonMode = true;
	HX_STACK_LINE(65)
	this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->onFrame_dyn(),null(),null(),null());
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		::String _g = ::CategoryChoose_obj::category;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		::String _switch_1 = (_g);
		if (  ( _switch_1==HX_CSTRING("sweet_imit"))){
			HX_STACK_LINE(69)
			this->fileName = HX_CSTRING("words/sweet_imit.txt");
		}
		else if (  ( _switch_1==HX_CSTRING("school_math"))){
			HX_STACK_LINE(70)
			this->fileName = HX_CSTRING("words/school_math.txt");
		}
		else if (  ( _switch_1==HX_CSTRING("algebra&logic"))){
			HX_STACK_LINE(71)
			this->fileName = HX_CSTRING("words/algebra&logic.txt");
		}
		else if (  ( _switch_1==HX_CSTRING("geometry"))){
			HX_STACK_LINE(72)
			this->fileName = HX_CSTRING("words/geometry.txt");
		}
		else if (  ( _switch_1==HX_CSTRING("mathematics"))){
			HX_STACK_LINE(73)
			this->fileName = HX_CSTRING("words/mathematics.txt");
		}
	}
	HX_STACK_LINE(76)
	::Main_obj::points = (int)0;
	HX_STACK_LINE(78)
	::String text_file = ::openfl::_v2::Assets_obj::getText(this->fileName);		HX_STACK_VAR(text_file,"text_file");
	HX_STACK_LINE(79)
	Array< ::String > _g = text_file.split(HX_CSTRING("\n"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(79)
	this->words = _g;
	HX_STACK_LINE(80)
	Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(80)
	Float _g2 = (_g1 * this->words->length);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(80)
	int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(80)
	this->lineNumber = _g3;
	HX_STACK_LINE(82)
	::openfl::_v2::display::BitmapData _g4 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/background_blackboard.png"),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(82)
	::openfl::_v2::display::Bitmap _g5 = ::openfl::_v2::display::Bitmap_obj::__new(_g4,null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(82)
	this->background = _g5;
	HX_STACK_LINE(83)
	this->addChild(this->background);
	HX_STACK_LINE(85)
	::openfl::_v2::text::TextField _g6 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(85)
	this->cat_text = _g6;
	HX_STACK_LINE(86)
	::openfl::_v2::text::TextFormat _g7 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)70,(int)16711680,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(86)
	this->cat_textf = _g7;
	HX_STACK_LINE(87)
	this->cat_text->set_defaultTextFormat(this->cat_textf);
	HX_STACK_LINE(88)
	this->cat_text->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(89)
	::String _g8 = this->readLine(this->fileName,this->lineNumber);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(89)
	this->cat_text->set_text(_g8);
	HX_STACK_LINE(91)
	this->cat_text->set_x((int)50);
	HX_STACK_LINE(92)
	this->cat_text->set_y((int)100);
	HX_STACK_LINE(93)
	this->addChild(this->cat_text);
	HX_STACK_LINE(95)
	::openfl::_v2::text::TextField _g9 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(95)
	this->points = _g9;
	HX_STACK_LINE(96)
	::openfl::_v2::text::TextFormat _g10 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)35,(int)16711680,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(96)
	this->points_tf = _g10;
	HX_STACK_LINE(97)
	this->points->set_defaultTextFormat(this->points_tf);
	HX_STACK_LINE(98)
	this->points->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(99)
	::String _g11 = ::Std_obj::string(::Main_obj::points);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(99)
	this->points->set_text(_g11);
	HX_STACK_LINE(101)
	this->points->set_x((int)100);
	HX_STACK_LINE(102)
	this->points->set_y((int)400);
	HX_STACK_LINE(103)
	this->addChild(this->points);
	HX_STACK_LINE(161)
	::openfl::_v2::display::Sprite _g12 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(161)
	this->pause_but = _g12;
	HX_STACK_LINE(162)
	this->pause_but->get_graphics()->beginFill((int)16711680,null());
	HX_STACK_LINE(163)
	this->pause_but->get_graphics()->drawCircle((int)0,(int)0,(int)15);
	HX_STACK_LINE(164)
	this->pause_but->set_x((int)400);
	HX_STACK_LINE(165)
	this->pause_but->set_y((int)400);
	HX_STACK_LINE(166)
	this->pause_but->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onPause_dyn(),null(),null(),null());
	HX_STACK_LINE(167)
	this->addChild(this->pause_but);
	HX_STACK_LINE(169)
	::openfl::_v2::text::TextField _g13 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(169)
	this->time = _g13;
	HX_STACK_LINE(170)
	::openfl::_v2::text::TextFormat _g14 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)70,(int)65280,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(170)
	this->timef = _g14;
	HX_STACK_LINE(171)
	this->time->set_defaultTextFormat(this->timef);
	HX_STACK_LINE(172)
	this->time->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(173)
	::String _g15 = ::Std_obj::string(this->time_time);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(173)
	this->time->set_text(_g15);
	HX_STACK_LINE(175)
	this->time->set_x((int)250);
	HX_STACK_LINE(176)
	this->time->set_y((int)250);
	HX_STACK_LINE(177)
	this->addChild(this->time);
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
	HX_STACK_FRAME("CategoryOne","readLine",0xfa7d21b0,"CategoryOne.readLine","CategoryOne.hx",182,0x27b431d6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fileName,"fileName")
	HX_STACK_ARG(lineNumber,"lineNumber")
	HX_STACK_LINE(183)
	this->line = this->words->__get(lineNumber);
	HX_STACK_LINE(184)
	return this->line;
}


HX_DEFINE_DYNAMIC_FUNC2(CategoryOne_obj,readLine,return )

Void CategoryOne_obj::onPause( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CategoryOne","onPause",0xece350d1,"CategoryOne.onPause","CategoryOne.hx",189,0x27b431d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(189)
		this->pause_kostil = !(this->pause_kostil);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CategoryOne_obj,onPause,(void))

Void CategoryOne_obj::onFrame( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("CategoryOne","onFrame",0x360ef208,"CategoryOne.onFrame","CategoryOne.hx",195,0x27b431d6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(196)
		(this->frameCount)++;
		HX_STACK_LINE(206)
		if (((this->pause_kostil == false))){
			HX_STACK_LINE(208)
			if (((hx::Mod(this->frameCount,(int)60) == (int)0))){
				HX_STACK_LINE(210)
				(this->time_time)--;
				HX_STACK_LINE(211)
				::String _g = ::Std_obj::string(this->time_time);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(211)
				this->time->set_text(_g);
			}
		}
		HX_STACK_LINE(215)
		if (((this->time_time == (int)0))){
			HX_STACK_LINE(217)
			::openfl::_v2::events::Event _g1 = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("categoryEnd"),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(217)
			this->dispatchEvent(_g1);
		}
		HX_STACK_LINE(220)
		if (((bool((::Main_obj::zAcc > 0.9)) || bool((::Main_obj::zAcc < -0.9))))){
			HX_STACK_LINE(222)
			return null();
		}
		HX_STACK_LINE(225)
		if (((this->kostil == true))){
			HX_STACK_LINE(227)
			if (((hx::Mod(this->frameCount,(int)60) == (int)0))){
				HX_STACK_LINE(229)
				(this->sec)--;
			}
			HX_STACK_LINE(231)
			if (((this->sec == (int)0))){
				HX_STACK_LINE(233)
				this->kostil = false;
				HX_STACK_LINE(234)
				this->checkBool = true;
			}
		}
		HX_STACK_LINE(246)
		if (((this->pause_kostil == false))){
			HX_STACK_LINE(248)
			if (((::Main_obj::zAcc > 0.5))){
				HX_STACK_LINE(250)
				if (((this->checkBool == true))){
					HX_STACK_LINE(252)
					this->onRight();
				}
			}
			HX_STACK_LINE(255)
			if (((::Main_obj::zAcc < -0.5))){
				HX_STACK_LINE(257)
				if (((this->checkBool == true))){
					HX_STACK_LINE(259)
					this->onWrong();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CategoryOne_obj,onFrame,(void))

Void CategoryOne_obj::onRight( ){
{
		HX_STACK_FRAME("CategoryOne","onRight",0x18ef85b7,"CategoryOne.onRight","CategoryOne.hx",267,0x27b431d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(269)
		this->checkBool = false;
		HX_STACK_LINE(270)
		this->kostil = true;
		HX_STACK_LINE(271)
		this->sec = (int)1;
		HX_STACK_LINE(273)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(273)
		Float _g1 = (_g * this->words->length);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(273)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(273)
		this->lineNumber = _g2;
		HX_STACK_LINE(274)
		(::Main_obj::points)++;
		HX_STACK_LINE(275)
		::String _g3 = ::Std_obj::string(::Main_obj::points);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(275)
		this->points->set_text(_g3);
		HX_STACK_LINE(276)
		::String _g4 = this->readLine(this->fileName,this->lineNumber);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(276)
		this->cat_text->set_text(_g4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CategoryOne_obj,onRight,(void))

Void CategoryOne_obj::onWrong( ){
{
		HX_STACK_FRAME("CategoryOne","onWrong",0xffe96f08,"CategoryOne.onWrong","CategoryOne.hx",280,0x27b431d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(282)
		this->checkBool = false;
		HX_STACK_LINE(283)
		this->kostil = true;
		HX_STACK_LINE(284)
		this->sec = (int)1;
		HX_STACK_LINE(286)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(286)
		Float _g1 = (_g * this->words->length);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(286)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(286)
		this->lineNumber = _g2;
		HX_STACK_LINE(287)
		::String _g3 = this->readLine(this->fileName,this->lineNumber);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(287)
		this->cat_text->set_text(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CategoryOne_obj,onWrong,(void))

Void CategoryOne_obj::destroy( ){
{
		HX_STACK_FRAME("CategoryOne","destroy",0xbdd40874,"CategoryOne.destroy","CategoryOne.hx",292,0x27b431d6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->onFrame_dyn(),null());
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
	HX_MARK_MEMBER_NAME(pause_but,"pause_but");
	HX_MARK_MEMBER_NAME(cat_text,"cat_text");
	HX_MARK_MEMBER_NAME(cat_textf,"cat_textf");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(points_tf,"points_tf");
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(lineNumber,"lineNumber");
	HX_MARK_MEMBER_NAME(fileName,"fileName");
	HX_MARK_MEMBER_NAME(words,"words");
	HX_MARK_MEMBER_NAME(sec,"sec");
	HX_MARK_MEMBER_NAME(checkBool,"checkBool");
	HX_MARK_MEMBER_NAME(kostil,"kostil");
	HX_MARK_MEMBER_NAME(pause_kostil,"pause_kostil");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(timef,"timef");
	HX_MARK_MEMBER_NAME(time_time,"time_time");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CategoryOne_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(pause_but,"pause_but");
	HX_VISIT_MEMBER_NAME(cat_text,"cat_text");
	HX_VISIT_MEMBER_NAME(cat_textf,"cat_textf");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(points_tf,"points_tf");
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(lineNumber,"lineNumber");
	HX_VISIT_MEMBER_NAME(fileName,"fileName");
	HX_VISIT_MEMBER_NAME(words,"words");
	HX_VISIT_MEMBER_NAME(sec,"sec");
	HX_VISIT_MEMBER_NAME(checkBool,"checkBool");
	HX_VISIT_MEMBER_NAME(kostil,"kostil");
	HX_VISIT_MEMBER_NAME(pause_kostil,"pause_kostil");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(timef,"timef");
	HX_VISIT_MEMBER_NAME(time_time,"time_time");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CategoryOne_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sec") ) { return sec; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line; }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"words") ) { return words; }
		if (HX_FIELD_EQ(inName,"timef") ) { return timef; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		if (HX_FIELD_EQ(inName,"kostil") ) { return kostil; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onPause") ) { return onPause_dyn(); }
		if (HX_FIELD_EQ(inName,"onFrame") ) { return onFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"onRight") ) { return onRight_dyn(); }
		if (HX_FIELD_EQ(inName,"onWrong") ) { return onWrong_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cat_text") ) { return cat_text; }
		if (HX_FIELD_EQ(inName,"fileName") ) { return fileName; }
		if (HX_FIELD_EQ(inName,"readLine") ) { return readLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pause_but") ) { return pause_but; }
		if (HX_FIELD_EQ(inName,"cat_textf") ) { return cat_textf; }
		if (HX_FIELD_EQ(inName,"points_tf") ) { return points_tf; }
		if (HX_FIELD_EQ(inName,"checkBool") ) { return checkBool; }
		if (HX_FIELD_EQ(inName,"time_time") ) { return time_time; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"lineNumber") ) { return lineNumber; }
		if (HX_FIELD_EQ(inName,"frameCount") ) { return frameCount; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pause_kostil") ) { return pause_kostil; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CategoryOne_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sec") ) { sec=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"words") ) { words=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timef") ) { timef=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kostil") ) { kostil=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cat_text") ) { cat_text=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fileName") ) { fileName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pause_but") ) { pause_but=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cat_textf") ) { cat_textf=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points_tf") ) { points_tf=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"checkBool") ) { checkBool=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time_time") ) { time_time=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineNumber") ) { lineNumber=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pause_kostil") ) { pause_kostil=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CategoryOne_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("pause_but"));
	outFields->push(HX_CSTRING("cat_text"));
	outFields->push(HX_CSTRING("cat_textf"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("points_tf"));
	outFields->push(HX_CSTRING("line"));
	outFields->push(HX_CSTRING("lineNumber"));
	outFields->push(HX_CSTRING("fileName"));
	outFields->push(HX_CSTRING("words"));
	outFields->push(HX_CSTRING("sec"));
	outFields->push(HX_CSTRING("checkBool"));
	outFields->push(HX_CSTRING("kostil"));
	outFields->push(HX_CSTRING("pause_kostil"));
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("timef"));
	outFields->push(HX_CSTRING("time_time"));
	outFields->push(HX_CSTRING("frameCount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CategoryOne_obj,background),HX_CSTRING("background")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CategoryOne_obj,pause_but),HX_CSTRING("pause_but")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(CategoryOne_obj,cat_text),HX_CSTRING("cat_text")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(CategoryOne_obj,cat_textf),HX_CSTRING("cat_textf")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(CategoryOne_obj,points),HX_CSTRING("points")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(CategoryOne_obj,points_tf),HX_CSTRING("points_tf")},
	{hx::fsString,(int)offsetof(CategoryOne_obj,line),HX_CSTRING("line")},
	{hx::fsInt,(int)offsetof(CategoryOne_obj,lineNumber),HX_CSTRING("lineNumber")},
	{hx::fsString,(int)offsetof(CategoryOne_obj,fileName),HX_CSTRING("fileName")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(CategoryOne_obj,words),HX_CSTRING("words")},
	{hx::fsInt,(int)offsetof(CategoryOne_obj,sec),HX_CSTRING("sec")},
	{hx::fsBool,(int)offsetof(CategoryOne_obj,checkBool),HX_CSTRING("checkBool")},
	{hx::fsBool,(int)offsetof(CategoryOne_obj,kostil),HX_CSTRING("kostil")},
	{hx::fsBool,(int)offsetof(CategoryOne_obj,pause_kostil),HX_CSTRING("pause_kostil")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(CategoryOne_obj,time),HX_CSTRING("time")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(CategoryOne_obj,timef),HX_CSTRING("timef")},
	{hx::fsInt,(int)offsetof(CategoryOne_obj,time_time),HX_CSTRING("time_time")},
	{hx::fsInt,(int)offsetof(CategoryOne_obj,frameCount),HX_CSTRING("frameCount")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("background"),
	HX_CSTRING("pause_but"),
	HX_CSTRING("cat_text"),
	HX_CSTRING("cat_textf"),
	HX_CSTRING("points"),
	HX_CSTRING("points_tf"),
	HX_CSTRING("line"),
	HX_CSTRING("lineNumber"),
	HX_CSTRING("fileName"),
	HX_CSTRING("words"),
	HX_CSTRING("sec"),
	HX_CSTRING("checkBool"),
	HX_CSTRING("kostil"),
	HX_CSTRING("pause_kostil"),
	HX_CSTRING("time"),
	HX_CSTRING("timef"),
	HX_CSTRING("time_time"),
	HX_CSTRING("readLine"),
	HX_CSTRING("onPause"),
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

