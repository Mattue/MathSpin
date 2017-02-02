#include <hxcpp.h>

#ifndef INCLUDED_StartScreen
#include <StartScreen.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif

Void StartScreen_obj::__construct()
{
HX_STACK_FRAME("StartScreen","new",0x40df9140,"StartScreen.new","StartScreen.hx",15,0x01705630)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(82)
	this->FrameCount = (int)0;
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(33)
	this->useHandCursor = true;
	HX_STACK_LINE(34)
	this->buttonMode = true;
	HX_STACK_LINE(39)
	::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/pi_spin.png"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(39)
	::openfl::_v2::display::Bitmap _g1 = ::openfl::_v2::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(39)
	this->spin_thing = _g1;
	HX_STACK_LINE(40)
	Float _g2 = -(this->spin_thing->get_width());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(40)
	Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(40)
	this->spin_thing->set_x(_g3);
	HX_STACK_LINE(41)
	Float _g4 = -(this->spin_thing->get_height());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(41)
	Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(41)
	this->spin_thing->set_y(_g5);
	HX_STACK_LINE(43)
	::openfl::_v2::display::Sprite _g6 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(43)
	this->spin = _g6;
	HX_STACK_LINE(44)
	Float _g7 = this->background->get_width();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(44)
	Float _g8 = (Float(_g7) / Float((int)2));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(44)
	Float _g9 = this->spin_thing->get_width();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(44)
	Float _g10 = (_g8 + _g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(44)
	this->spin->set_x(_g10);
	HX_STACK_LINE(45)
	Float _g11 = this->background->get_height();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(45)
	Float _g12 = (Float(_g11) / Float((int)2));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(45)
	this->spin->set_y(_g12);
	HX_STACK_LINE(46)
	this->spin->addChild(this->spin_thing);
	HX_STACK_LINE(47)
	this->addChild(this->spin);
	HX_STACK_LINE(49)
	::openfl::_v2::display::BitmapData _g13 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/logo.png"),null());		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(49)
	::openfl::_v2::display::Bitmap _g14 = ::openfl::_v2::display::Bitmap_obj::__new(_g13,null(),null());		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(49)
	this->logo = _g14;
	HX_STACK_LINE(50)
	Float _g15 = this->background->get_width();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(50)
	Float _g16 = (Float(_g15) / Float((int)2));		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(50)
	Float _g17 = this->spin->get_width();		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(50)
	Float _g18 = (_g17 * 1.5);		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(50)
	Float _g19 = (_g16 - _g18);		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(50)
	this->logo->set_x(_g19);
	HX_STACK_LINE(51)
	Float _g20 = this->background->get_height();		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(51)
	Float _g21 = (Float(_g20) / Float((int)2));		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(51)
	Float _g22 = this->logo->get_height();		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(51)
	Float _g23 = (_g21 - _g22);		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(51)
	this->logo->set_y(_g23);
	HX_STACK_LINE(52)
	this->addChild(this->logo);
	HX_STACK_LINE(54)
	::openfl::_v2::display::BitmapData _g24 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/sec_word.png"),null());		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(54)
	::openfl::_v2::display::Bitmap _g25 = ::openfl::_v2::display::Bitmap_obj::__new(_g24,null(),null());		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(54)
	this->sec_word = _g25;
	HX_STACK_LINE(55)
	Float _g26 = this->logo->get_x();		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(55)
	this->sec_word->set_x(_g26);
	HX_STACK_LINE(56)
	Float _g27 = this->logo->get_y();		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(56)
	Float _g28 = this->sec_word->get_height();		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(56)
	Float _g29 = (_g28 * 1.5);		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(56)
	Float _g30 = (_g27 + _g29);		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(56)
	this->sec_word->set_y(_g30);
	HX_STACK_LINE(57)
	this->addChild(this->sec_word);
	HX_STACK_LINE(59)
	::openfl::_v2::display::Sprite _g31 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(59)
	this->start_button = _g31;
	HX_STACK_LINE(60)
	Float _g32 = this->spin->get_x();		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(60)
	Float _g33 = this->spin->get_width();		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(60)
	Float _g34 = (_g32 - _g33);		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(60)
	this->start_button->set_x(_g34);
	HX_STACK_LINE(61)
	Float _g35 = this->spin->get_y();		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(61)
	Float _g36 = this->spin->get_height();		HX_STACK_VAR(_g36,"_g36");
	HX_STACK_LINE(61)
	Float _g37 = (Float(_g36) / Float((int)2));		HX_STACK_VAR(_g37,"_g37");
	HX_STACK_LINE(61)
	Float _g38 = (_g35 - _g37);		HX_STACK_VAR(_g38,"_g38");
	HX_STACK_LINE(61)
	this->start_button->set_y(_g38);
	HX_STACK_LINE(62)
	::openfl::_v2::display::BitmapData _g39 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/start.png"),null());		HX_STACK_VAR(_g39,"_g39");
	HX_STACK_LINE(62)
	::openfl::_v2::display::Bitmap _g40 = ::openfl::_v2::display::Bitmap_obj::__new(_g39,null(),null());		HX_STACK_VAR(_g40,"_g40");
	HX_STACK_LINE(62)
	this->start_button->addChild(_g40);
	HX_STACK_LINE(63)
	this->addChild(this->start_button);
	HX_STACK_LINE(65)
	this->start_button->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onStartClick_dyn(),null(),null(),null());
	HX_STACK_LINE(67)
	::openfl::_v2::display::Sprite _g41 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g41,"_g41");
	HX_STACK_LINE(67)
	this->about_button = _g41;
	HX_STACK_LINE(68)
	::openfl::_v2::display::BitmapData _g42 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/about.png"),null());		HX_STACK_VAR(_g42,"_g42");
	HX_STACK_LINE(68)
	::openfl::_v2::display::Bitmap _g43 = ::openfl::_v2::display::Bitmap_obj::__new(_g42,null(),null());		HX_STACK_VAR(_g43,"_g43");
	HX_STACK_LINE(68)
	this->about_button->addChild(_g43);
	HX_STACK_LINE(69)
	Float _g44 = this->spin->get_x();		HX_STACK_VAR(_g44,"_g44");
	HX_STACK_LINE(69)
	Float _g45 = this->spin->get_width();		HX_STACK_VAR(_g45,"_g45");
	HX_STACK_LINE(69)
	Float _g46 = (_g44 - _g45);		HX_STACK_VAR(_g46,"_g46");
	HX_STACK_LINE(69)
	this->about_button->set_x(_g46);
	HX_STACK_LINE(70)
	Float _g47 = this->spin->get_y();		HX_STACK_VAR(_g47,"_g47");
	HX_STACK_LINE(70)
	Float _g48 = this->spin->get_height();		HX_STACK_VAR(_g48,"_g48");
	HX_STACK_LINE(70)
	Float _g49 = (Float(_g48) / Float((int)2));		HX_STACK_VAR(_g49,"_g49");
	HX_STACK_LINE(70)
	Float _g50 = (_g47 + _g49);		HX_STACK_VAR(_g50,"_g50");
	HX_STACK_LINE(70)
	Float _g51 = this->about_button->get_height();		HX_STACK_VAR(_g51,"_g51");
	HX_STACK_LINE(70)
	Float _g52 = (_g50 - _g51);		HX_STACK_VAR(_g52,"_g52");
	HX_STACK_LINE(70)
	Float _g53 = (_g52 + (int)1);		HX_STACK_VAR(_g53,"_g53");
	HX_STACK_LINE(70)
	this->about_button->set_y(_g53);
	HX_STACK_LINE(71)
	this->addChild(this->about_button);
	HX_STACK_LINE(73)
	this->about_button->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onAboutClick_dyn(),null(),null(),null());
	HX_STACK_LINE(76)
	this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->onFrame_dyn(),null(),null(),null());
}
;
	return null();
}

//StartScreen_obj::~StartScreen_obj() { }

Dynamic StartScreen_obj::__CreateEmpty() { return  new StartScreen_obj; }
hx::ObjectPtr< StartScreen_obj > StartScreen_obj::__new()
{  hx::ObjectPtr< StartScreen_obj > result = new StartScreen_obj();
	result->__construct();
	return result;}

Dynamic StartScreen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StartScreen_obj > result = new StartScreen_obj();
	result->__construct();
	return result;}

Void StartScreen_obj::onStartClick( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("StartScreen","onStartClick",0x2dde19a5,"StartScreen.onStartClick","StartScreen.hx",85,0x01705630)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(87)
		::openfl::_v2::events::Event _g = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("startgame"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StartScreen_obj,onStartClick,(void))

Void StartScreen_obj::onAboutClick( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("StartScreen","onAboutClick",0x712aebda,"StartScreen.onAboutClick","StartScreen.hx",92,0x01705630)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(92)
		::haxe::Log_obj::trace(HX_CSTRING("about"),hx::SourceInfo(HX_CSTRING("StartScreen.hx"),92,HX_CSTRING("StartScreen"),HX_CSTRING("onAboutClick")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StartScreen_obj,onAboutClick,(void))

Void StartScreen_obj::onFrame( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("StartScreen","onFrame",0x67eec76e,"StartScreen.onFrame","StartScreen.hx",96,0x01705630)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(97)
		(this->FrameCount)++;
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			::openfl::_v2::display::Sprite _g = this->spin;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(99)
			Float _g1 = _g->get_rotation();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(99)
			_g->set_rotation((_g1 + (int)1));
			HX_STACK_LINE(99)
			_g1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StartScreen_obj,onFrame,(void))

Void StartScreen_obj::destroy( ){
{
		HX_STACK_FRAME("StartScreen","destroy",0xefb3ddda,"StartScreen.destroy","StartScreen.hx",104,0x01705630)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->onFrame_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StartScreen_obj,destroy,(void))


StartScreen_obj::StartScreen_obj()
{
}

void StartScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StartScreen);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(spin,"spin");
	HX_MARK_MEMBER_NAME(spin_thing,"spin_thing");
	HX_MARK_MEMBER_NAME(logo,"logo");
	HX_MARK_MEMBER_NAME(sec_word,"sec_word");
	HX_MARK_MEMBER_NAME(start_button,"start_button");
	HX_MARK_MEMBER_NAME(about_button,"about_button");
	HX_MARK_MEMBER_NAME(FrameCount,"FrameCount");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StartScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(spin,"spin");
	HX_VISIT_MEMBER_NAME(spin_thing,"spin_thing");
	HX_VISIT_MEMBER_NAME(logo,"logo");
	HX_VISIT_MEMBER_NAME(sec_word,"sec_word");
	HX_VISIT_MEMBER_NAME(start_button,"start_button");
	HX_VISIT_MEMBER_NAME(about_button,"about_button");
	HX_VISIT_MEMBER_NAME(FrameCount,"FrameCount");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StartScreen_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"spin") ) { return spin; }
		if (HX_FIELD_EQ(inName,"logo") ) { return logo; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFrame") ) { return onFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sec_word") ) { return sec_word; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"spin_thing") ) { return spin_thing; }
		if (HX_FIELD_EQ(inName,"FrameCount") ) { return FrameCount; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"start_button") ) { return start_button; }
		if (HX_FIELD_EQ(inName,"about_button") ) { return about_button; }
		if (HX_FIELD_EQ(inName,"onStartClick") ) { return onStartClick_dyn(); }
		if (HX_FIELD_EQ(inName,"onAboutClick") ) { return onAboutClick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StartScreen_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"spin") ) { spin=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"logo") ) { logo=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sec_word") ) { sec_word=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spin_thing") ) { spin_thing=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FrameCount") ) { FrameCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"start_button") ) { start_button=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"about_button") ) { about_button=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StartScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("spin"));
	outFields->push(HX_CSTRING("spin_thing"));
	outFields->push(HX_CSTRING("logo"));
	outFields->push(HX_CSTRING("sec_word"));
	outFields->push(HX_CSTRING("start_button"));
	outFields->push(HX_CSTRING("about_button"));
	outFields->push(HX_CSTRING("FrameCount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(StartScreen_obj,background),HX_CSTRING("background")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(StartScreen_obj,spin),HX_CSTRING("spin")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(StartScreen_obj,spin_thing),HX_CSTRING("spin_thing")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(StartScreen_obj,logo),HX_CSTRING("logo")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(StartScreen_obj,sec_word),HX_CSTRING("sec_word")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(StartScreen_obj,start_button),HX_CSTRING("start_button")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(StartScreen_obj,about_button),HX_CSTRING("about_button")},
	{hx::fsInt,(int)offsetof(StartScreen_obj,FrameCount),HX_CSTRING("FrameCount")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("background"),
	HX_CSTRING("spin"),
	HX_CSTRING("spin_thing"),
	HX_CSTRING("logo"),
	HX_CSTRING("sec_word"),
	HX_CSTRING("start_button"),
	HX_CSTRING("about_button"),
	HX_CSTRING("FrameCount"),
	HX_CSTRING("onStartClick"),
	HX_CSTRING("onAboutClick"),
	HX_CSTRING("onFrame"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StartScreen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StartScreen_obj::__mClass,"__mClass");
};

#endif

Class StartScreen_obj::__mClass;

void StartScreen_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("StartScreen"), hx::TCanCast< StartScreen_obj> ,sStaticFields,sMemberFields,
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

void StartScreen_obj::__boot()
{
}

