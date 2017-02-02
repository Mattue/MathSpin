#include <hxcpp.h>

#ifndef INCLUDED_CategoryChoose
#include <CategoryChoose.h>
#endif
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif

Void CategoryChoose_obj::__construct()
{
HX_STACK_FRAME("CategoryChoose","new",0x55b1f007,"CategoryChoose.new","CategoryChoose.hx",25,0x3d3a2d49)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(28)
	this->useHandCursor = true;
	HX_STACK_LINE(29)
	this->buttonMode = true;
	HX_STACK_LINE(31)
	::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/background_blackboard.png"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	::openfl::_v2::display::Bitmap _g1 = ::openfl::_v2::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(31)
	this->background = _g1;
	HX_STACK_LINE(32)
	this->addChild(this->background);
	HX_STACK_LINE(34)
	::Category_Button _g2 = ::Category_Button_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(34)
	this->one = _g2;
	HX_STACK_LINE(35)
	this->addChild(this->one);
	HX_STACK_LINE(37)
	::Category_Button _g3 = ::Category_Button_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(37)
	this->sec = _g3;
	HX_STACK_LINE(38)
	Float _g4 = this->one->get_x();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(38)
	Float _g5 = (_g4 + (int)400);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(38)
	this->sec->set_x(_g5);
	HX_STACK_LINE(39)
	Float _g6 = this->one->get_y();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(39)
	this->sec->set_y(_g6);
	HX_STACK_LINE(40)
	this->sec->cat_text->set_text(HX_CSTRING("loooool"));
	HX_STACK_LINE(41)
	this->addChild(this->sec);
	HX_STACK_LINE(43)
	this->one->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->Category1Click_dyn(),null(),null(),null());
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

Void CategoryChoose_obj::Category1Click( ::openfl::_v2::events::MouseEvent e){
{
		HX_STACK_FRAME("CategoryChoose","Category1Click",0x891a6fae,"CategoryChoose.Category1Click","CategoryChoose.hx",49,0x3d3a2d49)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(50)
		::openfl::_v2::events::Event _g = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("categoryOne"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CategoryChoose_obj,Category1Click,(void))

Void CategoryChoose_obj::destroy( ){
{
		HX_STACK_FRAME("CategoryChoose","destroy",0x14caac21,"CategoryChoose.destroy","CategoryChoose.hx",54,0x3d3a2d49)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CategoryChoose_obj,destroy,(void))


CategoryChoose_obj::CategoryChoose_obj()
{
}

void CategoryChoose_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CategoryChoose);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(one,"one");
	HX_MARK_MEMBER_NAME(sec,"sec");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CategoryChoose_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(one,"one");
	HX_VISIT_MEMBER_NAME(sec,"sec");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CategoryChoose_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"one") ) { return one; }
		if (HX_FIELD_EQ(inName,"sec") ) { return sec; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
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
		if (HX_FIELD_EQ(inName,"sec") ) { sec=inValue.Cast< ::Category_Button >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CategoryChoose_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("one"));
	outFields->push(HX_CSTRING("sec"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(CategoryChoose_obj,background),HX_CSTRING("background")},
	{hx::fsObject /*::Category_Button*/ ,(int)offsetof(CategoryChoose_obj,one),HX_CSTRING("one")},
	{hx::fsObject /*::Category_Button*/ ,(int)offsetof(CategoryChoose_obj,sec),HX_CSTRING("sec")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("background"),
	HX_CSTRING("one"),
	HX_CSTRING("sec"),
	HX_CSTRING("Category1Click"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CategoryChoose_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CategoryChoose_obj::__mClass,"__mClass");
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

