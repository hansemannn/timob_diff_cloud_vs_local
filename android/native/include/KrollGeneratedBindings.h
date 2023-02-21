/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -L C++ -E -t generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'25,28,32-33,44,49' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 3 "generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include "org.appcelerator.titanium.proxy.MenuItemProxy.h"
#include "org.appcelerator.titanium.view.TiAnimation.h"
#include "ti.modules.titanium.calendar.CalendarModule.h"
#include "ti.modules.titanium.xml.XPathNodeListProxy.h"
#include "ti.modules.titanium.media.MediaModule.h"
#include "ti.modules.titanium.platform.AndroidModule.h"
#include "ti.modules.titanium.xml.NodeProxy.h"
#include "org.appcelerator.titanium.proxy.RProxy.h"
#include "ti.modules.titanium.ui.ButtonBarProxy.h"
#include "ti.modules.titanium.calendar.EventProxy.h"
#include "ti.modules.titanium.ui.SliderProxy.h"
#include "ti.modules.titanium.app.properties.PropertiesModule.h"
#include "ti.modules.titanium.media.AudioPlayerProxy.h"
#include "ti.modules.titanium.ui._2DMatrixProxy.h"
#include "ti.modules.titanium.geolocation.GeolocationModule.h"
#include "ti.modules.titanium.ui.SearchBarProxy.h"
#include "org.appcelerator.titanium.proxy.TiWindowProxy.h"
#include "ti.modules.titanium.filesystem.FileProxy.h"
#include "ti.modules.titanium.xml.AttrProxy.h"
#include "ti.modules.titanium.media.SoundProxy.h"
#include "ti.modules.titanium.ui.ImageViewProxy.h"
#include "ti.modules.titanium.locale.NumberFormatProxy.h"
#include "org.appcelerator.kroll.KrollProxy.h"
#include "ti.modules.titanium.ui.TableViewScrollPositionModule.h"
#include "ti.modules.titanium.ui.widget.listview.ListSectionProxy.h"
#include "org.appcelerator.titanium.proxy.IntentProxy.h"
#include "ti.modules.titanium.ui.ShortcutModule.h"
#include "ti.modules.titanium.ui.NavigationWindowProxy.h"
#include "ti.modules.titanium.contacts.ContactsModule.h"
#include "ti.modules.titanium.ui.android.FloatingActionButtonProxy.h"
#include "org.appcelerator.kroll.KrollModule.h"
#include "ti.modules.titanium.android.PendingIntentProxy.h"
#include "ti.modules.titanium.ui.android.CardViewProxy.h"
#include "ti.modules.titanium.ui.AlertDialogProxy.h"
#include "ti.modules.titanium.android.notificationmanager.BigPictureStyleProxy.h"
#include "ti.modules.titanium.calendar.ReminderProxy.h"
#include "org.appcelerator.titanium.proxy.DecorViewProxy.h"
#include "ti.modules.titanium.app.AppModule.h"
#include "ti.modules.titanium.xml.XMLModule.h"
#include "ti.modules.titanium.locale.DateTimeFormatProxy.h"
#include "ti.modules.titanium.ui.ProgressBarProxy.h"
#include "ti.modules.titanium.ui.TiDialogProxy.h"
#include "ti.modules.titanium.xml.ProcessingInstructionProxy.h"
#include "ti.modules.titanium.gesture.GestureModule.h"
#include "ti.modules.titanium.ui.MaskedImageProxy.h"
#include "ti.modules.titanium.utils.UtilsModule.h"
#include "ti.modules.titanium.android.notificationmanager.NotificationManagerModule.h"
#include "ti.modules.titanium.platform.DisplayCapsProxy.h"
#include "ti.modules.titanium.ui.OptionDialogProxy.h"
#include "ti.modules.titanium.ui.android.AndroidModule.h"
#include "ti.modules.titanium.locale.LocaleModule.h"
#include "ti.modules.titanium.ui.android.ProgressIndicatorProxy.h"
#include "org.appcelerator.titanium.proxy.TiViewProxy.h"
#include "ti.modules.titanium.locale.CollatorProxy.h"
#include "org.appcelerator.titanium.view.Ti2DMatrix.h"
#include "ti.modules.titanium.TitaniumModule.h"
#include "ti.modules.titanium.ui.widget.listview.ListViewProxy.h"
#include "ti.modules.titanium.ui.android.SearchViewProxy.h"
#include "ti.modules.titanium.ui.AttributedStringProxy.h"
#include "ti.modules.titanium.ui.TabProxy.h"
#include "ti.modules.titanium.ui.AttributeProxy.h"
#include "ti.modules.titanium.xml.EntityProxy.h"
#include "ti.modules.titanium.network.HTTPClientProxy.h"
#include "ti.modules.titanium.network.socket.TCPProxy.h"
#include "ti.modules.titanium.android.RemoteViewsProxy.h"
#include "ti.modules.titanium.xml.TextProxy.h"
#include "org.appcelerator.titanium.proxy.TiActivityWindowProxy.h"
#include "ti.modules.titanium.android.notificationmanager.BigTextStyleProxy.h"
#include "ti.modules.titanium.platform.PlatformModule.h"
#include "ti.modules.titanium.android.notificationmanager.StyleProxy.h"
#include "ti.modules.titanium.ui.ScrollableViewProxy.h"
#include "ti.modules.titanium.ui.PickerProxy.h"
#include "ti.modules.titanium.xml.CharacterDataProxy.h"
#include "ti.modules.titanium.ui.Matrix2DProxy.h"
#include "ti.modules.titanium.android.quicksettings.QuickSettingsServiceProxy.h"
#include "ti.modules.titanium.accelerometer.AccelerometerModule.h"
#include "ti.modules.titanium.android.BroadcastReceiverProxy.h"
#include "ti.modules.titanium.xml.CommentProxy.h"
#include "org.appcelerator.titanium.proxy.ActionBarProxy.h"
#include "org.appcelerator.titanium.proxy.TiToolbarProxy.h"
#include "org.appcelerator.titanium.proxy.InstrumentationProxy.h"
#include "ti.modules.titanium.ui.TextAreaProxy.h"
#include "ti.modules.titanium.ui.ViewProxy.h"
#include "ti.modules.titanium.ui.widget.listview.RecyclerViewProxy.h"
#include "ti.modules.titanium.ui.PickerRowProxy.h"
#include "ti.modules.titanium.android.notificationmanager.NotificationProxy.h"
#include "ti.modules.titanium.geolocation.android.AndroidModule.h"
#include "ti.modules.titanium.ui.ScrollViewProxy.h"
#include "ti.modules.titanium.ui.TabContentViewProxy.h"
#include "ti.modules.titanium.ui.TableViewRowProxy.h"
#include "ti.modules.titanium.xml.EntityReferenceProxy.h"
#include "ti.modules.titanium.ui.ShortcutItemProxy.h"
#include "ti.modules.titanium.ui.PickerColumnProxy.h"
#include "ti.modules.titanium.xml.ElementProxy.h"
#include "ti.modules.titanium.android.EnvironmentModule.h"
#include "ti.modules.titanium.xml.NamedNodeMapProxy.h"
#include "ti.modules.titanium.ui.ToolbarProxy.h"
#include "ti.modules.titanium.database.DatabaseModule.h"
#include "ti.modules.titanium.media.VideoPlayerProxy.h"
#include "ti.modules.titanium.network.CookieProxy.h"
#include "ti.modules.titanium.ui.TextFieldProxy.h"
#include "ti.modules.titanium.ui.android.DrawerLayoutProxy.h"
#include "ti.modules.titanium.ui.android.SnackbarProxy.h"
#include "ti.modules.titanium.contacts.PersonProxy.h"
#include "ti.modules.titanium.ui.android.CollapseToolbarProxy.h"
#include "ti.modules.titanium.ui.ListViewScrollPositionModule.h"
#include "ti.modules.titanium.xml.DocumentTypeProxy.h"
#include "org.appcelerator.titanium.proxy.ActivityProxy.h"
#include "ti.modules.titanium.calendar.CalendarProxy.h"
#include "ti.modules.titanium.ui.WebViewProxy.h"
#include "ti.modules.titanium.android.notificationmanager.NotificationChannelProxy.h"
#include "ti.modules.titanium.ui.AnimationProxy.h"
#include "org.appcelerator.titanium.proxy.ColorProxy.h"
#include "ti.modules.titanium.ui.OptionBarProxy.h"
#include "ti.modules.titanium.calendar.RecurrenceRuleProxy.h"
#include "ti.modules.titanium.filesystem.FilesystemModule.h"
#include "ti.modules.titanium.stream.BufferStreamProxy.h"
#include "ti.modules.titanium.calendar.AlertProxy.h"
#include "ti.modules.titanium.network.socket.SocketModule.h"
#include "ti.modules.titanium.ui.ButtonProxy.h"
#include "ti.modules.titanium.ui.WindowProxy.h"
#include "ti.modules.titanium.xml.CDATASectionProxy.h"
#include "ti.modules.titanium.database.TiResultSetProxy.h"
#include "ti.modules.titanium.ui.ActivityIndicatorProxy.h"
#include "org.appcelerator.titanium.TiFileProxy.h"
#include "org.appcelerator.titanium.TiBlob.h"
#include "ti.modules.titanium.ui.RefreshControlProxy.h"
#include "ti.modules.titanium.geolocation.android.LocationRuleProxy.h"
#include "ti.modules.titanium.ui.NotificationProxy.h"
#include "ti.modules.titanium.ui.activityindicatorstyle.ActivityIndicatorStyleModule.h"
#include "org.appcelerator.titanium.proxy.ServiceProxy.h"
#include "ti.modules.titanium.stream.BlobStreamProxy.h"
#include "ti.modules.titanium.ui.clipboard.ClipboardModule.h"
#include "ti.modules.titanium.ui.TableViewProxy.h"
#include "ti.modules.titanium.xml.DocumentFragmentProxy.h"
#include "ti.modules.titanium.android.AndroidModule.h"
#include "ti.modules.titanium.ui.widget.listview.ListItemProxy.h"
#include "ti.modules.titanium.database.TiDatabaseProxy.h"
#include "ti.modules.titanium.media.android.AndroidModule.h"
#include "ti.modules.titanium.app.AndroidModule.h"
#include "ti.modules.titanium.network.NetworkModule.h"
#include "ti.modules.titanium.ui.LabelProxy.h"
#include "org.appcelerator.titanium.proxy.MenuProxy.h"
#include "ti.modules.titanium.ui.UIModule.h"
#include "ti.modules.titanium.xml.NotationProxy.h"
#include "ti.modules.titanium.xml.NodeListProxy.h"
#include "ti.modules.titanium.BufferProxy.h"
#include "ti.modules.titanium.ui.TabbedBarProxy.h"
#include "ti.modules.titanium.codec.CodecModule.h"
#include "ti.modules.titanium.ui.EmailDialogProxy.h"
#include "ti.modules.titanium.ui.TableViewSectionProxy.h"
#include "ti.modules.titanium.calendar.AttendeeProxy.h"
#include "ti.modules.titanium.xml.DOMImplementationProxy.h"
#include "ti.modules.titanium.xml.DocumentProxy.h"
#include "ti.modules.titanium.analytics.AnalyticsModule.h"
#include "ti.modules.titanium.stream.FileStreamProxy.h"
#include "ti.modules.titanium.media.AudioRecorderProxy.h"
#include "ti.modules.titanium.ui.SwitchProxy.h"
#include "ti.modules.titanium.ui.TabGroupProxy.h"
#include "ti.modules.titanium.geolocation.android.LocationProviderProxy.h"
#include "ti.modules.titanium.stream.StreamModule.h"


namespace titanium {
namespace bindings {

#line 174 "generated/KrollGeneratedBindings.gperf"
struct BindEntry;
/* maximum key range = 375, duplicates = 0 */

class generated
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static struct BindEntry *lookupGeneratedInit (const char *str, size_t len);
};

inline unsigned int
generated::hash (const char *str, size_t len)
{
  static unsigned short asso_values[] =
    {
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406,   0,  10, 406, 406,
       55, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406,  95,  95, 105,  40,  40,
      105,  75, 406, 135,   5, 406, 406, 130,  45,  35,
        5, 105,  45,  15,   0,  10,  60,  10,  60, 406,
      406, 406, 406, 406, 406, 406, 406,   5, 135,  15,
       45,   0,  30,  10,  75,  35,  25, 140,  15,  30,
        5,   5,   5,   0,   0,   0,   0,  25, 170,  50,
       45,  70, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406, 406, 406, 406,
      406, 406, 406, 406, 406, 406, 406
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[48])];
      /*FALLTHROUGH*/
      case 48:
      case 47:
      case 46:
      case 45:
      case 44:
        hval += asso_values[static_cast<unsigned char>(str[43])];
      /*FALLTHROUGH*/
      case 43:
      case 42:
      case 41:
      case 40:
      case 39:
      case 38:
      case 37:
      case 36:
      case 35:
      case 34:
      case 33:
        hval += asso_values[static_cast<unsigned char>(str[32])];
      /*FALLTHROUGH*/
      case 32:
        hval += asso_values[static_cast<unsigned char>(str[31])];
      /*FALLTHROUGH*/
      case 31:
      case 30:
      case 29:
      case 28:
        hval += asso_values[static_cast<unsigned char>(str[27]+1)];
      /*FALLTHROUGH*/
      case 27:
      case 26:
      case 25:
        hval += asso_values[static_cast<unsigned char>(str[24])];
        break;
    }
  return hval;
}

struct BindEntry *
generated::lookupGeneratedInit (const char *str, size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 161,
      MIN_WORD_LENGTH = 31,
      MAX_WORD_LENGTH = 74,
      MIN_HASH_VALUE = 31,
      MAX_HASH_VALUE = 405
    };

  static struct BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 322 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.BufferProxy", ::titanium::BufferProxy::bindProxy, ::titanium::BufferProxy::dispose},
      {""}, {""}, {""}, {""},
#line 235 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.TabProxy", ::titanium::ui::TabProxy::bindProxy, ::titanium::ui::TabProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 293 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.calendar.AlertProxy", ::titanium::calendar::AlertProxy::bindProxy, ::titanium::calendar::AlertProxy::dispose},
#line 279 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.contacts.PersonProxy", ::titanium::contacts::PersonProxy::bindProxy, ::titanium::contacts::PersonProxy::dispose},
#line 334 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.TabGroupProxy", ::titanium::ui::TabGroupProxy::bindProxy, ::titanium::ui::TabGroupProxy::dispose},
#line 327 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.calendar.AttendeeProxy", ::titanium::AttendeeProxy::bindProxy, ::titanium::AttendeeProxy::dispose},
      {""},
#line 185 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.calendar.EventProxy", ::titanium::calendar::EventProxy::bindProxy, ::titanium::calendar::EventProxy::dispose},
      {""},
#line 195 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.media.SoundProxy", ::titanium::media::SoundProxy::bindProxy, ::titanium::media::SoundProxy::dispose},
#line 289 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.OptionBarProxy", ::titanium::ui::OptionBarProxy::bindProxy, ::titanium::ui::OptionBarProxy::dispose},
#line 204 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.contacts.ContactsModule", ::titanium::ContactsModule::bindProxy, ::titanium::ContactsModule::dispose},
      {""}, {""}, {""},
#line 264 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.TabContentViewProxy", ::titanium::ui::TabContentViewProxy::bindProxy, ::titanium::ui::TabContentViewProxy::dispose},
      {""}, {""},
#line 272 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.ToolbarProxy", ::titanium::ui::ToolbarProxy::bindProxy, ::titanium::ui::ToolbarProxy::dispose},
#line 311 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.android.AndroidModule", ::titanium::AndroidModule::bindProxy, ::titanium::AndroidModule::dispose},
#line 284 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.calendar.CalendarProxy", ::titanium::calendar::CalendarProxy::bindProxy, ::titanium::calendar::CalendarProxy::dispose},
#line 178 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.calendar.CalendarModule", ::titanium::CalendarModule::bindProxy, ::titanium::CalendarModule::dispose},
      {""},
#line 285 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.WebViewProxy", ::titanium::ui::WebViewProxy::bindProxy, ::titanium::ui::WebViewProxy::dispose},
      {""},
#line 236 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.AttributeProxy", ::titanium::AttributeProxy::bindProxy, ::titanium::AttributeProxy::dispose},
      {""}, {""},
#line 224 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.OptionDialogProxy", ::titanium::ui::OptionDialogProxy::bindProxy, ::titanium::ui::OptionDialogProxy::dispose},
#line 249 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.Matrix2DProxy", ::titanium::ui::Matrix2DProxy::bindProxy, ::titanium::ui::Matrix2DProxy::dispose},
#line 184 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.ButtonBarProxy", ::titanium::ui::ButtonBarProxy::bindProxy, ::titanium::ui::ButtonBarProxy::dispose},
#line 228 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.TiViewProxy", ::titanium::TiViewProxy::bindProxy, ::titanium::TiViewProxy::dispose},
      {""}, {""},
#line 233 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.android.SearchViewProxy", ::titanium::ui::android::SearchViewProxy::bindProxy, ::titanium::ui::android::SearchViewProxy::dispose},
#line 323 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.TabbedBarProxy", ::titanium::ui::TabbedBarProxy::bindProxy, ::titanium::ui::TabbedBarProxy::dispose},
#line 251 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.accelerometer.AccelerometerModule", ::titanium::AccelerometerModule::bindProxy, ::titanium::AccelerometerModule::dispose},
#line 336 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.stream.StreamModule", ::titanium::StreamModule::bindProxy, ::titanium::StreamModule::dispose},
      {""},
#line 255 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.TiToolbarProxy", ::titanium::TiToolbarProxy::bindProxy, ::titanium::TiToolbarProxy::dispose},
#line 302 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.RefreshControlProxy", ::titanium::ui::RefreshControlProxy::bindProxy, ::titanium::ui::RefreshControlProxy::dispose},
#line 244 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.platform.PlatformModule", ::titanium::PlatformModule::bindProxy, ::titanium::PlatformModule::dispose},
#line 231 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.TitaniumModule", ::titanium::TitaniumModule::bindProxy, ::titanium::TitaniumModule::dispose},
      {""},
#line 269 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.ElementProxy", ::titanium::xml::ElementProxy::bindProxy, ::titanium::xml::ElementProxy::dispose},
#line 191 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.SearchBarProxy", ::titanium::ui::SearchBarProxy::bindProxy, ::titanium::ui::SearchBarProxy::dispose},
#line 227 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.android.ProgressIndicatorProxy", ::titanium::ui::android::ProgressIndicatorProxy::bindProxy, ::titanium::ui::android::ProgressIndicatorProxy::dispose},
#line 220 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.MaskedImageProxy", ::titanium::ui::MaskedImageProxy::bindProxy, ::titanium::ui::MaskedImageProxy::dispose},
#line 304 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.NotificationProxy", ::titanium::ui::NotificationProxy::bindProxy, ::titanium::ui::NotificationProxy::dispose},
      {""},
#line 274 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.media.VideoPlayerProxy", ::titanium::media::VideoPlayerProxy::bindProxy, ::titanium::media::VideoPlayerProxy::dispose},
#line 262 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.geolocation.android.AndroidModule", ::titanium::geolocation::AndroidModule::bindProxy, ::titanium::geolocation::AndroidModule::dispose},
      {""}, {""}, {""},
#line 300 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.TiFileProxy", ::titanium::TiFileProxy::bindProxy, ::titanium::TiFileProxy::dispose},
#line 290 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.calendar.RecurrenceRuleProxy", ::titanium::RecurrenceRuleProxy::bindProxy, ::titanium::RecurrenceRuleProxy::dispose},
#line 209 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.AlertDialogProxy", ::titanium::ui::AlertDialogProxy::bindProxy, ::titanium::ui::AlertDialogProxy::dispose},
#line 229 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.locale.CollatorProxy", ::titanium::locale::CollatorProxy::bindProxy, ::titanium::locale::CollatorProxy::dispose},
#line 219 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.gesture.GestureModule", ::titanium::GestureModule::bindProxy, ::titanium::GestureModule::dispose},
#line 246 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.ScrollableViewProxy", ::titanium::ui::ScrollableViewProxy::bindProxy, ::titanium::ui::ScrollableViewProxy::dispose},
#line 277 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.android.DrawerLayoutProxy", ::titanium::ui::android::DrawerLayoutProxy::bindProxy, ::titanium::ui::android::DrawerLayoutProxy::dispose},
#line 206 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.kroll.KrollModule", ::titanium::KrollModule::bindProxy, ::titanium::KrollModule::dispose},
#line 237 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.EntityProxy", ::titanium::xml::EntityProxy::bindProxy, ::titanium::xml::EntityProxy::dispose},
#line 335 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.geolocation.android.LocationProviderProxy", ::titanium::LocationProviderProxy::bindProxy, ::titanium::LocationProviderProxy::dispose},
      {""}, {""}, {""},
#line 270 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.android.EnvironmentModule", ::titanium::android::EnvironmentModule::bindProxy, ::titanium::android::EnvironmentModule::dispose},
#line 316 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.network.NetworkModule", ::titanium::NetworkModule::bindProxy, ::titanium::NetworkModule::dispose},
#line 211 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.calendar.ReminderProxy", ::titanium::calendar::ReminderProxy::bindProxy, ::titanium::calendar::ReminderProxy::dispose},
#line 183 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.RProxy", ::titanium::RProxy::bindProxy, ::titanium::RProxy::dispose},
#line 295 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.ButtonProxy", ::titanium::ui::ButtonProxy::bindProxy, ::titanium::ui::ButtonProxy::dispose},
      {""},
#line 187 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.app.properties.PropertiesModule", ::titanium::app::PropertiesModule::bindProxy, ::titanium::app::PropertiesModule::dispose},
#line 321 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.NodeListProxy", ::titanium::xml::NodeListProxy::bindProxy, ::titanium::xml::NodeListProxy::dispose},
      {""},
#line 325 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.EmailDialogProxy", ::titanium::ui::EmailDialogProxy::bindProxy, ::titanium::ui::EmailDialogProxy::dispose},
#line 192 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.TiWindowProxy", ::titanium::TiWindowProxy::bindProxy, ::titanium::TiWindowProxy::dispose},
#line 212 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.DecorViewProxy", ::titanium::DecorViewProxy::bindProxy, ::titanium::DecorViewProxy::dispose},
#line 181 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.platform.AndroidModule", ::titanium::platform::AndroidModule::bindProxy, ::titanium::platform::AndroidModule::dispose},
#line 242 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.TiActivityWindowProxy", ::titanium::android::TiActivityWindowProxy::bindProxy, ::titanium::android::TiActivityWindowProxy::dispose},
#line 296 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.WindowProxy", ::titanium::ui::WindowProxy::bindProxy, ::titanium::ui::WindowProxy::dispose},
      {""},
#line 328 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.DOMImplementationProxy", ::titanium::xml::DOMImplementationProxy::bindProxy, ::titanium::xml::DOMImplementationProxy::dispose},
#line 309 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.TableViewProxy", ::titanium::ui::TableViewProxy::bindProxy, ::titanium::ui::TableViewProxy::dispose},
#line 308 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.clipboard.ClipboardModule", ::titanium::ui::ClipboardModule::bindProxy, ::titanium::ui::ClipboardModule::dispose},
#line 186 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.SliderProxy", ::titanium::ui::SliderProxy::bindProxy, ::titanium::ui::SliderProxy::dispose},
#line 223 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.platform.DisplayCapsProxy", ::titanium::platform::DisplayCapsProxy::bindProxy, ::titanium::platform::DisplayCapsProxy::dispose},
#line 230 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.view.Ti2DMatrix", ::titanium::Ti2DMatrix::bindProxy, ::titanium::Ti2DMatrix::dispose},
#line 177 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.view.TiAnimation", ::titanium::TiAnimation::bindProxy, ::titanium::TiAnimation::dispose},
#line 263 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.ScrollViewProxy", ::titanium::ui::ScrollViewProxy::bindProxy, ::titanium::ui::ScrollViewProxy::dispose},
#line 240 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.android.RemoteViewsProxy", ::titanium::android::RemoteViewsProxy::bindProxy, ::titanium::android::RemoteViewsProxy::dispose},
      {""},
#line 257 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.TextAreaProxy", ::titanium::ui::TextAreaProxy::bindProxy, ::titanium::ui::TextAreaProxy::dispose},
#line 331 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.stream.FileStreamProxy", ::titanium::stream::FileStreamProxy::bindProxy, ::titanium::stream::FileStreamProxy::dispose},
      {""},
#line 216 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.ProgressBarProxy", ::titanium::ui::ProgressBarProxy::bindProxy, ::titanium::ui::ProgressBarProxy::dispose},
      {""},
#line 215 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.locale.DateTimeFormatProxy", ::titanium::locale::DateTimeFormatProxy::bindProxy, ::titanium::locale::DateTimeFormatProxy::dispose},
#line 303 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.geolocation.android.LocationRuleProxy", ::titanium::LocationRuleProxy::bindProxy, ::titanium::LocationRuleProxy::dispose},
      {""},
#line 278 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.android.SnackbarProxy", ::titanium::ui::android::SnackbarProxy::bindProxy, ::titanium::ui::android::SnackbarProxy::dispose},
#line 268 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.PickerColumnProxy", ::titanium::ui::PickerColumnProxy::bindProxy, ::titanium::ui::PickerColumnProxy::dispose},
#line 207 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.android.PendingIntentProxy", ::titanium::android::PendingIntentProxy::bindProxy, ::titanium::android::PendingIntentProxy::dispose},
#line 248 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.CharacterDataProxy", ::titanium::xml::CharacterDataProxy::bindProxy, ::titanium::xml::CharacterDataProxy::dispose},
      {""},
#line 247 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.PickerProxy", ::titanium::ui::PickerProxy::bindProxy, ::titanium::ui::PickerProxy::dispose},
      {""},
#line 253 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.CommentProxy", ::titanium::xml::CommentProxy::bindProxy, ::titanium::xml::CommentProxy::dispose},
#line 196 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.ImageViewProxy", ::titanium::ui::ImageViewProxy::bindProxy, ::titanium::ui::ImageViewProxy::dispose},
#line 214 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.XMLModule", ::titanium::XMLModule::bindProxy, ::titanium::XMLModule::dispose},
#line 225 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.android.AndroidModule", ::titanium::ui::AndroidModule::bindProxy, ::titanium::ui::AndroidModule::dispose},
      {""},
#line 281 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.ListViewScrollPositionModule", ::titanium::ui::ListViewScrollPositionModule::bindProxy, ::titanium::ui::ListViewScrollPositionModule::dispose},
#line 260 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.PickerRowProxy", ::titanium::ui::PickerRowProxy::bindProxy, ::titanium::ui::PickerRowProxy::dispose},
#line 245 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.android.notificationmanager.StyleProxy", ::titanium::StyleProxy::bindProxy, ::titanium::StyleProxy::dispose},
#line 306 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.ServiceProxy", ::titanium::ServiceProxy::bindProxy, ::titanium::ServiceProxy::dispose},
#line 252 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.android.BroadcastReceiverProxy", ::titanium::android::BroadcastReceiverProxy::bindProxy, ::titanium::android::BroadcastReceiverProxy::dispose},
#line 271 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.NamedNodeMapProxy", ::titanium::xml::NamedNodeMapProxy::bindProxy, ::titanium::xml::NamedNodeMapProxy::dispose},
#line 276 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.TextFieldProxy", ::titanium::ui::TextFieldProxy::bindProxy, ::titanium::ui::TextFieldProxy::dispose},
      {""},
#line 197 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.locale.NumberFormatProxy", ::titanium::locale::NumberFormatProxy::bindProxy, ::titanium::locale::NumberFormatProxy::dispose},
      {""},
#line 319 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.UIModule", ::titanium::UIModule::bindProxy, ::titanium::UIModule::dispose},
#line 307 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.stream.BlobStreamProxy", ::titanium::stream::BlobStreamProxy::bindProxy, ::titanium::stream::BlobStreamProxy::dispose},
#line 238 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.network.HTTPClientProxy", ::titanium::network::HTTPClientProxy::bindProxy, ::titanium::network::HTTPClientProxy::dispose},
      {""},
#line 265 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.TableViewRowProxy", ::titanium::ui::TableViewRowProxy::bindProxy, ::titanium::ui::TableViewRowProxy::dispose},
#line 297 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.CDATASectionProxy", ::titanium::xml::CDATASectionProxy::bindProxy, ::titanium::xml::CDATASectionProxy::dispose},
#line 179 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.XPathNodeListProxy", ::titanium::xml::XPathNodeListProxy::bindProxy, ::titanium::xml::XPathNodeListProxy::dispose},
#line 241 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.TextProxy", ::titanium::xml::TextProxy::bindProxy, ::titanium::xml::TextProxy::dispose},
      {""},
#line 200 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.widget.listview.ListSectionProxy", ::titanium::ui::ListSectionProxy::bindProxy, ::titanium::ui::ListSectionProxy::dispose},
#line 254 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.ActionBarProxy", ::titanium::ActionBarProxy::bindProxy, ::titanium::ActionBarProxy::dispose},
#line 288 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.ColorProxy", ::titanium::ColorProxy::bindProxy, ::titanium::ColorProxy::dispose},
#line 198 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.kroll.KrollProxy", ::titanium::KrollProxy::bindProxy, ::titanium::KrollProxy::dispose},
#line 333 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.SwitchProxy", ::titanium::ui::SwitchProxy::bindProxy, ::titanium::ui::SwitchProxy::dispose},
      {""}, {""},
#line 314 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.media.android.AndroidModule", ::titanium::media::AndroidModule::bindProxy, ::titanium::media::AndroidModule::dispose},
#line 317 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.LabelProxy", ::titanium::ui::LabelProxy::bindProxy, ::titanium::ui::LabelProxy::dispose},
#line 234 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.AttributedStringProxy", ::titanium::ui::AttributedStringProxy::bindProxy, ::titanium::ui::AttributedStringProxy::dispose},
#line 330 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.analytics.AnalyticsModule", ::titanium::AnalyticsModule::bindProxy, ::titanium::AnalyticsModule::dispose},
      {""},
#line 287 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.AnimationProxy", ::titanium::ui::AnimationProxy::bindProxy, ::titanium::ui::AnimationProxy::dispose},
#line 213 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.app.AppModule", ::titanium::AppModule::bindProxy, ::titanium::AppModule::dispose},
      {""},
#line 218 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.ProcessingInstructionProxy", ::titanium::xml::ProcessingInstructionProxy::bindProxy, ::titanium::xml::ProcessingInstructionProxy::dispose},
#line 205 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.android.FloatingActionButtonProxy", ::titanium::ui::android::FloatingActionButtonProxy::bindProxy, ::titanium::ui::android::FloatingActionButtonProxy::dispose},
#line 324 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.codec.CodecModule", ::titanium::CodecModule::bindProxy, ::titanium::CodecModule::dispose},
      {""},
#line 305 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.activityindicatorstyle.ActivityIndicatorStyleModule", ::titanium::ui::ActivityIndicatorStyleModule::bindProxy, ::titanium::ui::ActivityIndicatorStyleModule::dispose},
#line 261 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.android.notificationmanager.NotificationProxy", ::titanium::android::NotificationProxy::bindProxy, ::titanium::android::NotificationProxy::dispose},
      {""},
#line 221 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.utils.UtilsModule", ::titanium::UtilsModule::bindProxy, ::titanium::UtilsModule::dispose},
#line 239 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.network.socket.TCPProxy", ::titanium::network::socket::TCPProxy::bindProxy, ::titanium::network::socket::TCPProxy::dispose},
#line 226 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.locale.LocaleModule", ::titanium::LocaleModule::bindProxy, ::titanium::LocaleModule::dispose},
      {""},
#line 318 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.MenuProxy", ::titanium::MenuProxy::bindProxy, ::titanium::MenuProxy::dispose},
#line 286 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.android.notificationmanager.NotificationChannelProxy", ::titanium::NotificationChannelProxy::bindProxy, ::titanium::NotificationChannelProxy::dispose},
#line 222 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.android.notificationmanager.NotificationManagerModule", ::titanium::android::NotificationManagerModule::bindProxy, ::titanium::android::NotificationManagerModule::dispose},
#line 203 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.NavigationWindowProxy", ::titanium::ui::NavigationWindowProxy::bindProxy, ::titanium::ui::NavigationWindowProxy::dispose},
#line 193 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.filesystem.FileProxy", ::titanium::filesystem::FileProxy::bindProxy, ::titanium::filesystem::FileProxy::dispose},
#line 259 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.widget.listview.RecyclerViewProxy", ::titanium::RecyclerViewProxy::bindProxy, ::titanium::RecyclerViewProxy::dispose},
#line 180 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.media.MediaModule", ::titanium::MediaModule::bindProxy, ::titanium::MediaModule::dispose},
#line 201 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.IntentProxy", ::titanium::IntentProxy::bindProxy, ::titanium::IntentProxy::dispose},
#line 266 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.EntityReferenceProxy", ::titanium::xml::EntityReferenceProxy::bindProxy, ::titanium::xml::EntityReferenceProxy::dispose},
      {""},
#line 217 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.TiDialogProxy", ::titanium::ui::TiDialogProxy::bindProxy, ::titanium::ui::TiDialogProxy::dispose},
#line 232 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.widget.listview.ListViewProxy", ::titanium::ui::ListViewProxy::bindProxy, ::titanium::ui::ListViewProxy::dispose},
#line 273 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.database.DatabaseModule", ::titanium::DatabaseModule::bindProxy, ::titanium::DatabaseModule::dispose},
#line 326 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.TableViewSectionProxy", ::titanium::ui::TableViewSectionProxy::bindProxy, ::titanium::ui::TableViewSectionProxy::dispose},
#line 283 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.ActivityProxy", ::titanium::ActivityProxy::bindProxy, ::titanium::ActivityProxy::dispose},
      {""},
#line 256 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.InstrumentationProxy", ::titanium::InstrumentationProxy::bindProxy, ::titanium::InstrumentationProxy::dispose},
      {""}, {""}, {""}, {""},
#line 301 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.TiBlob", ::titanium::TiBlob::bindProxy, ::titanium::TiBlob::dispose},
#line 182 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.NodeProxy", ::titanium::xml::NodeProxy::bindProxy, ::titanium::xml::NodeProxy::dispose},
#line 292 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.stream.BufferStreamProxy", ::titanium::stream::BufferStreamProxy::bindProxy, ::titanium::stream::BufferStreamProxy::dispose},
      {""}, {""},
#line 320 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.NotationProxy", ::titanium::xml::NotationProxy::bindProxy, ::titanium::xml::NotationProxy::dispose},
      {""},
#line 275 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.network.CookieProxy", ::titanium::network::CookieProxy::bindProxy, ::titanium::network::CookieProxy::dispose},
      {""}, {""},
#line 199 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.TableViewScrollPositionModule", ::titanium::ui::TableViewScrollPositionModule::bindProxy, ::titanium::ui::TableViewScrollPositionModule::dispose},
      {""},
#line 208 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.android.CardViewProxy", ::titanium::ui::android::CardViewProxy::bindProxy, ::titanium::ui::android::CardViewProxy::dispose},
      {""}, {""},
#line 188 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.media.AudioPlayerProxy", ::titanium::media::AudioPlayerProxy::bindProxy, ::titanium::media::AudioPlayerProxy::dispose},
      {""}, {""}, {""}, {""},
#line 258 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.ViewProxy", ::titanium::ui::ViewProxy::bindProxy, ::titanium::ui::ViewProxy::dispose},
#line 194 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.AttrProxy", ::titanium::xml::AttrProxy::bindProxy, ::titanium::xml::AttrProxy::dispose},
      {""},
#line 243 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.android.notificationmanager.BigTextStyleProxy", ::titanium::android::BigTextStyleProxy::bindProxy, ::titanium::android::BigTextStyleProxy::dispose},
      {""},
#line 294 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.network.socket.SocketModule", ::titanium::network::SocketModule::bindProxy, ::titanium::network::SocketModule::dispose},
#line 210 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.android.notificationmanager.BigPictureStyleProxy", ::titanium::android::BigPictureStyleProxy::bindProxy, ::titanium::android::BigPictureStyleProxy::dispose},
      {""},
#line 176 "generated/KrollGeneratedBindings.gperf"
      {"org.appcelerator.titanium.proxy.MenuItemProxy", ::titanium::MenuItemProxy::bindProxy, ::titanium::MenuItemProxy::dispose},
#line 282 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.DocumentTypeProxy", ::titanium::xml::DocumentTypeProxy::bindProxy, ::titanium::xml::DocumentTypeProxy::dispose},
#line 329 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.DocumentProxy", ::titanium::xml::DocumentProxy::bindProxy, ::titanium::xml::DocumentProxy::dispose},
      {""}, {""}, {""}, {""},
#line 291 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.filesystem.FilesystemModule", ::titanium::FilesystemModule::bindProxy, ::titanium::FilesystemModule::dispose},
      {""}, {""}, {""}, {""},
#line 250 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.android.quicksettings.QuickSettingsServiceProxy", ::titanium::QuickSettingsServiceProxy::bindProxy, ::titanium::QuickSettingsServiceProxy::dispose},
      {""}, {""}, {""}, {""},
#line 315 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.app.AndroidModule", ::titanium::app::AndroidModule::bindProxy, ::titanium::app::AndroidModule::dispose},
      {""}, {""}, {""}, {""},
#line 202 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.ShortcutModule", ::titanium::ui::ShortcutModule::bindProxy, ::titanium::ui::ShortcutModule::dispose},
      {""}, {""},
#line 267 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.ShortcutItemProxy", ::titanium::ui::ShortcutItemProxy::bindProxy, ::titanium::ui::ShortcutItemProxy::dispose},
      {""},
#line 189 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui._2DMatrixProxy", ::titanium::ui::_2DMatrixProxy::bindProxy, ::titanium::ui::_2DMatrixProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 190 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.geolocation.GeolocationModule", ::titanium::GeolocationModule::bindProxy, ::titanium::GeolocationModule::dispose},
      {""}, {""},
#line 312 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.widget.listview.ListItemProxy", ::titanium::ui::ListItemProxy::bindProxy, ::titanium::ui::ListItemProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 299 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.ActivityIndicatorProxy", ::titanium::ui::ActivityIndicatorProxy::bindProxy, ::titanium::ui::ActivityIndicatorProxy::dispose},
      {""}, {""}, {""}, {""},
#line 298 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.database.TiResultSetProxy", ::titanium::database::TiResultSetProxy::bindProxy, ::titanium::database::TiResultSetProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 280 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.ui.android.CollapseToolbarProxy", ::titanium::ui::android::CollapseToolbarProxy::bindProxy, ::titanium::ui::android::CollapseToolbarProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 313 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.database.TiDatabaseProxy", ::titanium::database::TiDatabaseProxy::bindProxy, ::titanium::database::TiDatabaseProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 332 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.media.AudioRecorderProxy", ::titanium::media::AudioRecorderProxy::bindProxy, ::titanium::media::AudioRecorderProxy::dispose},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 310 "generated/KrollGeneratedBindings.gperf"
      {"ti.modules.titanium.xml.DocumentFragmentProxy", ::titanium::xml::DocumentFragmentProxy::bindProxy, ::titanium::xml::DocumentFragmentProxy::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 337 "generated/KrollGeneratedBindings.gperf"

} // namespace bindings
} // namespace titanium
