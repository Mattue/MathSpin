#include <hxcpp.h>

#ifndef INCLUDED_CategoryChoose
#include <CategoryChoose.h>
#endif
#ifndef INCLUDED_Category_Button
#include <Category_Button.h>
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

Void CategoryChoose_obj::__construct()
{
HX_STACK_FRAME("CategoryChoose","new",0x55b1f007,"CategoryChoose.new","CategoryChoose.hx",15,0x3d3a2d49)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(168)
	this->frameCount = (int)0;
	HX_STACK_LINE(32)
	this->sec = (int)3;
	HX_STACK_LINE(42)
	super::__construct();
	HX_STACK_LINE(44)
	this->useHandCursor = true;
	HX_STACK_LINE(45)
	this->buttonMode = true;
	HX_STACK_LINE(47)
	::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/background_blackboard.png"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	::openfl::_v2::display::Bitmap _g1 = ::openfl::_v2::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(47)
	this->background = _g1;
	HX_STACK_LINE(48)
	this->addChild(this->background);
	HX_STACK_LINE(50)
	::Category_Button _g2 = ::Category_Button_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(50)
	this->one = _g2;
	HX_STACK_LINE(51)
	this->one->cat_text->set_text(HX_CSTRING("\xd0""\x9b""\xd1""\x8e""\xd0""\xb1""\xd0""\xb8""\xd0""\xbc""\xd1""\x8b""\xd0""\xb9""\n\xd0""\x98""\xd0""\x9c""\xd0""\x98""\xd0""\xa2"""));
	HX_STACK_LINE(52)
	this->addChild(this->one);
	HX_STACK_LINE(54)
	::Category_Button _g3 = ::Category_Button_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(54)
	this->two = _g3;
	HX_STACK_LINE(55)
	this->two->cat_text->set_text(HX_CSTRING("\xd0""\xa8""\xd0""\xba""\xd0""\xbe""\xd0""\xbb""\xd1""\x8c""\xd0""\xbd""\xd0""\xb0""\xd1""\x8f""\n\xd0""\x9c""\xd0""\xb0""\xd1""\x82""\xd0""\xb5""\xd0""\xbc""\xd0""\xb0""\xd1""\x82""\xd0""\xb8""\xd0""\xba""\xd0""\xb0"""));
	HX_STACK_LINE(56)
	Float _g4 = this->one->get_x();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(56)
	Float _g5 = (_g4 + (int)250);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(56)
	this->two->set_x(_g5);
	HX_STACK_LINE(57)
	Float _g6 = this->one->get_y();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(57)
	this->two->set_y(_g6);
	HX_STACK_LINE(58)
	this->addChild(this->two);
	HX_STACK_LINE(60)
	::Category_Button _g7 = ::Category_Button_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(60)
	this->three = _g7;
	HX_STACK_LINE(61)
	this->three->cat_text->set_text(HX_CSTRING("\xd0""\x90""\xd0""\xbb""\xd0""\xb3""\xd0""\xb5""\xd0""\xb1""\xd1""\x80""\xd0""\xb0"" \xd0""\xb8""\n\xd0""\x9b""\xd0""\xbe""\xd0""\xb3""\xd0""\xb8""\xd0""\xba""\xd0""\xb0"""));
	HX_STACK_LINE(62)
	Float _g8 = this->two->get_x();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(62)
	Float _g9 = (_g8 + (int)250);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(62)
	this->three->set_x(_g9);
	HX_STACK_LINE(63)
	Float _g10 = this->two->get_y();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(63)
	this->three->set_y(_g10);
	HX_STACK_LINE(64)
	this->addChild(this->three);
	HX_STACK_LINE(66)
	::Category_Button _g11 = ::Category_Button_obj::__new();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(66)
	this->four = _g11;
	HX_STACK_LINE(67)
	this->four->cat_text->set_text(HX_CSTRING("\xd0""\x93""\xd0""\xb5""\xd0""\xbe""\xd0""\xbc""\xd0""\xb5""\xd1""\x82""\xd1""\x80""\xd0""\xb8""\xd1""\x8f"""));
	HX_STACK_LINE(68)
	Float _g12 = this->three->get_x();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(68)
	this->four->set_x(_g12);
	HX_STACK_LINE(69)
	Float _g13 = this->three->get_y();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(69)
	Float _g14 = (_g13 + (int)200);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(69)
	this->four->set_y(_g14);
	HX_STACK_LINE(70)
	this->addChild(this->four);
	HX_STACK_LINE(72)
	::Category_Button _g15 = ::Category_Button_obj::__new();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(72)
	this->five = _g15;
	HX_STACK_LINE(73)
	this->five->cat_text->set_text(HX_CSTRING("\xd0""\x9c""\xd0""\xb0""\xd1""\x82""\xd0""\xb5""\xd0""\xbc""\xd0""\xb0""\xd1""\x82""\xd0""\xb8""\xd0""\xba""\xd0""\xb8""\n\xd0""\xbb""\xd0""\xb5""\xd0""\xb3""\xd0""\xba""\xd0""\xbe""\xd0""\xb5"""));
	HX_STACK_LINE(74)
	Float _g16 = this->one->get_x();		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(74)
	this->five->set_x(_g16);
	HX_STACK_LINE(75)
	Float _g17 = this->one->get_y();		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(75)
	Float _g18 = (_g17 + (int)200);		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(75)
	this->five->set_y(_g18);
	HX_STACK_LINE(76)
	this->addChild(this->five);
	HX_STACK_LINE(78)
	::openfl::_v2::display::Sprite _g19 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(78)
	this->back_but = _g19;
	HX_STACK_LINE(79)
	this->back_but->get_graphics()->beginFill((int)267386880,null());
	HX_STACK_LINE(80)
	this->back_but->get_graphics()->drawCircle((int)0,(int)0,(int)20);
	HX_STACK_LINE(81)
	this->back_but->set_x((int)20);
	HX_STACK_LINE(82)
	this->back_but->set_y((int)20);
	HX_STACK_LINE(83)
	this->addChild(this->back_but);
	HX_STACK_LINE(85)
	this->back_but->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->backClick_dyn(),null(),null(),null());
	HX_STACK_LINE(87)
	::openfl::_v2::text::TextField _g20 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(87)
	this->time = _g20;
	HX_STACK_LINE(88)
	::openfl::_v2::text::TextFormat _g21 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)70,(int)65280,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(88)
	this->timef = _g21;
	HX_STACK_LINE(89)
	this->time->set_defaultTextFormat(this->timef);
	HX_STACK_LINE(90)
	this->time->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(91)
	::String _g22 = ::Std_obj::string(this->sec);		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(91)
	this->time->set_text(_g22);
	HX_STACK_LINE(93)
	this->time->set_x((int)250);
	HX_STACK_LINE(94)
	this->time->set_y((int)250);
	HX_STACK_LINE(96)
	::openfl::_v2::text::TextField _g23 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(96)
	this->result = _g23;
	HX_STACK_LINE(97)
	::openfl::_v2::text::TextFormat _g24 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)70,(int)16711680,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(97)
	this->result_tf = _g24;
	HX_STACK_LINE(98)
	this->result->set_defaultTextFormat(this->result_tf);
	HX_STACK_LINE(99)
	this->result->set_autoSize(::openfl::text::TextFieldAutoSize_obj::CENTER);
	HX_STACK_LINE(100)
	::String _g25 = ::Std_obj::string(::Main_obj::points);		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(100)
	this->result->set_text(_g25);
	HX_STACK_LINE(102)
	Float _g26 = this->two->get_x();		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(102)
	Float _g27 = (_g26 + (int)150);		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(102)
	this->result->set_x(_g27);
	HX_STACK_LINE(103)
	Float _g28 = this->five->get_y();		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(103)
	Float _g29 = (_g28 + (int)100);		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(103)
	this->result->set_y(_g29);
	HX_STACK_LINE(104)
	this->addChild(this->result);
	HX_STACK_LINE(106)
	::openfl::_v2::display::Sprite _g30 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(106)
	this->rect = _g30;
	HX_STACK_LINE(107)
	this->rect->get_graphics()->beginFill((int)0,null());
	HX_STACK_LINE(108)
	this->rect->get_graphics()->drawRect((int)0,(int)0,(int)1000,(int)1000);
	HX_STACK_LINE(109)
	this->rect->set_alpha(0.5);
	HX_STACK_LINE(111)
	Dynamic _g31;		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->Category1Click_dyn()));		HX_STACK_VAR(f,"f");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,f)
		Void run(::openfl::_v2::events::MouseEvent e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","CategoryChoose.hx",111,0x3d3a2d49)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(111)
				return null(f->__GetItem((int)0)((int)1,e).Cast< Void >());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(111)
		_g31 =  Dynamic(new _Function_2_1(f));
	}
	HX_STACK_LINE(111)
	this->one->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,_g31,null(),null(),null());
	HX_STACK_LINE(112)
	Dynamic _g32;		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(112)
	{
		HX_STACK_LINE(112)
		Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->Category1Click_dyn()));		HX_STACK_VAR(f,"f");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,f)
		Void run(::openfl::_v2::events::MouseEvent e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","CategoryChoose.hx",112,0x3d3a2d49)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(112)
				return null(f->__GetItem((int)0)((int)2,e).Cast< Void >());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(112)
		_g32 =  Dynamic(new _Function_2_1(f));
	}
	HX_STACK_LINE(112)
	this->two->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,_g32,null(),null(),null());
	HX_STACK_LINE(113)
	Dynamic _g33;		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(113)
	{
		HX_STACK_LINE(113)
		Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->Category1Click_dyn()));		HX_STACK_VAR(f,"f");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,f)
		Void run(::openfl::_v2::events::MouseEvent e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","CategoryChoose.hx",113,0x3d3a2d49)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(113)
				return null(f->__GetItem((int)0)((int)3,e).Cast< Void >());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(113)
		_g33 =  Dynamic(new _Function_2_1(f));
	}
	HX_STACK_LINE(113)
	this->three->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,_g33,null(),null(),null());
	HX_STACK_LINE(114)
	Dynamic _g34;		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(114)
	{
		HX_STACK_LINE(114)
		Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->Category1Click_dyn()));		HX_STACK_VAR(f,"f");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,f)
		Void run(::openfl::_v2::events::MouseEvent e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","CategoryChoose.hx",114,0x3d3a2d49)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(114)
				return null(f->__GetItem((int)0)((int)4,e).Cast< Void >());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(114)
		_g34 =  Dynamic(new _Function_2_1(f));
	}
	HX_STACK_LINE(114)
	this->four->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,_g34,null(),null(),null());
	HX_STACK_LINE(115)
	Dynamic _g35;		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(115)
	{
		HX_STACK_LINE(115)
		Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->Category1Click_dyn()));		HX_STACK_VAR(f,"f");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,f)
		Void run(::openfl::_v2::events::MouseEvent e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","CategoryChoose.hx",115,0x3d3a2d49)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(115)
				return null(f->__GetItem((int)0)((int)5,e).Cast< Void >());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(115)
		_g35 =  Dynamic(new _Function_2_1(f));
	}
	HX_STACK_LINE(115)
	this->five->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,_g35,null(),null(),null());
	HX_STACK_LINE(117)
	this->addChild(this->rect);
	HX_STACK_LINE(118)
	this->addChild(this->time);
	HX_STACK_LINE(120)
	this->rect->set_visible(false);
	HX_STACK_LINE(121)
	this->time->set_visible(false);
}
;
	return null();
}

//CategoryChoose_obj::~CategoryChoose_obj() { }

Dynamic CategoryChoose_obj::__CreateEmpty() { return  new CategoryChoose_obj; }
hx::ObjectPtr< CategoryChoose_obj > CategoryChoose_obj::__new()
{  hx::ObjectPtr< CategoryChoose_obj > result = new CategoryChoose_obj();
	result->__construct();
	return result;}

Dynamic CategoryChoose_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CategoryChoose_obj > result = new CategoryChoose_obj();
	result->__construct();
	return result;}

Void CategoryChoose_obj::backClick( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CategoryChoose","backClick",0x0ecfbb88,"CategoryChoose.backClick","CategoryChoose.hx",127,0x3d3a2d49)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(128)
		::openfl::_v2::events::Event _g = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("back"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(128)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CategoryChoose_obj,backClick,(void))

Void CategoryChoose_obj::Category1Click( int categorynumber,::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CategoryChoose","Category1Click",0x891a6fae,"CategoryChoose.Category1Click","CategoryChoose.hx",132,0x3d3a2d49)
		HX_STACK_THIS(this)
		HX_STACK_ARG(categorynumber,"categorynumber")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(134)
		switch( (int)(categorynumber)){
			case (int)1: {
				HX_STACK_LINE(138)
				::haxe::Log_obj::trace(HX_CSTRING("\xd0""\x9b""\xd1""\x8e""\xd0""\xb1""\xd0""\xb8""\xd0""\xbc""\xd1""\x8b""\xd0""\xb9"" \xd0""\x98""\xd0""\xbc""\xd0""\xb8""\xd1""\x82"""),hx::SourceInfo(HX_CSTRING("CategoryChoose.hx"),138,HX_CSTRING("CategoryChoose"),HX_CSTRING("Category1Click")));
				HX_STACK_LINE(139)
				::CategoryChoose_obj::category = HX_CSTRING("sweet_imit");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(143)
				::haxe::Log_obj::trace(HX_CSTRING("\xd0""\xa8""\xd0""\xba""\xd0""\xbe""\xd0""\xbb""\xd1""\x8c""\xd0""\xbd""\xd0""\xb0""\xd1""\x8f"" \xd0""\x9c""\xd0""\xb0""\xd1""\x82""\xd0""\xb5""\xd0""\xbc""\xd0""\xb0""\xd1""\x82""\xd0""\xb8""\xd0""\xba""\xd0""\xb0"""),hx::SourceInfo(HX_CSTRING("CategoryChoose.hx"),143,HX_CSTRING("CategoryChoose"),HX_CSTRING("Category1Click")));
				HX_STACK_LINE(144)
				::CategoryChoose_obj::category = HX_CSTRING("school_math");
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(148)
				::haxe::Log_obj::trace(HX_CSTRING("\xd0""\x90""\xd0""\xbb""\xd0""\xb3""\xd0""\xb5""\xd0""\xb1""\xd1""\x80""\xd0""\xb0"" \xd0""\xb8"" \xd0""\x9b""\xd0""\xbe""\xd0""\xb3""\xd0""\xb8""\xd0""\xba""\xd0""\xb0"""),hx::SourceInfo(HX_CSTRING("CategoryChoose.hx"),148,HX_CSTRING("CategoryChoose"),HX_CSTRING("Category1Click")));
				HX_STACK_LINE(149)
				::CategoryChoose_obj::category = HX_CSTRING("algebra&logic");
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(153)
				::haxe::Log_obj::trace(HX_CSTRING("\xd0""\x93""\xd0""\xb5""\xd0""\xbe""\xd1""\x80""\xd0""\xbc""\xd0""\xb5""\xd1""\x82""\xd1""\x80""\xd0""\xb8""\xd1""\x8f"""),hx::SourceInfo(HX_CSTRING("CategoryChoose.hx"),153,HX_CSTRING("CategoryChoose"),HX_CSTRING("Category1Click")));
				HX_STACK_LINE(154)
				::CategoryChoose_obj::category = HX_CSTRING("geometry");
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(158)
				::haxe::Log_obj::trace(HX_CSTRING("\xd0""\x9c""\xd0""\xb0""\xd1""\x82""\xd0""\xb5""\xd0""\xbc""\xd0""\xb0""\xd1""\x82""\xd0""\xb8""\xd0""\xba""\xd0""\xb8"" \xd0""\xbb""\xd0""\xb5""\xd0""\xb3""\xd0""\xba""\xd0""\xbe""\xd0""\xb5"""),hx::SourceInfo(HX_CSTRING("CategoryChoose.hx"),158,HX_CSTRING("CategoryChoose"),HX_CSTRING("Category1Click")));
				HX_STACK_LINE(159)
				::CategoryChoose_obj::category = HX_CSTRING("mathematics");
			}
			;break;
			default: {
				HX_STACK_LINE(161)
				::haxe::Log_obj::trace(HX_CSTRING("\xd0""\x96""\xd0""\xb4""\xd0""\xb5""\xd0""\xbc"""),hx::SourceInfo(HX_CSTRING("CategoryChoose.hx"),161,HX_CSTRING("CategoryChoose"),HX_CSTRING("Category1Click")));
			}
		}
		HX_STACK_LINE(163)
		this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->onFrame_dyn(),null(),null(),null());
		HX_STACK_LINE(164)
		this->rect->set_visible(true);
		HX_STACK_LINE(165)
		this->time->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CategoryChoose_obj,Category1Click,(void))

Void CategoryChoose_obj::onFrame( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("CategoryChoose","onFrame",0x8d0595b5,"CategoryChoose.onFrame","CategoryChoose.hx",171,0x3d3a2d49)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(172)
		(this->frameCount)++;
		HX_STACK_LINE(173)
		::String _g = ::Std_obj::string(this->sec);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(173)
		this->time->set_text(_g);
		HX_STACK_LINE(174)
		if (((hx::Mod(this->frameCount,(int)60) == (int)0))){
			HX_STACK_LINE(176)
			(this->sec)--;
		}
		HX_STACK_LINE(178)
		if (((this->sec == (int)0))){
			HX_STACK_LINE(180)
			::openfl::_v2::events::Event _g1 = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("categoryOne"),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(180)
			this->dispatchEvent(_g1);
			HX_STACK_LINE(181)
			this->rect->set_visible(false);
			HX_STACK_LINE(182)
			this->time->set_visible(false);
			HX_STACK_LINE(183)
			this->sec = (int)3;
			HX_STACK_LINE(184)
			this->removeEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->onFrame_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CategoryChoose_obj,onFrame,(void))

Void CategoryChoose_obj::destroy( ){
{
		HX_STACK_FRAME("CategoryChoose","destroy",0x14caac21,"CategoryChoose.destroy","CategoryChoose.hx",189,0x3d3a2d49)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CategoryChoose_obj,destroy,(void))

::String CategoryChoose_obj::category;


CategoryChoose_obj::CategoryChoose_obj()
{
}

void CategoryChoose_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CategoryChoose);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(one,"one");
	HX_MARK_MEMBER_NAME(two,"two");
	HX_MARK_MEMBER_NAME(three,"three");
	HX_MARK_MEMBER_NAME(four,"four");
	HX_MARK_MEMBER_NAME(five,"five");
	HX_MARK_MEMBER_NAME(back_but,"back_but");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(sec,"sec");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(timef,"timef");
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_MEMBER_NAME(result_tf,"result_tf");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CategoryChoose_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(one,"one");
	HX_VISIT_MEMBER_NAME(two,"two");
	HX_VISIT_MEMBER_NAME(three,"three");
	HX_VISIT_MEMBER_NAME(four,"four");
	HX_VISIT_MEMBER_NAME(five,"five");
	HX_VISIT_MEMBER_NAME(back_but,"back_but");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(sec,"sec");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(timef,"timef");
	HX_VISIT_MEMBER_NAME(result,"result");
	HX_VISIT_MEMBER_NAME(result_tf,"result_tf");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CategoryChoose_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { return one; }
		if (HX_FIELD_EQ(inName,"two") ) { return two; }
		if (HX_FIELD_EQ(inName,"sec") ) { return sec; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"four") ) { return four; }
		if (HX_FIELD_EQ(inName,"five") ) { return five; }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"three") ) { return three; }
		if (HX_FIELD_EQ(inName,"timef") ) { return timef; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return result; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFrame") ) { return onFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"category") ) { return category; }
		if (HX_FIELD_EQ(inName,"back_but") ) { return back_but; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"result_tf") ) { return result_tf; }
		if (HX_FIELD_EQ(inName,"backClick") ) { return backClick_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"frameCount") ) { return frameCount; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"Category1Click") ) { return Category1Click_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CategoryChoose_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { one=inValue.Cast< ::Category_Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"two") ) { two=inValue.Cast< ::Category_Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sec") ) { sec=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"four") ) { four=inValue.Cast< ::Category_Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"five") ) { five=inValue.Cast< ::Category_Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"three") ) { three=inValue.Cast< ::Category_Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timef") ) { timef=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"category") ) { category=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"back_but") ) { back_but=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"result_tf") ) { result_tf=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CategoryChoose_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("one"));
	outFields->push(HX_CSTRING("two"));
	outFields->push(HX_CSTRING("three"));
	outFields->push(HX_CSTRING("four"));
	outFields->push(HX_CSTRING("five"));
	outFields->push(HX_CSTRING("back_but"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("sec"));
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("timef"));
	outFields->push(HX_CSTRING("result"));
	outFields->push(HX_CSTRING("result_tf"));
	outFields->push(HX_CSTRING("frameCount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("category"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CategoryChoose_obj,background),HX_CSTRING("background")},
	{hx::fsObject /*::Category_Button*/ ,(int)offsetof(CategoryChoose_obj,one),HX_CSTRING("one")},
	{hx::fsObject /*::Category_Button*/ ,(int)offsetof(CategoryChoose_obj,two),HX_CSTRING("two")},
	{hx::fsObject /*::Category_Button*/ ,(int)offsetof(CategoryChoose_obj,three),HX_CSTRING("three")},
	{hx::fsObject /*::Category_Button*/ ,(int)offsetof(CategoryChoose_obj,four),HX_CSTRING("four")},
	{hx::fsObject /*::Category_Button*/ ,(int)offsetof(CategoryChoose_obj,five),HX_CSTRING("five")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CategoryChoose_obj,back_but),HX_CSTRING("back_but")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(CategoryChoose_obj,rect),HX_CSTRING("rect")},
	{hx::fsInt,(int)offsetof(CategoryChoose_obj,sec),HX_CSTRING("sec")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(CategoryChoose_obj,time),HX_CSTRING("time")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(CategoryChoose_obj,timef),HX_CSTRING("timef")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(CategoryChoose_obj,result),HX_CSTRING("result")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(CategoryChoose_obj,result_tf),HX_CSTRING("result_tf")},
	{hx::fsInt,(int)offsetof(CategoryChoose_obj,frameCount),HX_CSTRING("frameCount")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("background"),
	HX_CSTRING("one"),
	HX_CSTRING("two"),
	HX_CSTRING("three"),
	HX_CSTRING("four"),
	HX_CSTRING("five"),
	HX_CSTRING("back_but"),
	HX_CSTRING("rect"),
	HX_CSTRING("sec"),
	HX_CSTRING("time"),
	HX_CSTRING("timef"),
	HX_CSTRING("result"),
	HX_CSTRING("result_tf"),
	HX_CSTRING("backClick"),
	HX_CSTRING("Category1Click"),
	HX_CSTRING("frameCount"),
	HX_CSTRING("onFrame"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CategoryChoose_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CategoryChoose_obj::category,"category");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CategoryChoose_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CategoryChoose_obj::category,"category");
};

#endif

Class CategoryChoose_obj::__mClass;

void CategoryChoose_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CategoryChoose"), hx::TCanCast< CategoryChoose_obj> ,sStaticFields,sMemberFields,
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

void CategoryChoose_obj::__boot()
{
}

