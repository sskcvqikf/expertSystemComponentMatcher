#include <string>

#include "enums.h"
#include "work_preference.h"

std::string WorkPreference::get_recomendation() const noexcept{
    switch (WORK_TYPE){
        case (WORK_TYPE_ENUM::VIDEO):
            switch (VIDEOEDIT_DEPENDING){
                case (VIDEOEDIT_DEPENDING_ENUM::CPU_DEPENDING):
                    switch (BUDGET){
                        case (BUDGET_ENUM::BUDGET_LOW):
                            return "Well, beginning level of videoediting. You can go far, i will help you... "
                            "You really need a nice CPU. Consider 12-core CPU, the cores are important. Take a cheap GPU. If you dont really going. "
                            "to play or use use GPU, then GTX 1030 may be enough. Consider GTX 1650 Super as GPU that wont let you worry about. "
                            "Also you will need 16 gigs of RAM in dual channel. May consider overclocking functionality. Tip: consider used Xeon`s from Aliexpress. "
                            "They support 4-channel RAM and they are really cheap. ";
                        case (BUDGET_ENUM::BUDGET_HIGH):
                            return "Maybe, you are a master of your job. You really need as much cores as you can afford. "
                            "24-32-core CPUS may match your desires. Take care about GPU. Get something like RTX 2060 Super, you need nice mid-range GPU. "
                            "32 or 64 gigs of RAM and dual channel mode. Overclocking is not neccesary.";
                    }
                case (VIDEOEDIT_DEPENDING_ENUM::GPU_DEPENDING):
                    switch (BUDGET){
                        case (BUDGET_ENUM::BUDGET_LOW):
                            return "You are really on your niche. CPU is not important. Go with 6-8-core one. "
                            "But you should take care about GPU. RT-cores may speed up your render tasks. RTX 2060 as cheapest RTX card will fit your desires. "
                            "16 gigs of RAM in dual channel and cheap motherboard.";
                        case (BUDGET_ENUM::BUDGET_HIGH):
                            return "Are you a god of da Vinci Resolve. Well... RTX 3080 is nice GPU actually. Much RT and CUDA cores will help you. "
                            "16-core CPU is enough for this. 16-32 gigs of RAM and overclocking.";
                    }
            }
        case (WORK_TYPE_ENUM::PROGRAMMING):
            switch (PROGRAMMING_GOALS){
                case (PROGRAMMING_GOALS_ENUM::SOFTWARE):
                    switch (SOFTWARE_PLATFORM){
                        case (SOFTWARE_PLATFORM_ENUM::APPLE_PLATFORM):
                            return "Consider apple laptops and desktops. They may be more usable for your tasks. I dont really know their "
                            "products, so it up to you. Sorry.";
                        case (SOFTWARE_PLATFORM_ENUM::DESKTOP_PLATFORM):
                            return "Well, stational high perfomance PC is appreciable. Better go with multithread CPU. As much threads as you "
                            "can afford. Powerful GPU is not really required. But what actually you want is much of RAM. 16 Gb i would say, is minimum.";
                        case (SOFTWARE_PLATFORM_ENUM::MOBILE_PLATFORM):
                            return "Maybe local PC is to much for you. Consider bying a laptop. Dont take junkie pentium noodlebox. "
                            "I would recommend something with Ryzen 5 *500U or Ryzen 7 *700U and 12-16 gigs of RAM. Emulators could take some memory.";
                        
                    }
                case (PROGRAMMING_GOALS_ENUM::SERVERS):
                    return "You really should think about laptop with at least 16 gigs of RAM. Local PC may be useful, but i think "
                    "thats this is too much. You could be able to take laptop phisically to server, so it may be useful.";
                case (PROGRAMMING_GOALS_ENUM::GAMES):
                    return "You need a nice local machine. Powerful CPU and GPU and at least 16 gigs of RAM. RTX videocard may be useful. "
                    "You will have to compile and run really hard tasks, so high perfomance level is required.";
            }
        case (WORK_TYPE_ENUM::AI):
            switch(BUDGET){
                case (BUDGET_ENUM::BUDGET_LOW):
                    return "100% you need CUDA-cores. CUDA version is required at least 3.5. GTX 750 Ti may be treaky, but it must work. "
                    "If you want to start I would recomend GTX 960 or GTX 1050 4Gb (Ti). CPU is doesnt really matter, go with even 4-core. "
                    "Also, 8 gigs of RAM may enough.";
                case (BUDGET_ENUM::BUDGET_HIGH):
                    return "CUDA and RT cores may be useful. So, you should start with something like RTX 2060. I would recomend waiting for RTX 3070 aviability. "
                    "Go with 12-16-core CPU and 32 gigs of RAM.";
            }
    }

}