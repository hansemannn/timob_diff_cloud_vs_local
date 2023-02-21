/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -L C++ -E -t src/native/KrollNativeBindings.gperf  */
/* Computed positions: -k'' */

#line 4 "src/native/KrollNativeBindings.gperf"

#include "modules/ScriptsModule.h"
#include "modules/AssetsModule.h"
#include "modules/APIModule.h"

namespace titanium {
	namespace bindings {
#line 12 "src/native/KrollNativeBindings.gperf"
struct BindEntry;
/* maximum key range = 6, duplicates = 0 */

class native
{
private:
  static inline unsigned int getBindingHash (const char *str, size_t len);
public:
  static struct BindEntry *lookupBindingInit (const char *str, size_t len);
};

inline /*ARGSUSED*/
unsigned int
native::getBindingHash (const char *str, size_t len)
{
  return len;
}

struct BindEntry *
native::lookupBindingInit (const char *str, size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 5,
      MIN_WORD_LENGTH = 3,
      MAX_WORD_LENGTH = 8,
      MIN_HASH_VALUE = 3,
      MAX_HASH_VALUE = 8
    };

  static struct BindEntry wordlist[] =
    {
      {""}, {""}, {""},
#line 17 "src/native/KrollNativeBindings.gperf"
      {"API", APIModule::Initialize, APIModule::Dispose},
      {""},
#line 15 "src/native/KrollNativeBindings.gperf"
      {"evals", ScriptsModule::Initialize, ScriptsModule::Dispose},
#line 16 "src/native/KrollNativeBindings.gperf"
      {"assets", AssetsModule::Initialize, NULL},
#line 14 "src/native/KrollNativeBindings.gperf"
      {"natives", KrollBindings::initNatives, NULL},
#line 18 "src/native/KrollNativeBindings.gperf"
      {"Titanium", KrollBindings::initTitanium, KrollBindings::disposeTitanium}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = getBindingHash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 19 "src/native/KrollNativeBindings.gperf"

	} // namespace bindings
} // namespace titanium
