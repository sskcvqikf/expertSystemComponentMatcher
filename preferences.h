#ifndef PREFERENCES
#define PREFERENCES
#include <string>

#include "preferences/gaming_preference.h"
#include "preferences/work_preference.h"

struct Prefences{
    std::string PURPOSE;
    GamingPreference* gaming_prefs;
    WorkPreference* work_prefs;
};

#endif // PREFERENCES