#include <string>
#include <iostream>

#include "preferences/ipreference.h"
#include "preferences/gaming_preference.h"
#include "preferences/work_preference.h"

#include "config.h"
#include "utils.h"
#include "preferences.h"

#include "gaming_interact.h"
#include "work_interact.h"

#include "interact.h"

using std::cout;
using std::endl;


void go_interract(Prefences& prefs){
    char answer;
    cout << "This is the program that allows you to get recomedtations "
            "about you PC configurations. There are no current computer components, just "
            "base recomendadions. You can choose components according to their aviability "
            "in stores and second hand markets." << endl;
    cout << endl << "LETS GET STARTED!" << endl;
    answer = get_answer("What is the main purpose of your PC?\nGaming(g).\nWork(w).");

    if (answer == 'g'){
        prefs.gaming_prefs = new GamingPreference();
        prefs.work_prefs = nullptr;
        go_gaming_interact(prefs);
    } else if (answer == 'w'){
        prefs.gaming_prefs = nullptr;
        prefs.work_prefs = new WorkPreference();
        go_work_interact(prefs);
    }
}