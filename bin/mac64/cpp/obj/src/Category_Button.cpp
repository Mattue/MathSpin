#include <hxcpp.h>

#ifndef INCLUDED_Category_Button
#include <Category_Button.h>
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
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
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

Void Category_Button_obj::__construct()
{
HX_STACK_FRAME("Category_Button","new",0x1b7006c5,"Category_Button.new","Category_Button.hx",21,0x8795b84b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(24)
	::openfl::_v2::display::Sprite _g = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	this->cat_but = _g;
	HX_STACK_LINE(25)
	::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/cat_but.png"),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(25)
	::openfl::_v2::display::Bitmap _g2 = ::openfl::_v2::display::Bitmap_obj::__new(_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(25)
	this->cat_but->addChild(_g2);
	HX_STACK_LINE(26)
	this->cat_but->set_x((int)100);
	HX_STACK_LINE(27)
	this->cat_but->set_y((int)100);
	HX_STACK_LINE(28)
	this->addChild(this->cat_but);
	HX_STACK_LINE(30)
	::openfl::_v2::text::TextField _g3 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(30)
	this->cat_text = _g3;
	HX_STACK_LINE(31)
	::openfl::_v2::text::TextFormat _g4 = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Arial"),(int)35,(int)0,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(31)
	this->cat_textf = _g4;
	HX_STACK_LINE(32)
	this->cat_text->set_defaultTextFormat(this->cat_textf);
	HX_STACK_LINE(33)
	this->cat_text->set_text(HX_CSTRING("\xd0""\x9a""\xd0""\xb0""\xd1""\x82""\xd0""\xb5""\xd0""\xb3""\xd0""\xbe""\xd1""\x80""\xd0""\xb8""\xd1""\x8f"""));
	HX_STACK_LINE(34)
	this->cat_text->set_mouseEnabled(false);
	HX_STACK_LINE(36)
	Float _g5 = this->cat_but->get_x();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(36)
	Float _g6 = (_g5 + (int)15);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(36)
	this->cat_text->set_x(_g6);
	HX_STACK_LINE(37)
	Float _g7 = this->cat_but->get_y();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(37)
	Float _g8 = (_g7 + (int)40);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(37)
	this->cat_text->set_y(_g8);
	HX_STACK_LINE(39)
	Float _g9 = this->cat_text->get_textWidth();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(39)
	Float _g10 = (_g9 + (int)20);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(39)
	this->cat_text->set_width(_g10);
	HX_STACK_LINE(40)
	Float _g11 = this->cat_text->get_textHeight();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(40)
	Float _g12 = (_g11 + (int)20);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(40)
	this->cat_text->set_height(_g12);
	HX_STACK_LINE(42)
	this->addChild(this->cat_text);
}
;
	return null();
}

//Category_Button_obj::~Category_Button_obj() { }

Dynamic Category_Button_obj::__CreateEmpty() { return  new Category_Button_obj; }
hx::ObjectPtr< Category_Button_obj > Category_Button_obj::__new()
{  hx::ObjectPtr< Category_Button_obj > result = new Category_Button_obj();
	result->__construct();
	return result;}

Dynamic Category_Button_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Category_Button_obj > result = new Category_Button_obj();
	result->__construct();
	return result;}


Category_Button_obj::Category_Button_obj()
{
}

void Category_Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Category_Button);
	HX_MARK_MEMBER_NAME(cat_but,"cat_but");
	HX_MARK_MEMBER_NAME(cat_text,"cat_text");
	HX_MARK_MEMBER_NAME(cat_textf,"cat_textf");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Category_Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cat_but,"cat_but");
	HX_VISIT_MEMBER_NAME(cat_text,"cat_text");
	HX_VISIT_MEMBER_NAME(cat_textf,"cat_textf");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Category_Button_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"cat_but") ) { return cat_but; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cat_text") ) { return cat_text; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cat_textf") ) { return cat_textf; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Category_Button_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"cat_but") ) { cat_but=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cat_text") ) { cat_text=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cat_textf") ) { cat_textf=inValue.Cast< ::openfl::_v2::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Category_Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cat_but"));
	outFields->push(HX_CSTRING("cat_text"));
	outFields->push(HX_CSTRING("cat_textf"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Category_Button_obj,cat_but),HX_CSTRING("cat_but")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Category_Button_obj,cat_text),HX_CSTRING("cat_text")},
	{hx::fsObject /*::openfl::_v2::text::TextFormat*/ ,(int)offsetof(Category_Button_obj,cat_textf),HX_CSTRING("cat_textf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("cat_but"),
	HX_CSTRING("cat_text"),
	HX_CSTRING("cat_textf"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Category_Button_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Category_Button_obj::__mClass,"__mClass");
};

#endif

Class Category_Button_obj::__mClass;

void Category_Button_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Category_Button"), hx::TCanCast< Category_Button_obj> ,sStaticFields,sMemberFields,
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

void Category_Button_obj::__boot()
{
}

