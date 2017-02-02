#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS0(CategoryChoose)
HX_DECLARE_CLASS0(CategoryOne)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS0(StartScreen)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,sensors,Accelerometer)
HX_DECLARE_CLASS2(openfl,events,AccelerometerEvent)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		bool inited;
		::StartScreen startScreen;
		::CategoryChoose categoryChoose;
		::CategoryOne categoryOne;
		::openfl::_v2::sensors::Accelerometer _acc;
		virtual Void resize( Dynamic e);
		Dynamic resize_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void updateAcc( ::openfl::events::AccelerometerEvent Event);
		Dynamic updateAcc_dyn();

		virtual Void onStart( ::openfl::_v2::events::Event e);
		Dynamic onStart_dyn();

		virtual Void back( ::openfl::_v2::events::Event e);
		Dynamic back_dyn();

		virtual Void startCategoryOne( ::openfl::_v2::events::Event e);
		Dynamic startCategoryOne_dyn();

		virtual Void onCategoryEnd( ::openfl::_v2::events::Event e);
		Dynamic onCategoryEnd_dyn();

		virtual Void added( Dynamic e);
		Dynamic added_dyn();

		static int points;
		static Float xAcc;
		static Float xAcc_old;
		static Float yAcc;
		static Float yAcc_old;
		static Float zAcc;
		static Float zAcc_old;
		static Float checkAccX;
		static Float checkAccY;
		static Float checkAccZ;
		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_Main */ 
