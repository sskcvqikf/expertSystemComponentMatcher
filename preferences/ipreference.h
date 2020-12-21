#ifndef PREFERENCES_IPREFERENCE
#define PREFERENCES_IPREFERENCE

#include <string>

#include "enums.h"

struct IPreference{
    BUDGET_ENUM BUDGET;
    std::string RECOMENDATIONS;

    virtual std::string get_recomendation() const noexcept = 0;
};
#endif // PREFERENCES_IPREFERENCE