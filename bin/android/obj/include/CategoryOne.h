#ifndef INCLUDED_CategoryOne
#define INCLUDED_CategoryOne

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS0(CategoryOne)
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


class HXCPP_CLASS_ATTRIBUTES  CategoryOne_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef CategoryOne_obj OBJ_;
		CategoryOne_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CategoryOne_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CategoryOne_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CategoryOne"); }

		::openfl::_v2::display::Bitmap background;
		::openfl::_v2::display::Sprite pause_but;
		::openfl::_v2::text::TextField cat_text;
		::openfl::_v2::text::TextFormat cat_textf;
		::openfl::_v2::text::TextField points;
		::openfl::_v2::text::TextFormat points_tf;
		::String line;
		int lineNumber;
		::String fileName;
		Array< ::String > words;
		int sec;
		bool checkBool;
		bool kostil;
		bool pause_kostil;
		::openfl::_v2::text::TextField time;
		::openfl::_v2::text::TextFormat timef;
		int time_time;
		virtual ::String readLine( ::String fileName,int lineNumber);
		Dynamic readLine_dyn();

		virtual Void onPause( ::openfl::_v2::events::MouseEvent e);
		Dynamic onPause_dyn();

		int frameCount;
		virtual Void onFrame( ::openfl::_v2::events::Event e);
		Dynamic onFrame_dyn();

		virtual Void onRight( );
		Dynamic onRight_dyn();

		virtual Void onWrong( );
		Dynamic onWrong_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};


#endif /* INCLUDED_CategoryOne */ 
