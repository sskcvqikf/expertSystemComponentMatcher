#include <string>
#include <iostream>

#include "preferences/ipreference.h"
#include "preferences/gaming_preference.h"
#include "preferences/work_preference.h"


#include "preferences.h"
#include "interact.h"

int main(){
    system("clear");
    Prefences prefs;

    go_interract(prefs);

    return 0;
}