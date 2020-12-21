#include <string>
#include <iostream>

#include "preferences/enums.h"
#include "preferences/ipreference.h"
#include "preferences/gaming_preference.h"

#include "utils.h"
#include "preferences.h"

#include "work_interact.h"

using std::cout;
using std::endl;

void go_work_interact(Prefences& prefs){
    system("clear");
    cout << "Niceu! Tell us about jobs you are going to perform!" << endl;
    char answer = get_answer("1) Videoedit\n2) Programming\n3) AI");
    if (answer == '1'){
        prefs.work_prefs->WORK_TYPE = WORK_TYPE_ENUM::VIDEO;
        do_work_video_interact(prefs);
    } else if (answer == '2'){
        prefs.work_prefs->WORK_TYPE = WORK_TYPE_ENUM::PROGRAMMING;
        do_work_programming_interact(prefs);
    }
    else if (answer == '3'){
        prefs.work_prefs->WORK_TYPE = WORK_TYPE_ENUM::AI;
        go_work_budget_calculate_interact(prefs);
    }
}

void do_work_video_interact(Prefences& prefs){
    cout << "We need to know if you are using CPU or GPU-depending programs" << endl;
    char answer = get_answer("1) I use CPU-depending programs.\n2) I use GPU-depending programs.");
    if (answer == '1'){
        prefs.work_prefs->VIDEOEDIT_DEPENDING = VIDEOEDIT_DEPENDING_ENUM::CPU_DEPENDING;
    } else if (answer == '2'){
        prefs.work_prefs->VIDEOEDIT_DEPENDING = VIDEOEDIT_DEPENDING_ENUM::GPU_DEPENDING;
    }
    go_work_budget_calculate_interact(prefs);
}

void do_work_programming_interact(Prefences& prefs){
    cout << "What kind of software you are making?" << endl;
    char answer = get_answer("1) Servers.\n2) Games.\n3) Software.");
    if (answer == '1'){
        prefs.work_prefs->PROGRAMMING_GOALS = PROGRAMMING_GOALS_ENUM::SERVERS;
        cout << prefs.work_prefs->get_recomendation();
    } else if (answer == '2'){
        prefs.work_prefs->PROGRAMMING_GOALS = PROGRAMMING_GOALS_ENUM::GAMES;
        cout << prefs.work_prefs->get_recomendation();
    } else if (answer == '3'){
        prefs.work_prefs->PROGRAMMING_GOALS = PROGRAMMING_GOALS_ENUM::SOFTWARE;
        do_work_programming_platform_interact(prefs);
    }
}

void do_work_programming_platform_interact(Prefences& prefs){
    cout << "So, you must be developing really nice software! Maybe there is a specific platform?" << endl;
    char answer = get_answer("1) Apple platforms.\n2) Desktop.\n3) Mobile.");
    if (answer == '1'){
        prefs.work_prefs->SOFTWARE_PLATFORM = SOFTWARE_PLATFORM_ENUM::APPLE_PLATFORM;
    } else if (answer == '2'){
        prefs.work_prefs->SOFTWARE_PLATFORM = SOFTWARE_PLATFORM_ENUM::DESKTOP_PLATFORM;
    } else if (answer == '3'){
        prefs.work_prefs->SOFTWARE_PLATFORM = SOFTWARE_PLATFORM_ENUM::MOBILE_PLATFORM;
    }
    cout << prefs.work_prefs->get_recomendation();
}

void go_work_budget_calculate_interact(Prefences& prefs){
    cout << "Are you on budget?" << endl;
    char answer = get_answer("1) Low budget. Beginning level of your task. "
                             "Nice place to start.\n"
                             "2) High budget. Complete workstations.");
    if (answer == '1') {
        prefs.work_prefs->BUDGET = BUDGET_ENUM::BUDGET_LOW;
    }
    else if (answer == '2') {
        prefs.work_prefs->BUDGET = BUDGET_ENUM::BUDGET_HIGH;
    }
    cout << prefs.work_prefs->get_recomendation();
}