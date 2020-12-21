#ifndef PREFERENCES_GAMING
#define PREFERENCES_GAMING

#include <string>

#include "ipreference.h"
#include "enums.h"

struct GamingPreference : public IPreference {
    bool IS_RTX;
    FPS_AMOUNT_ENUM FPS_AMOUNT;
    GAMING_SETTINGS_ENUM GAMING_SETTINGS;
    GAMING_PREFERENCE_ENUM GAMING_PREFERENCE;

    std::string get_recomendation() const noexcept override;
};

#endif // PREFERENCES_GAMING

