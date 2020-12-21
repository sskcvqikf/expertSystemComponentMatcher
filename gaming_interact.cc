#include <string>
#include <iostream>

#include "preferences/enums.h"
#include "preferences/ipreference.h"
#include "preferences/gaming_preference.h"

#include "utils.h"
#include "preferences.h"

#include "gaming_interact.h"

using std::cout;
using std::endl;

void go_gaming_interact(Prefences& prefs){
    system("clear");
    
    cout << "Fine! We will try to give you best recomendations for your best expirience!" << endl;
    char answer = get_answer("What are you planning to play?\nAAA projects(a).\nCompetitive games(c).");
    if (answer == 'c'){
        prefs.gaming_prefs->GAMING_PREFERENCE = GAMING_PREFERENCE_ENUM::GAMING_PREFERENCE_CYBERSPORT;
        go_gaming_cybersport_interact(prefs);
    }
    else if (answer == 'a'){
        prefs.gaming_prefs->GAMING_PREFERENCE = GAMING_PREFERENCE_ENUM::GAMING_PREFERENCE_AAA;
        go_gaming_aaa_interact(prefs);
    }
    else {
        go_gaming_interact(prefs);
    }
}

void go_gaming_aaa_interact(Prefences& prefs){
    cout << "We want you to answer about system setting you are suppose play on. Note: this will "
            "not affect the future projects perfomance." << endl;
    char answer = get_answer("1) Low\n2) Medium-high\n3) Ultras");
    if (answer == '1'){
        prefs.gaming_prefs->GAMING_SETTINGS = GAMING_SETTINGS_ENUM::GAMING_SETTINGS_LOW;
        go_gaming_fps_interact(prefs);
    }
    else if (answer == '2'){
        prefs.gaming_prefs->GAMING_SETTINGS = GAMING_SETTINGS_ENUM::GAMING_SETTINGS_MEDIUM_HiGH;
        go_gaming_fps_interact(prefs);
    }
    else if (answer == '3'){
        prefs.gaming_prefs->GAMING_SETTINGS = GAMING_SETTINGS_ENUM::GAMING_SETTINGS_ULTRA;
        go_gaming_aaa_ultras_interact(prefs);
    }
    else {
        go_gaming_aaa_interact(prefs);
    }
}

void go_gaming_aaa_ultras_interact(Prefences& prefs){
    cout << "Sooooo... Maybe you want to play with RTX?"
            "Note: RTX may cause "
            "lower perfomance in most games, so "
            "you need to use the most powerful GPU "
            "that exists now and  it may "
            "become irrelevant in 1-2 years, so you "
            "couldnt play incoming projects on ultra settings with RTX "
            "or you may endure console FPS." << endl;
    char answer = get_answer("1) Yes, I want RTX. I accept all pitfalls.\n"
                             "2) No, I dont want RTX.");
    if (answer == '1'){
        prefs.gaming_prefs->IS_RTX = true;
        go_gaming_fps_interact(prefs);
    }
    else if (answer == '2'){
        prefs.gaming_prefs->IS_RTX = false;
        go_gaming_fps_interact(prefs);
    }
    else {
        go_gaming_aaa_ultras_interact(prefs);
    }
}

void go_gaming_cybersport_interact(Prefences& prefs){
    cout << "Tell us about games you are going to play." << endl;
    char answer = get_answer("1) PUBG, Quake Champions, Mortal Combat 11"
            "This games require powerful GPU for comfortable"
            "gaming, so basically they need more powerful PC.\n"
            "2) Other entire industry of cybersport games"
            "Litterally, you can run this games on noodlebox"
            "full of chiken.\n");
    if (answer == '1'){
        prefs.gaming_prefs->GAMING_SETTINGS = GAMING_SETTINGS_ENUM::GAMING_SETTINGS_PUBG;
        go_gaming_fps_interact(prefs);
    }
    else if (answer == '2'){
        prefs.gaming_prefs->GAMING_SETTINGS = GAMING_SETTINGS_ENUM::GAMING_SETTINGS_CYBERSPORT_OTHERS;
        go_gaming_fps_interact(prefs);
    }
    else {
        go_gaming_cybersport_interact(prefs);
    }
    
}

void go_gaming_fps_interact(Prefences& prefs){
    cout << "How much fps do you want?" << endl;
    char answer = get_answer("1) I want xbox/ps expirience. 30 FPS will be enough.\n"
                             "2) 60 FPS is quite enough.\n"
                             "3) 120 FPS. NOTE: this amount of fps required in comp games. "
                             "For singleplayer and chill games it can be 'too much'.\n"
                             "4) 240 FPS. I AM DAFRAN GIMME MAXIMUM.\n");
    if (answer == '1'){
        prefs.gaming_prefs->FPS_AMOUNT = FPS_AMOUNT_ENUM::FPS30;
        go_gaming_budget_calculate_interact(prefs);
    }
    else if (answer == '2'){
        prefs.gaming_prefs->FPS_AMOUNT = FPS_AMOUNT_ENUM::FPS60;
        go_gaming_budget_calculate_interact(prefs);
    }
    else if (answer == '3'){
        prefs.gaming_prefs->FPS_AMOUNT = FPS_AMOUNT_ENUM::FPS120;
        go_gaming_budget_calculate_interact(prefs);
    }
    else if (answer == '4'){
        prefs.gaming_prefs->FPS_AMOUNT = FPS_AMOUNT_ENUM::FPS240;
        go_gaming_budget_calculate_interact(prefs);
    }
    else{
        go_gaming_fps_interact(prefs);
    }
}

void go_gaming_budget_calculate_interact(Prefences& prefs){
    cout << "Tell us about your budget." << endl;
    char answer = get_answer("1) Low budget. According to your FPS and graphic "
                             "preferences this will allow you to play in this "
                             "games only in this perfomance level. No higher "
                             "settings and more fps. Future projects may "
                             "run worse.\n"
                             "2) Middle budget. According to your FPS and graphic "
                             "preferences this will allow you to play in this "
                             "games, maybe with little higher fps. "
                             "Also this will give you some extra perfomance "
                             "that could run future projects on same settings "
                             "for approx. 1 year depending on project.\n"
                             "3) Upper budget. According to your FPS and graphic "
                             "preferences this will allow you to play in this "
                             "games with noticeable higher fps. "
                             "Nice extra perfomance for future projects for "
                             "future projects for 1 - 2 years depending on project.\n"
                             "4) High budget. According to your FPS and graphic "
                             "preferences this will allow you to play in this "
                             "games with litterally unlimited fps. "
                             "Future projects may run on desired FPS and settings "
                             "for 1 - 4 years.\n"
                       );
    if (answer == '1') {
        prefs.gaming_prefs->BUDGET = BUDGET_ENUM::BUDGET_LOW;
        finalize_gaming_interact(prefs);
    }
    else if (answer == '2') {
        prefs.gaming_prefs->BUDGET = BUDGET_ENUM::BUDGET_MID;
        finalize_gaming_interact(prefs);
    }
    else if (answer == '3') {
        prefs.gaming_prefs->BUDGET = BUDGET_ENUM::BUDGET_UPPER;
        finalize_gaming_interact(prefs);
    }
    else if (answer == '4') {
        prefs.gaming_prefs->BUDGET = BUDGET_ENUM::BUDGET_HIGH;
        finalize_gaming_interact(prefs);
    }
    else {
        go_gaming_budget_calculate_interact(prefs);
    }
    
}

void finalize_gaming_interact(Prefences& prefs){
    cout << prefs.gaming_prefs->get_recomendation();
}
