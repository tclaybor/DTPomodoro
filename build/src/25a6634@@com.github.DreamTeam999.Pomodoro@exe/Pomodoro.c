/* Pomodoro.c generated by valac 0.42.5, the Vala compiler
 * generated from Pomodoro.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>


#define TYPE_POMODORO (pomodoro_get_type ())
#define POMODORO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_POMODORO, Pomodoro))
#define POMODORO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_POMODORO, PomodoroClass))
#define IS_POMODORO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_POMODORO))
#define IS_POMODORO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_POMODORO))
#define POMODORO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_POMODORO, PomodoroClass))

typedef struct _Pomodoro Pomodoro;
typedef struct _PomodoroClass PomodoroClass;
typedef struct _PomodoroPrivate PomodoroPrivate;
enum  {
	POMODORO_0_PROPERTY,
	POMODORO_NUM_PROPERTIES
};
static GParamSpec* pomodoro_properties[POMODORO_NUM_PROPERTIES];

#define POMO_TYPE_WINDOW (pomo_window_get_type ())
#define POMO_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), POMO_TYPE_WINDOW, PomoWindow))
#define POMO_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), POMO_TYPE_WINDOW, PomoWindowClass))
#define POMO_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), POMO_TYPE_WINDOW))
#define POMO_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), POMO_TYPE_WINDOW))
#define POMO_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), POMO_TYPE_WINDOW, PomoWindowClass))

typedef struct _PomoWindow PomoWindow;
typedef struct _PomoWindowClass PomoWindowClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _Pomodoro {
	GtkApplication parent_instance;
	PomodoroPrivate * priv;
};

struct _PomodoroClass {
	GtkApplicationClass parent_class;
};


static gpointer pomodoro_parent_class = NULL;

GType pomodoro_get_type (void) G_GNUC_CONST;
Pomodoro* pomodoro_new (void);
Pomodoro* pomodoro_construct (GType object_type);
static void pomodoro_real_activate (GApplication* base);
GType pomo_window_get_type (void) G_GNUC_CONST;
PomoWindow* pomo_window_new (Pomodoro* application);
PomoWindow* pomo_window_construct (GType object_type,
                                   Pomodoro* application);


Pomodoro*
pomodoro_construct (GType object_type)
{
	Pomodoro * self = NULL;
#line 4 "../src/Pomodoro.vala"
	self = (Pomodoro*) g_object_new (object_type, "application-id", "com.github.DreamTeam999.Pomodoro", "flags", G_APPLICATION_FLAGS_NONE, NULL);
#line 3 "../src/Pomodoro.vala"
	return self;
#line 70 "Pomodoro.c"
}


Pomodoro*
pomodoro_new (void)
{
#line 3 "../src/Pomodoro.vala"
	return pomodoro_construct (TYPE_POMODORO);
#line 79 "Pomodoro.c"
}


static void
pomodoro_real_activate (GApplication* base)
{
	Pomodoro * self;
	PomoWindow* window = NULL;
	PomoWindow* _tmp0_;
#line 7 "../src/Pomodoro.vala"
	self = (Pomodoro*) base;
#line 8 "../src/Pomodoro.vala"
	_tmp0_ = pomo_window_new (self);
#line 8 "../src/Pomodoro.vala"
	g_object_ref_sink (_tmp0_);
#line 8 "../src/Pomodoro.vala"
	window = _tmp0_;
#line 10 "../src/Pomodoro.vala"
	gtk_application_add_window ((GtkApplication*) self, (GtkWindow*) window);
#line 7 "../src/Pomodoro.vala"
	_g_object_unref0 (window);
#line 101 "Pomodoro.c"
}


static void
pomodoro_class_init (PomodoroClass * klass)
{
#line 1 "../src/Pomodoro.vala"
	pomodoro_parent_class = g_type_class_peek_parent (klass);
#line 1 "../src/Pomodoro.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication*)) pomodoro_real_activate;
#line 112 "Pomodoro.c"
}


static void
pomodoro_instance_init (Pomodoro * self)
{
}


GType
pomodoro_get_type (void)
{
	static volatile gsize pomodoro_type_id__volatile = 0;
	if (g_once_init_enter (&pomodoro_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PomodoroClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) pomodoro_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Pomodoro), 0, (GInstanceInitFunc) pomodoro_instance_init, NULL };
		GType pomodoro_type_id;
		pomodoro_type_id = g_type_register_static (gtk_application_get_type (), "Pomodoro", &g_define_type_info, 0);
		g_once_init_leave (&pomodoro_type_id__volatile, pomodoro_type_id);
	}
	return pomodoro_type_id__volatile;
}



