#ifndef PREFERENCES_WORK
#define PREFERENCES_WORK

#include <string>

#include "ipreference.h"
#include "enums.h"

struct WorkPreference : public IPreference {
    WORK_TYPE_ENUM WORK_TYPE;
    PROGRAMMING_GOALS_ENUM PROGRAMMING_GOALS;
    VIDEOEDIT_DEPENDING_ENUM VIDEOEDIT_DEPENDING;
    SOFTWARE_PLATFORM_ENUM SOFTWARE_PLATFORM;

    std::string get_recomendation() const noexcept override; 
};

#endif // PREFERENCES_WORK