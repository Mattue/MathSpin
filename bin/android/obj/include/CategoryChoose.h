#ifndef INCLUDED_CategoryChoose
#define INCLUDED_CategoryChoose

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS0(CategoryChoose)
HX_DECLARE_CLASS0(Category_Button)
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


class HXCPP_CLASS_ATTRIBUTES  CategoryChoose_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef CategoryChoose_obj OBJ_;
		CategoryChoose_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CategoryChoose_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CategoryChoose_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CategoryChoose"); }

		::openfl::_v2::display::Bitmap background;
		::Category_Button one;
		::Category_Button two;
		::Category_Button three;
		::Category_Button four;
		::Category_Button five;
		::openfl::_v2::display::Sprite back_but;
		::openfl::_v2::display::Sprite rect;
		int sec;
		::openfl::_v2::text::TextField time;
		::openfl::_v2::text::TextFormat timef;
		::openfl::_v2::text::TextField result;
		::openfl::_v2::text::TextFormat result_tf;
		virtual Void backClick( ::openfl::_v2::events::MouseEvent e);
		Dynamic backClick_dyn();

		virtual Void Category1Click( int categorynumber,::openfl::_v2::events::MouseEvent e);
		Dynamic Category1Click_dyn();

		int frameCount;
		virtual Void onFrame( ::openfl::_v2::events::Event e);
		Dynamic onFrame_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		static ::String category;
};


#endif /* INCLUDED_CategoryChoose */ 
