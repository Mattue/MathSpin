#ifndef INCLUDED_StartScreen
#define INCLUDED_StartScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS0(StartScreen)
HX_DECLARE_CLASS3(openfl,_v2,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
HX_DECLARE_CLASS3(openfl,_v2,text,TextFormat)


class HXCPP_CLASS_ATTRIBUTES  StartScreen_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef StartScreen_obj OBJ_;
		StartScreen_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StartScreen_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StartScreen_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StartScreen"); }

		::openfl::_v2::display::Bitmap background;
		::openfl::_v2::display::Sprite spin;
		::openfl::_v2::display::Bitmap spin_thing;
		::openfl::_v2::display::Bitmap logo;
		::openfl::_v2::display::Bitmap sec_word;
		::openfl::_v2::display::Sprite start_button;
		::openfl::_v2::display::Sprite about_button;
		::openfl::_v2::display::Sprite about_back;
		::openfl::_v2::text::TextField about_textfield;
		::openfl::_v2::text::TextFormat about_textformat;
		::openfl::_v2::display::Sprite about_but;
		virtual Void about_but_clicked( ::openfl::_v2::events::MouseEvent e);
		Dynamic about_but_clicked_dyn();

		int FrameCount;
		virtual Void onStartClick( ::openfl::_v2::events::MouseEvent e);
		Dynamic onStartClick_dyn();

		virtual Void onAboutClick( ::openfl::_v2::events::MouseEvent e);
		Dynamic onAboutClick_dyn();

		virtual Void onFrame( ::openfl::_v2::events::Event e);
		Dynamic onFrame_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};


#endif /* INCLUDED_StartScreen */ 
