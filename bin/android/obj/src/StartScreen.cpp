#include <hxcpp.h>

#ifndef INCLUDED_StartScreen
#include <StartScreen.h>
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

Void StartScreen_obj::__construct()
{
HX_STACK_FRAME("StartScreen","new",0x40df9140,"StartScreen.new","StartScreen.hx",17,0x01705630)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(129)
	this->FrameCount = (int)0;
	HX_STACK_LINE(38)
	super::__construct();
	HX_STACK_LINE(40)
	this->useHandCursor = true;
	HX_STACK_LINE(41)
	this->buttonMode = true;
	HX_STACK_LINE(43)
	::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/background_blackboard.png"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(43)
	::openfl::_v2::display::Bitmap _g1 = ::openfl::_v2::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(43)
	this->background = _g1;
	HX_STACK_LINE(44)
	this->addChild(this->background);
	HX_STACK_LINE(46)
	::openfl::_v2::display::BitmapData _g2 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/pi_spin.png"),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(46)
	::openfl::_v2::display::Bitmap _g3 = ::openfl::_v2::display::Bitmap_obj::__new(_g2,null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(46)
	this->spin_thing = _g3;
	HX_STACK_LINE(47)
	Float _g4 = -(this->spin_thing->get_width());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(47)
	Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(47)
	this->spin_thing->set_x(_g5);
	HX_STACK_LINE(48)
	Float _g6 = -(this->spin_thing->get_height());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(48)
	Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(48)
	this->spin_thing->set_y(_g7);
	HX_STACK_LINE(50)
	::openfl::_v2::display::Sprite _g8 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(50)
	this->spin = _g8;
	HX_STACK_LINE(51)
	Float _g9 = this->background->get_width();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(51)
	Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(51)
	Float _g11 = this->spin_thing->get_width();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(51)
	Float _g12 = (_g10 + _g11);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(51)
	this->spin->set_x(_g12);
	HX_STACK_LINE(52)
	Float _g13 = this->background->get_height();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(52)
	Float _g14 = (Float(_g13) / Float((int)2));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(52)
	this->spin->set_y(_g14);
	HX_STACK_LINE(53)
	this->spin->addChild(this->spin_thing);
	HX_STACK_LINE(54)
	this->addChild(this->spin);
	HX_STACK_LINE(56)
	::openfl::_v2::display::BitmapData _g15 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/logo.png"),null());		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(56)
	::openfl::_v2::display::Bitmap _g16 = ::openfl::_v2::display::Bitmap_obj::__new(_g15,null(),null());		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(56)
	this->logo = _g16;
	HX_STACK_LINE(57)
	Float _g17 = this->background->get_width();		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(57)
	Float _g18 = (Float(_g17) / Float((int)2));		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(57)
	Float _g19 = this->spin->get_width();		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(57)
	Float _g20 = (_g19 * 1.5);		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(57)
	Float _g21 = (_g18 - _g20);		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(57)
	this->logo->set_x(_g21);
	HX_STACK_LINE(58)
	Float _g22 = this->background->get_height();		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(58)
	Float _g23 = (Float(_g22) / Float((int)2));		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(58)
	Float _g24 = this->logo->get_height();		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(58)
	Float _g25 = (_g23 - _g24);		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(58)
	this->logo->set_y(_g25);
	HX_STACK_LINE(59)
	this->addChild(this->logo);
	HX_STACK_LINE(61)
	::openfl::_v2::display::BitmapData _g26 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/sec_word.png"),null());		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(61)
	::openfl::_v2::display::Bitmap _g27 = ::openfl::_v2::display::Bitmap_obj::__new(_g26,null(),null());		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(61)
	this->sec_word = _g27;
	HX_STACK_LINE(62)
	Float _g28 = this->logo->get_x();		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(62)
	this->sec_word->set_x(_g28);
	HX_STACK_LINE(63)
	Float _g29 = this->logo->get_y();		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(63)
	Float _g30 = this->sec_word->get_height();		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(63)
	Float _g31 = (_g30 * 1.5);		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(63)
	Float _g32 = (_g29 + _g31);		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(63)
	this->sec_word->set_y(_g32);
	HX_STACK_LINE(64)
	this->addChild(this->sec_word);
	HX_STACK_LINE(66)
	::openfl::_v2::display::Sprite _g33 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(66)
	this->start_button = _g33;
	HX_STACK_LINE(67)
	Float _g34 = this->spin->get_x();		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(67)
	Float _g35 = this->spin->get_width();		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(67)
	Float _g36 = (_g34 - _g35);		HX_STACK_VAR(_g36,"_g36");
	HX_STACK_LINE(67)
	this->start_button->set_x(_g36);
	HX_STACK_LINE(68)
	Float _g37 = this->spin->get_y();		HX_STACK_VAR(_g37,"_g37");
	HX_STACK_LINE(68)
	Float _g38 = this->spin->get_height();		HX_STACK_VAR(_g38,"_g38");
	HX_STACK_LINE(68)
	Float _g39 = (Float(_g38) / Float((int)2));		HX_STACK_VAR(_g39,"_g39");
	HX_STACK_LINE(68)
	Float _g40 = (_g37 - _g39);		HX_STACK_VAR(_g40,"_g40");
	HX_STACK_LINE(68)
	this->start_button->set_y(_g40);
	HX_STACK_LINE(69)
	::openfl::_v2::display::BitmapData _g41 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/start.png"),null());		HX_STACK_VAR(_g41,"_g41");
	HX_STACK_LINE(69)
	::openfl::_v2::display::Bitmap _g42 = ::openfl::_v2::display::Bitmap_obj::__new(_g41,null(),null());		HX_STACK_VAR(_g42,"_g42");
	HX_STACK_LINE(69)
	this->start_button->addChild(_g42);
	HX_STACK_LINE(70)
	this->addChild(this->start_button);
	HX_STACK_LINE(72)
	this->start_button->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onStartClick_dyn(),null(),null(),null());
	HX_STACK_LINE(74)
	::openfl::_v2::display::Sprite _g43 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g43,"_g43");
	HX_STACK_LINE(74)
	this->about_button = _g43;
	HX_STACK_LINE(75)
	::openfl::_v2::display::BitmapData _g44 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/about.png"),null());		HX_STACK_VAR(_g44,"_g44");
	HX_STACK_LINE(75)
	::openfl::_v2::display::Bitmap _g45 = ::openfl::_v2::display::Bitmap_obj::__new(_g44,null(),null());		HX_STACK_VAR(_g45,"_g45");
	HX_STACK_LINE(75)
	this->about_button->addChild(_g45);
	HX_STACK_LINE(76)
	Float _g46 = this->spin->get_x();		HX_STACK_VAR(_g46,"_g46");
	HX_STACK_LINE(76)
	Float _g47 = this->spin->get_width();		HX_STACK_VAR(_g47,"_g47");
	HX_STACK_LINE(76)
	Float _g48 = (_g46 - _g47);		HX_STACK_VAR(_g48,"_g48");
	HX_STACK_LINE(76)
	this->about_button->set_x(_g48);
	HX_STACK_LINE(77)
	Float _g49 = this->spin->get_y();		HX_STACK_VAR(_g49,"_g49");
	HX_STACK_LINE(77)
	Float _g50 = this->spin->get_height();		HX_STACK_VAR(_g50,"_g50");
	HX_STACK_LINE(77)
	Float _g51 = (Float(_g50) / Float((int)2));		HX_STACK_VAR(_g51,"_g51");
	HX_STACK_LINE(77)
	Float _g52 = (_g49 + _g51);		HX_STACK_VAR(_g52,"_g52");
	HX_STACK_LINE(77)
	Float _g53 = this->about_button->get_height();		HX_STACK_VAR(_g53,"_g53");
	HX_STACK_LINE(77)
	Float _g54 = (_g52 - _g53);		HX_STACK_VAR(_g54,"_g54");
	HX_STACK_LINE(77)
	Float _g55 = (_g54 + (int)1);		HX_STACK_VAR(_g55,"_g55");
	HX_STACK_LINE(77)
	this->about_button->set_y(_g55);
	HX_STACK_LINE(78)
	this->addChild(this->about_button);
	HX_STACK_LINE(80)
	this->about_button->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onAboutClick_dyn(),null(),null(),null());
	HX_STACK_LINE(82)
	::openfl::_v2::display::Sprite _g56 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g56,"_g56");
	HX_STACK_LINE(82)
	this->about_back = _g56;
	HX_STACK_LINE(83)
	this->about_back->get_graphics()->beginFill((int)0,null());
	HX_STACK_LINE(84)
	this->about_back->get_graphics()->drawRect((int)0,(int)0,(int)1000,(int)1000);
	HX_STACK_LINE(86)
	::openfl::_v2::text::TextFormat _g57 = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g57,"_g57");
	HX_STACK_LINE(86)
	this->about_textformat = _g57;
	HX_STACK_LINE(87)
	this->about_textformat->size = (int)20;
	HX_STACK_LINE(88)
	this->about_textformat->font = HX_CSTRING("Arial");
	HX_STACK_LINE(89)
	this->about_textformat->color = (int)65280;
	HX_STACK_LINE(91)
	::openfl::_v2::text::TextField _g58 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g58,"_g58");
	HX_STACK_LINE(91)
	this->about_textfield = _g58;
	HX_STACK_LINE(92)
	this->about_textfield->set_defaultTextFormat(this->about_textformat);
	HX_STACK_LINE(93)
	this->about_textfield->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(94)
	this->about_textfield->set_text(HX_CSTRING("     \xd0""\x9f""\xd1""\x80""\xd0""\xb0""\xd0""\xb2""\xd0""\xb8""\xd0""\xbb""\xd0""\xb0"" \xd0""\xbe""\xd1""\x87""\xd0""\xb5""\xd0""\xbd""\xd1""\x8c"" \xd0""\xbf""\xd1""\x80""\xd0""\xbe""\xd1""\x81""\xd1""\x82""\xd1""\x8b""\xd0""\xb5"". \xd0""\x92""\xd1""\x8b"" \xd0""\xb2""\xd1""\x8b""\xd0""\xb1""\xd0""\xb8""\xd1""\x80""\xd0""\xb0""\xd0""\xb5""\xd1""\x82""\xd0""\xb5"" \xd0""\xba""\xd0""\xb0""\xd1""\x82""\xd0""\xb5""\xd0""\xb3""\xd0""\xbe""\xd1""\x80""\xd0""\xb8""\xd1""\x8e"", \xd0""\xb7""\xd0""\xb0""\xd1""\x82""\xd0""\xb5""\xd0""\xbc"" \xd1""\x83"" \xd0""\xb2""\xd0""\xb0""\xd1""\x81"" \xd0""\xb5""\xd1""\x81""\xd1""\x82""\xd1""\x8c"" 3 \xd1""\x81""\xd0""\xb5""\xd0""\xba""\xd1""\x83""\xd0""\xbd""\xd0""\xb4""\xd1""\x8b"" \xd1""\x87""\xd1""\x82""\xd0""\xbe""\xd0""\xb1""\xd1""\x8b"" \xd0""\xbf""\xd1""\x80""\xd0""\xb8""\xd0""\xbb""\xd0""\xbe""\xd0""\xb6""\xd0""\xb8""\xd1""\x82""\xd1""\x8c"" \n\t\t \xd1""\x83""\xd1""\x81""\xd1""\x82""\xd1""\x80""\xd0""\xbe""\xd0""\xb9""\xd1""\x81""\xd1""\x82""\xd0""\xb2""\xd0""\xbe"" \xd0""\xba""\xd0""\xbe"" \xd0""\xbb""\xd0""\xb1""\xd1""\x83"".\n\t\t \xd0""\x98"" \xd1""\x82""\xd1""\x83""\xd1""\x82"" \xd0""\xbd""\xd0""\xb0""\xd1""\x87""\xd0""\xb8""\xd0""\xbd""\xd0""\xb0""\xd0""\xb5""\xd1""\x82""\xd1""\x81""\xd1""\x8f"" \xd0""\xb8""\xd0""\xb3""\xd1""\x80""\xd0""\xb0""! \xd0""\x97""\xd0""\xb0""\xd0""\xb4""\xd0""\xb0""\xd1""\x87""\xd0""\xb0"" - \xd1""\x83""\xd0""\xb3""\xd0""\xb0""\xd0""\xb4""\xd0""\xb0""\xd1""\x82""\xd1""\x8c"" \xd0""\xba""\xd0""\xb0""\xd0""\xba"" \xd0""\xbc""\xd0""\xbe""\xd0""\xb6""\xd0""\xbd""\xd0""\xbe"" \xd0""\xb1""\xd0""\xbe""\xd0""\xbb""\xd1""\x8c""\xd1""\x88""\xd0""\xb5"" \xd1""\x81""\xd0""\xbb""\xd0""\xbe""\xd0""\xb2"" \xd0""\xb7""\xd0""\xb0"" 30 \xd1""\x81""\xd0""\xb5""\xd0""\xba""\xd1""\x83""\xd0""\xbd""\xd0""\xb4"" \xd0""\xb8""\xd0""\xb7"" \xd0""\xb2""\xd1""\x8b""\xd0""\xb1""\xd1""\x80""\xd0""\xb0""\xd0""\xbd""\xd0""\xbd""\xd0""\xbe""\xd0""\xb9"" \xd0""\xba""\xd0""\xb0""\xd1""\x82""\xd0""\xb5""\xd0""\xb3""\xd0""\xbe""\xd1""\x80""\xd0""\xb8""\xd0""\xb8"".\n\t\t \xd0""\x95""\xd1""\x81""\xd0""\xbb""\xd0""\xb8"" \xd1""\x82""\xd0""\xbe""\xd0""\xb2""\xd0""\xb0""\xd1""\x80""\xd0""\xb8""\xd1""\x89""\xd0""\xb8"" \xd0""\xb3""\xd0""\xbe""\xd0""\xb2""\xd0""\xbe""\xd1""\x80""\xd1""\x8f""\xd1""\x82"", \xd1""\x87""\xd1""\x82""\xd0""\xbe"" \xd0""\xbe""\xd1""\x82""\xd0""\xb2""\xd0""\xb5""\xd1""\x82"" \xd0""\x9f""\xd0""\xa0""\xd0""\x90""\xd0""\x92""\xd0""\x98""\xd0""\x9b""\xd0""\xac""\xd0""\x9d""\xd0""\xab""\xd0""\x99"" \xd0""\xb2""\xd1""\x8b"" \xd0""\xbd""\xd0""\xb0""\xd0""\xba""\xd0""\xbb""\xd0""\xbe""\xd0""\xbd""\xd1""\x8f""\xd0""\xb5""\xd1""\x82""\xd0""\xb5"" \xd1""\x83""\xd1""\x81""\xd1""\x82""\xd1""\x80""\xd0""\xbe""\xd0""\xb9""\xd1""\x81""\xd1""\x82""\xd0""\xb2""\xd0""\xbe"" \xd0""\x92""\xd0""\x92""\xd0""\x9d""\xd0""\x98""\xd0""\x97"". \n\t\t \xd0""\x92""\xd0""\xb0""\xd0""\xbc"" \xd0""\xbd""\xd0""\xb0""\xd1""\x87""\xd0""\xb8""\xd1""\x81""\xd0""\xbb""\xd1""\x8f""\xd0""\xb5""\xd1""\x82""\xd1""\x81""\xd1""\x8f"" 1 \xd0""\xb1""\xd0""\xb0""\xd0""\xbb""\xd0""\xbb"". \xd0""\xa7""\xd1""\x82""\xd0""\xbe""\xd0""\xb1""\xd1""\x8b"" \xd0""\x9f""\xd0""\xa0""\xd0""\x9e""\xd0""\x9f""\xd0""\xa3""\xd0""\xa1""\xd0""\xa2""\xd0""\x98""\xd0""\xa2""\xd0""\xac"" \xd1""\x81""\xd0""\xbb""\xd0""\xbe""\xd0""\xb2""\xd0""\xbe"", \xd0""\xbd""\xd0""\xb0""\xd0""\xba""\xd0""\xbb""\xd0""\xbe""\xd0""\xbd""\xd0""\xb8""\xd1""\x82""\xd0""\xb5"" \xd1""\x83""\xd1""\x81""\xd1""\x82""\xd1""\x80""\xd0""\xbe""\xd0""\xb9""\xd1""\x81""\xd1""\x82""\xd0""\xb2""\xd0""\xbe"" \xd0""\x92""\xd0""\x92""\xd0""\x95""\xd0""\xa0""\xd0""\xa5"". \n\t\t \xd0""\x92""\xd0""\xbe""\xd1""\x82"" \xd0""\xb2"" \xd0""\xbe""\xd0""\xb1""\xd1""\x89""\xd0""\xb5""\xd0""\xbc""-\xd1""\x82""\xd0""\xbe"" \xd0""\xb8"" \xd0""\xb2""\xd1""\x81""\xd0""\xb5""! \xd0""\xa3""\xd0""\xb4""\xd0""\xb0""\xd1""\x87""\xd0""\xb8"" \xd0""\xb8"" \xd0""\xbd""\xd0""\xb0""\xd1""\x81""\xd0""\xbb""\xd0""\xb0""\xd0""\xb6""\xd0""\xb4""\xd0""\xb0""\xd0""\xb9""\xd1""\x82""\xd0""\xb5""\xd1""\x81""\xd1""\x8c""!"));
	HX_STACK_LINE(101)
	::openfl::_v2::display::Sprite _g59 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g59,"_g59");
	HX_STACK_LINE(101)
	this->about_but = _g59;
	HX_STACK_LINE(102)
	this->about_but->get_graphics()->beginFill((int)16711680,null());
	HX_STACK_LINE(103)
	this->about_but->get_graphics()->drawCircle((int)0,(int)0,(int)20);
	HX_STACK_LINE(105)
	this->addChild(this->about_back);
	HX_STACK_LINE(106)
	this->addChild(this->about_textfield);
	HX_STACK_LINE(107)
	this->addChild(this->about_but);
	HX_STACK_LINE(109)
	this->about_but->set_visible(false);
	HX_STACK_LINE(110)
	this->about_textfield->set_visible(false);
	HX_STACK_LINE(111)
	this->about_back->set_visible(false);
	HX_STACK_LINE(113)
	this->about_but->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->about_but_clicked_dyn(),null(),null(),null());
	HX_STACK_LINE(115)
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

Void StartScreen_obj::about_but_clicked( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("StartScreen","about_but_clicked",0x84a40117,"StartScreen.about_but_clicked","StartScreen.hx",122,0x01705630)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(124)
		this->about_but->set_visible(false);
		HX_STACK_LINE(125)
		this->about_textfield->set_visible(false);
		HX_STACK_LINE(126)
		this->about_back->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StartScreen_obj,about_but_clicked,(void))

Void StartScreen_obj::onStartClick( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("StartScreen","onStartClick",0x2dde19a5,"StartScreen.onStartClick","StartScreen.hx",132,0x01705630)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(134)
		::openfl::_v2::events::Event _g = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("startgame"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StartScreen_obj,onStartClick,(void))

Void StartScreen_obj::onAboutClick( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("StartScreen","onAboutClick",0x712aebda,"StartScreen.onAboutClick","StartScreen.hx",138,0x01705630)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(139)
		this->about_back->set_visible(true);
		HX_STACK_LINE(140)
		this->about_textfield->set_visible(true);
		HX_STACK_LINE(141)
		this->about_but->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StartScreen_obj,onAboutClick,(void))

Void StartScreen_obj::onFrame( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("StartScreen","onFrame",0x67eec76e,"StartScreen.onFrame","StartScreen.hx",145,0x01705630)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(146)
		(this->FrameCount)++;
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			::openfl::_v2::display::Sprite _g = this->spin;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(148)
			Float _g1 = _g->get_rotation();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(148)
			_g->set_rotation((_g1 + (int)1));
			HX_STACK_LINE(148)
			_g1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StartScreen_obj,onFrame,(void))

Void StartScreen_obj::destroy( ){
{
		HX_STACK_FRAME("StartScreen","destroy",0xefb3ddda,"StartScreen.destroy","StartScreen.hx",153,0x01705630)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
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
	HX_MARK_MEMBER_NAME(about_back,"about_back");
	HX_MARK_MEMBER_NAME(about_textfield,"about_textfield");
	HX_MARK_MEMBER_NAME(about_textformat,"about_textformat");
	HX_MARK_MEMBER_NAME(about_but,"about_but");
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
	HX_VISIT_MEMBER_NAME(about_back,"about_back");
	HX_VISIT_MEMBER_NAME(about_textfield,"about_textfield");
	HX_VISIT_MEMBER_NAME(about_textformat,"about_textformat");
	HX_VISIT_MEMBER_NAME(about_but,"about_but");
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
	case 9:
		if (HX_FIELD_EQ(inName,"about_but") ) { return about_but; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"spin_thing") ) { return spin_thing; }
		if (HX_FIELD_EQ(inName,"about_back") ) { return about_back; }
		if (HX_FIELD_EQ(inName,"FrameCount") ) { return FrameCount; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"start_button") ) { return start_button; }
		if (HX_FIELD_EQ(inName,"about_button") ) { return about_button; }
		if (HX_FIELD_EQ(inName,"onStartClick") ) { return onStartClick_dyn(); }
		if (HX_FIELD_EQ(inName,"onAboutClick") ) { return onAboutClick_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"about_textfield") ) { return about_textfield; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"about_textformat") ) { return about_textformat; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"about_but_clicked") ) { return about_but_clicked_dyn(); }
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
	case 9:
		if (HX_FIELD_EQ(inName,"about_but") ) { about_but=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spin_thing") ) { spin_thing=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"about_back") ) { about_back=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FrameCount") ) { FrameCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"start_button") ) { start_button=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"about_button") ) { about_button=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"about_textfield") ) { about_textfield=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"about_textformat") ) { about_textformat=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
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
	outFields->push(HX_CSTRING("about_back"));
	outFields->push(HX_CSTRING("about_textfield"));
	outFields->push(HX_CSTRING("about_textformat"));
	outFields->push(HX_CSTRING("about_but"));
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
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(StartScreen_obj,about_back),HX_CSTRING("about_back")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(StartScreen_obj,about_textfield),HX_CSTRING("about_textfield")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(StartScreen_obj,about_textformat),HX_CSTRING("about_textformat")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(StartScreen_obj,about_but),HX_CSTRING("about_but")},
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
	HX_CSTRING("about_back"),
	HX_CSTRING("about_textfield"),
	HX_CSTRING("about_textformat"),
	HX_CSTRING("about_but"),
	HX_CSTRING("about_but_clicked"),
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

