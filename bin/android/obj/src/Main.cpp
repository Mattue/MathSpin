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
#ifndef INCLUDED_StartScreen
#include <StartScreen.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
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
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
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
#ifndef INCLUDED_openfl__v2_sensors_Accelerometer
#include <openfl/_v2/sensors/Accelerometer.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl_events_AccelerometerEvent
#include <openfl/events/AccelerometerEvent.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",16,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	this->_acc = ::openfl::_v2::sensors::Accelerometer_obj::__new();
	HX_STACK_LINE(124)
	super::__construct();
	HX_STACK_LINE(125)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::resize( Dynamic e){
{
		HX_STACK_FRAME("Main","resize",0x39257969,"Main.resize","Main.hx",32,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(32)
		if ((!(this->inited))){
			HX_STACK_LINE(32)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",37,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		if ((this->inited)){
			HX_STACK_LINE(38)
			return null();
		}
		HX_STACK_LINE(39)
		this->inited = true;
		HX_STACK_LINE(41)
		this->_acc->addEventListener(::openfl::events::AccelerometerEvent_obj::UPDATE,this->updateAcc_dyn(),null(),null(),null());
		HX_STACK_LINE(43)
		::StartScreen _g = ::StartScreen_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		this->startScreen = _g;
		HX_STACK_LINE(44)
		this->startScreen->addEventListener(HX_CSTRING("startgame"),this->onStart_dyn(),null(),null(),null());
		HX_STACK_LINE(45)
		this->addChild(this->startScreen);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::updateAcc( ::openfl::events::AccelerometerEvent Event){
{
		HX_STACK_FRAME("Main","updateAcc",0x63600663,"Main.updateAcc","Main.hx",72,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Event,"Event")
		HX_STACK_LINE(72)
		::Main_obj::zAcc = Event->accelerationZ;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,updateAcc,(void))

Void Main_obj::onStart( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("Main","onStart",0x7e7a79ae,"Main.onStart","Main.hx",82,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(83)
		this->removeChild(this->startScreen);
		HX_STACK_LINE(84)
		this->startScreen->destroy();
		HX_STACK_LINE(86)
		::CategoryChoose _g = ::CategoryChoose_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		this->categoryChoose = _g;
		HX_STACK_LINE(87)
		this->categoryChoose->addEventListener(HX_CSTRING("categoryOne"),this->startCategoryOne_dyn(),null(),null(),null());
		HX_STACK_LINE(88)
		this->categoryChoose->addEventListener(HX_CSTRING("back"),this->back_dyn(),null(),null(),null());
		HX_STACK_LINE(89)
		this->addChild(this->categoryChoose);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onStart,(void))

Void Main_obj::back( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("Main","back",0xe5c8c25c,"Main.back","Main.hx",93,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(94)
		this->removeChild(this->categoryChoose);
		HX_STACK_LINE(95)
		this->categoryChoose->destroy();
		HX_STACK_LINE(97)
		this->startScreen->addEventListener(HX_CSTRING("startgame"),this->onStart_dyn(),null(),null(),null());
		HX_STACK_LINE(98)
		this->startScreen->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->startScreen->onFrame_dyn(),null(),null(),null());
		HX_STACK_LINE(99)
		this->addChild(this->startScreen);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,back,(void))

Void Main_obj::startCategoryOne( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("Main","startCategoryOne",0xa5f4187b,"Main.startCategoryOne","Main.hx",103,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(104)
		this->removeChild(this->categoryChoose);
		HX_STACK_LINE(105)
		this->categoryChoose->destroy();
		HX_STACK_LINE(107)
		::CategoryOne _g = ::CategoryOne_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		this->categoryOne = _g;
		HX_STACK_LINE(108)
		this->categoryOne->addEventListener(HX_CSTRING("categoryEnd"),this->onCategoryEnd_dyn(),null(),null(),null());
		HX_STACK_LINE(109)
		this->addChild(this->categoryOne);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,startCategoryOne,(void))

Void Main_obj::onCategoryEnd( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("Main","onCategoryEnd",0x248309c9,"Main.onCategoryEnd","Main.hx",113,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(114)
		this->removeChild(this->categoryOne);
		HX_STACK_LINE(115)
		this->categoryOne->destroy();
		HX_STACK_LINE(117)
		::CategoryChoose _g = ::CategoryChoose_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		this->categoryChoose = _g;
		HX_STACK_LINE(118)
		this->categoryChoose->addEventListener(HX_CSTRING("categoryOne"),this->startCategoryOne_dyn(),null(),null(),null());
		HX_STACK_LINE(119)
		this->addChild(this->categoryChoose);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onCategoryEnd,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("Main","added",0x98771aeb,"Main.added","Main.hx",129,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(130)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(131)
		this->get_stage()->addEventListener(::openfl::_v2::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(135)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

int Main_obj::points;

Float Main_obj::xAcc;

Float Main_obj::xAcc_old;

Float Main_obj::yAcc;

Float Main_obj::yAcc_old;

Float Main_obj::zAcc;

Float Main_obj::zAcc_old;

Float Main_obj::checkAccX;

Float Main_obj::checkAccY;

Float Main_obj::checkAccZ;

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",140,0x087e5c05)
		HX_STACK_LINE(142)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(143)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(144)
		::Main _g = ::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(144)
		::openfl::_v2::Lib_obj::get_current()->addChild(_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(startScreen,"startScreen");
	HX_MARK_MEMBER_NAME(categoryChoose,"categoryChoose");
	HX_MARK_MEMBER_NAME(categoryOne,"categoryOne");
	HX_MARK_MEMBER_NAME(_acc,"_acc");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(startScreen,"startScreen");
	HX_VISIT_MEMBER_NAME(categoryChoose,"categoryChoose");
	HX_VISIT_MEMBER_NAME(categoryOne,"categoryOne");
	HX_VISIT_MEMBER_NAME(_acc,"_acc");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAcc") ) { return xAcc; }
		if (HX_FIELD_EQ(inName,"yAcc") ) { return yAcc; }
		if (HX_FIELD_EQ(inName,"zAcc") ) { return zAcc; }
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"_acc") ) { return _acc; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { return onStart_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xAcc_old") ) { return xAcc_old; }
		if (HX_FIELD_EQ(inName,"yAcc_old") ) { return yAcc_old; }
		if (HX_FIELD_EQ(inName,"zAcc_old") ) { return zAcc_old; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"checkAccX") ) { return checkAccX; }
		if (HX_FIELD_EQ(inName,"checkAccY") ) { return checkAccY; }
		if (HX_FIELD_EQ(inName,"checkAccZ") ) { return checkAccZ; }
		if (HX_FIELD_EQ(inName,"updateAcc") ) { return updateAcc_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startScreen") ) { return startScreen; }
		if (HX_FIELD_EQ(inName,"categoryOne") ) { return categoryOne; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onCategoryEnd") ) { return onCategoryEnd_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"categoryChoose") ) { return categoryChoose; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startCategoryOne") ) { return startCategoryOne_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAcc") ) { xAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAcc") ) { yAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zAcc") ) { zAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_acc") ) { _acc=inValue.Cast< ::openfl::_v2::sensors::Accelerometer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xAcc_old") ) { xAcc_old=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAcc_old") ) { yAcc_old=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zAcc_old") ) { zAcc_old=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"checkAccX") ) { checkAccX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"checkAccY") ) { checkAccY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"checkAccZ") ) { checkAccZ=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startScreen") ) { startScreen=inValue.Cast< ::StartScreen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"categoryOne") ) { categoryOne=inValue.Cast< ::CategoryOne >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"categoryChoose") ) { categoryChoose=inValue.Cast< ::CategoryChoose >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inited"));
	outFields->push(HX_CSTRING("startScreen"));
	outFields->push(HX_CSTRING("categoryChoose"));
	outFields->push(HX_CSTRING("categoryOne"));
	outFields->push(HX_CSTRING("_acc"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("points"),
	HX_CSTRING("xAcc"),
	HX_CSTRING("xAcc_old"),
	HX_CSTRING("yAcc"),
	HX_CSTRING("yAcc_old"),
	HX_CSTRING("zAcc"),
	HX_CSTRING("zAcc_old"),
	HX_CSTRING("checkAccX"),
	HX_CSTRING("checkAccY"),
	HX_CSTRING("checkAccZ"),
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_CSTRING("inited")},
	{hx::fsObject /*::StartScreen*/ ,(int)offsetof(Main_obj,startScreen),HX_CSTRING("startScreen")},
	{hx::fsObject /*::CategoryChoose*/ ,(int)offsetof(Main_obj,categoryChoose),HX_CSTRING("categoryChoose")},
	{hx::fsObject /*::CategoryOne*/ ,(int)offsetof(Main_obj,categoryOne),HX_CSTRING("categoryOne")},
	{hx::fsObject /*::openfl::_v2::sensors::Accelerometer*/ ,(int)offsetof(Main_obj,_acc),HX_CSTRING("_acc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("inited"),
	HX_CSTRING("startScreen"),
	HX_CSTRING("categoryChoose"),
	HX_CSTRING("categoryOne"),
	HX_CSTRING("_acc"),
	HX_CSTRING("resize"),
	HX_CSTRING("init"),
	HX_CSTRING("updateAcc"),
	HX_CSTRING("onStart"),
	HX_CSTRING("back"),
	HX_CSTRING("startCategoryOne"),
	HX_CSTRING("onCategoryEnd"),
	HX_CSTRING("added"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::points,"points");
	HX_MARK_MEMBER_NAME(Main_obj::xAcc,"xAcc");
	HX_MARK_MEMBER_NAME(Main_obj::xAcc_old,"xAcc_old");
	HX_MARK_MEMBER_NAME(Main_obj::yAcc,"yAcc");
	HX_MARK_MEMBER_NAME(Main_obj::yAcc_old,"yAcc_old");
	HX_MARK_MEMBER_NAME(Main_obj::zAcc,"zAcc");
	HX_MARK_MEMBER_NAME(Main_obj::zAcc_old,"zAcc_old");
	HX_MARK_MEMBER_NAME(Main_obj::checkAccX,"checkAccX");
	HX_MARK_MEMBER_NAME(Main_obj::checkAccY,"checkAccY");
	HX_MARK_MEMBER_NAME(Main_obj::checkAccZ,"checkAccZ");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::points,"points");
	HX_VISIT_MEMBER_NAME(Main_obj::xAcc,"xAcc");
	HX_VISIT_MEMBER_NAME(Main_obj::xAcc_old,"xAcc_old");
	HX_VISIT_MEMBER_NAME(Main_obj::yAcc,"yAcc");
	HX_VISIT_MEMBER_NAME(Main_obj::yAcc_old,"yAcc_old");
	HX_VISIT_MEMBER_NAME(Main_obj::zAcc,"zAcc");
	HX_VISIT_MEMBER_NAME(Main_obj::zAcc_old,"zAcc_old");
	HX_VISIT_MEMBER_NAME(Main_obj::checkAccX,"checkAccX");
	HX_VISIT_MEMBER_NAME(Main_obj::checkAccY,"checkAccY");
	HX_VISIT_MEMBER_NAME(Main_obj::checkAccZ,"checkAccZ");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
	points= (int)0;
	xAcc= (int)0;
	xAcc_old= (int)0;
	yAcc= (int)0;
	yAcc_old= (int)0;
	zAcc= (int)0;
	zAcc_old= (int)0;
	checkAccX= (int)0;
	checkAccY= (int)0;
	checkAccZ= (int)0;
}

