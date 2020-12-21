#include <string>

#include "enums.h"
#include "gaming_preference.h"

std::string GamingPreference::get_recomendation() const noexcept{
    switch (GAMING_PREFERENCE){
        case GAMING_PREFERENCE_ENUM::GAMING_PREFERENCE_AAA:
            switch (GAMING_SETTINGS){
                case GAMING_SETTINGS_ENUM::GAMING_SETTINGS_LOW:
                    switch(IS_RTX){
                        case (true):
                            switch (FPS_AMOUNT){
                                case (FPS_AMOUNT_ENUM::FPS30):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on low settings with RTX on 30 FPS. Funny. "
                                            "Well, i think that a budget CPU 8-core and cheapest GPU with RTX support (ie RTX 2060) will fit your desires. "
                                            "Also, you may choose nonOC motherboard and 8Gb of RAM.";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on low settings with RTX on 30 FPS. Funny. "
                                            "Well, i think that budget CPU 8-core and second level GPU with RTX (ie RTX 2060 Super) will go nice and smooth."
                                            "Prefer nonOC motherboard and 8 gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on low settings with RTX on 30 FPS. Funny. "
                                            "Well, go with 12 or 8-core CPU and second level GPU with RTX (ie RTX 2060 Super)."
                                            "You shouldnt care about OC, so choose nonOC motherboard. 16 or 8 gigs of RAM will be nice.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on low settings with RTX on 30 FPS. Funny. "
                                            "Well, go with mid-level GPU like RTX 2070 and 12-core CPU."
                                            "Also, consider nonOC motherboard and 16 gigs of RAM";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS60):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on low settings with RTX on 60 FPS. Well. "
                                            "Well, i think that a budget CPU 8-core and second stage GPU like RTX 2060 Super will fit your desires. "
                                            "There is no reason in OC and more than 16 gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on low settings with RTX on 60 FPS. Well. "
                                            "Well, i think that 12-core CPU and mid level GPU with RTX (ie RTX 2070 Super) will go niceu with your desires. "
                                            "Consider nonOC motherboard and 16 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on low settings with RTX on 60 FPS. Well. "
                                            "12-core CPU and mid level GPU with RTX (ie RTX 2070 Super) will go niceu with your desires. "
                                            "I think that capability of overclocking will be useful. Go with 16 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on low settings with RTX on 60 FPS. Well. "
                                            "Ough boiiii, 12-core CPU is your choice. Also upper mid GPU like RTX 2080 will be nice. "
                                            "OC motherboard and 16 gigs of RAM. Good luck <3.";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS120):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on low settings with RTX on 120 FPS. Crazy. "
                                            "Okay, 12-core CPU. Also you may need upper mid GPU like RTX 2080. "
                                            "Consider OC and 16 or more gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on low settings with RTX on 120 FPS. Crazy. "
                                            "12-16-core CPU and nice GPU like RTX 2080 Super. "
                                            "You may need to overclock your components. 16 or more gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on low settings with RTX on 120 FPS. Crazy. "
                                            "You need hard weapon. Go 16-core CPU and something like RTX 3080. "
                                            "100% you will have to overclock your components. Go with 32 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on low settings with RTX on 120 FPS. Crazy. "
                                            "Nothing to say. 16-20-core CPU and high-end GPU. "
                                            "Overclocking is required. 32 or more gigs of RAM reqired.";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS240):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on low settings with RTX on 240 FPS. This person is out of his mind. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. Good luck, whatever";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on low settings with RTX on 240 FPS. This person is out of his mind. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. Good luck, whatever";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on low settings with RTX on 240 FPS. This person is out of his mind. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. Good luck, whatever";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on low settings with RTX on 240 FPS. This person is out of his mind. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. Good luck, whatever";
                                    }
                            }
                        case (false):
                            switch (FPS_AMOUNT){
                                case (FPS_AMOUNT_ENUM::FPS30):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on low settings with no RTX on 30 FPS. Begginer. "
                                            "Well, i think that a budget CPU 8-core and cheapest GPU support will fit your desires. Consider second hand old GPUs. "
                                            "Also, you may choose nonOC motherboard and 8Gb of RAM.";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on low settings with no RTX on 30 FPS. Begginer. "
                                            "Well, i think that budget CPU 8-core and second level GPU like GTX 1660ti will go nice and smooth."
                                            "Prefer nonOC motherboard and 16 gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on low settings with no RTX on 30 FPS. Begginer. "
                                            "Well, go with 12 or 8-core CPU and beggining level GPU with RTX (ie RTX 2060)."
                                            "You shouldnt care about OC, so choose nonOC motherboard. 16 gigs of RAM will be nice.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on low settings with no RTX on 30 FPS. Begginer. "
                                            "Well, go with mid-level GPU like RTX 2070 and 12-core CPU."
                                            "Also, consider nonOC motherboard and 16 gigs of RAM";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS60):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on low settings on 60 FPS. Nice choice. "
                                            "Well, i think that a budget CPU 8-core and second stage GPU like RX 5600XT will fit your desires. "
                                            "There is no reason in OC and more than 16 gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on low settings on 60 FPS. Nice choice. "
                                            "Well, i think that 12-core CPU and mid level GPU with RTX (ie RTX 2070 or RX 5700XT) will go niceu with your desires. "
                                            "Consider nonOC motherboard and 16 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on low settings on 60 FPS. Nice choice. "
                                            "12-core CPU and mid level GPU with RTX (ie RTX 2070 Super or RTX 2080) will go niceu with your desires. "
                                            "I think that capability of overclocking will be useful. Go with 16 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on low settings on 60 FPS. Nice choice. "
                                            "Ough boiiii, 12-core CPU is your choice. Also upper mid GPU like RTX 2080 Super will be nice. "
                                            "OC motherboard and 16 gigs of RAM. Good luck <3.";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS120):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on low settings on 120 FPS. For some reason. "
                                            "Okay, 12-16-core CPU. Also you may need upper mid GPU like RTX 2070 Super. "
                                            "Consider OC and 16 or more gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on low settings on 120 FPS. For some reason. "
                                            "12-16-core CPU and nice GPU like RTX 2080 Super. "
                                            "You may need to overclock your components. 32 or more gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on low settings on 120 FPS. For some reason. "
                                            "You need hard weapon. Go 16-core CPU and something like RTX 3080. "
                                            "100% you will have to overclock your components. Go with 32 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on low settings on 120 FPS. For some reason. "
                                            "Nothing to say. 20-core CPU and high-end GPU. "
                                            "Overclocking is required. 32 or more gigs of RAM is reqired.";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS240):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on low settings on 240 FPS. Crazy man. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090 in SLI-mode. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. I dont think that you could reach that level.";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on low settings on 240 FPS. Crazy man. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090 in SLI-mode. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. I dont think that you could reach that level.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on low settings on 240 FPS. Crazy man. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090 in SLI-mode. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. I dont think that you could reach that level.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on low settings on 240 FPS. Crazy man. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090 in SLI-mode. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. I dont think that you could reach that level.";
                                    }
                            }
                    }
                case GAMING_SETTINGS_ENUM::GAMING_SETTINGS_MEDIUM_HiGH:
                    switch(IS_RTX){
                        case (true):
                            switch (FPS_AMOUNT){
                                case (FPS_AMOUNT_ENUM::FPS30):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on medium-high settings with RTX on 30 FPS. Nice place to start. "
                                            "Well, i think that a budget CPU 8-core and second stage GPU with RTX support (ie RTX 2060 Super) will fit your desires. "
                                            "Also, you may choose nonOC motherboard and 16Gb of RAM.";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on medium-high settings with RTX on 30 FPS. Nice place to start. "
                                            "Well, i think that budget CPU 12-core and second level GPU with RTX (ie RTX 2070 Super) will go nice and smooth."
                                            "Prefer nonOC motherboard and 16 gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on medium-high settings with RTX on 30 FPS. Nice place to start. "
                                            "Well, go with 12 or 16-core CPU and high level GPU with RTX (ie RTX 2080 Super)."
                                            "You shouldnt care about OC, so choose nonOC motherboard. 16 or 8 gigs of RAM will be nice.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on medium-high settings with RTX on 30 FPS. Nice place to start. "
                                            "Well, go with mid-level GPU like RTX 3070 and 16-core CPU."
                                            "Also, consider OC motherboard and 16 gigs of RAM";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS60):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on medium-high settings with RTX on 60 FPS. Well. "
                                            "Well, i think that a budget CPU 12-core and GPU like RTX 2070 Super will fit your desires. "
                                            "There is no reason in OC and more than 16 gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on medium-high settings with RTX on 60 FPS. Well. "
                                            "Well, i think that 12-core CPU and high level GPU with RTX (ie RTX 2080 Super) will go niceu with your desires. "
                                            "Consider OC motherboard and 16 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on medium-high settings with RTX on 60 FPS. Well. "
                                            "16-core CPU and upper high level GPU with RTX (ie RTX 3070) will go niceu with your desires. "
                                            "I think that capability of overclocking will be useful. Go with 16 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on medium-high settings with RTX on 60 FPS. Well. "
                                            "Ough boiiii, 20-core CPU is your choice. Also super upper high GPU like RTX 3080 will be nice. "
                                            "OC motherboard and 32 gigs of RAM. Good luck <3.";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS120):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on medium-high settings with RTX on 120 FPS. Okaay. "
                                            "Okay, 16-core CPU. Also you may need nice GPU like RTX 2080 Ti or RTX 3080. "
                                            "Consider OC and 32 or more gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on medium-high settings with RTX on 120 FPS. Okaay. "
                                            "16-20-core CPU and nice GPU like RTX 3090. "
                                            "You may need to overclock your components. 32 or more gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on medium-high settings with RTX on 120 FPS. Okaay. "
                                            "16-20-core CPU and nice GPU like RTX 3090. "
                                            "You may need to overclock your components. 32 or more gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on medium-high settings with RTX on 120 FPS. Okaay. "
                                            "16-20-core CPU and nice GPU like RTX 3090. "
                                            "You may need to overclock your components. 32 or more gigs of RAM.";
                                    } // done
                                case (FPS_AMOUNT_ENUM::FPS240):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "Stop trying to preform impossible. You are trying to play on medium-high settings with RTX on 240 FPS. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090 in SLI mode. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. Good luck, whatever";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "Stop trying to preform impossible. You are trying to play on medium-high settings with RTX on 240 FPS. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090 in SLI mode. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. Good luck, whatever";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "Stop trying to preform impossible. You are trying to play on medium-high settings with RTX on 240 FPS. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090 in SLI mode. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. Good luck, whatever";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "Stop trying to preform impossible. You are trying to play on medium-high settings with RTX on 240 FPS. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090 in SLI mode. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. Good luck, whatever";
                                    }
                            }
                        case (false):
                            switch (FPS_AMOUNT){
                                case (FPS_AMOUNT_ENUM::FPS30):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on medium-high settings with no RTX on 30 FPS. Adorable. "
                                            "Well, i think that a budget CPU 8-core and consider GPUs like GTX 1650 Super. "
                                            "Also, you may choose nonOC motherboard and 16Gb of RAM.";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on medium-high settings with no RTX on 30 FPS. Adorable. "
                                            "Well, i think that budget CPU 12-core and a GPU like GTX 1660 Ti will go niceu."
                                            "Prefer nonOC motherboard and 16 gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on medium-high settings with no RTX on 30 FPS. Adorable. "
                                            "Well, go with 12-core CPU and second level GPU with RTX (ie RTX 2060 Super)."
                                            "You shouldnt care about OC, so choose nonOC motherboard. 16 gigs of RAM will be nice.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on medium-high settings with no RTX on 30 FPS. Adorable. "
                                            "Well, go with mid-level GPU like RTX 2070 and 12-core CPU."
                                            "Also, consider nonOC motherboard and 16 gigs of RAM";
                                    } // done
                                case (FPS_AMOUNT_ENUM::FPS60):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on medium-high settings on 60 FPS. Nice place to start. "
                                            "Well, i think that a budget CPU 12-core and second stage GPU like RX 5600XT will fit your desires. "
                                            "There is no reason in OC and more than 16 gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on medium-high settings on 60 FPS. Nice place to start. "
                                            "Well, i think that 12-core CPU and mid level GPU with RTX (ie RTX 2070 or RX 5700XT) will go niceu with your desires. "
                                            "Consider OC motherboard and 16 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on medium-high settings on 60 FPS. Nice place to start. "
                                            "12-core CPU and mid level GPU with RTX (ie RTX 2070 Super or RTX 2080) will go niceu with your desires. "
                                            "I think that capability of overclocking will be useful. Go with 16 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on medium-high settings on 60 FPS. Nice place to start. "
                                            "Ough boiiii, 16-core CPU is your choice. Also upper mid GPU like RTX 2080 Super will be nice. "
                                            "OC motherboard and 16 gigs of RAM. Good luck <3.";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS120):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on medium-high settings on 120 FPS. Dude... "
                                            "Okay, 16-core CPU. Also you may need upper mid GPU like RTX 2080 Super. "
                                            "Consider OC and 16 or more gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on medium-high settings on 120 FPS. Dude... "
                                            "16-core CPU and nice GPU like RTX 2080 Ti. "
                                            "You may need to overclock your components. 32 or more gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on medium-high settings on 120 FPS. Dude... "
                                            "You need hard weapon. Go 16-core CPU and something like RTX 3080. "
                                            "100% you will have to overclock your components. Go with 32 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on medium-high settings on 120 FPS. Dude... "
                                            "Nothing to say. 20-core CPU and high-end GPU like RTX 3090. "
                                            "Overclocking is required. 32 or more gigs of RAM is reqired.";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS240):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "Niceu! 240 FPS on medium-high settings. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090 in SLI-mode. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. I dont think that you could reach that level.";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "Niceu! 240 FPS on medium-high settings. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090 in SLI-mode. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. I dont think that you could reach that level.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "Niceu! 240 FPS on medium-high settings. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090 in SLI-mode. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. I dont think that you could reach that level.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "Niceu! 240 FPS on medium-high settings. "
                                            "Dude, 20-core bestingaming CPU and best of the best consumer GPU like RTX 3090 in SLI-mode. "
                                            "You have to overclock as hard as you can. 32, better 64, gigs of RAM. I dont think that you could reach that level.";
                                    }
                            }
                    }
                case GAMING_SETTINGS_ENUM::GAMING_SETTINGS_ULTRA:
                    switch(IS_RTX){
                        case (true):
                            switch (FPS_AMOUNT){
                                case (FPS_AMOUNT_ENUM::FPS30):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on ultra settings with RTX on 30 FPS. Okay. "
                                            "Well, 12-core CPU and GPU with RTX like RTX 2060 Super will fit your desires. "
                                            "Also, you may choose OC motherboard and 16Gb of RAM.";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on ultra settings with RTX on 30 FPS. Okay. "
                                            "Well, i think that budget CPU 12-core and high level GPU with RTX (ie RTX 2070 Super) will go nice and smooth."
                                            "OC motherboard and 16 gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on ultra settings with RTX on 30 FPS. Okay. "
                                            "Well, go with 12 or 16-core CPU and high level GPU with RTX (ie RTX 2080)."
                                            "Take care about OC, prefer light OC. 16 gigs of RAM will be nice.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on ultra settings with RTX on 30 FPS. Okay. "
                                            "Well, go with mid-level GPU like RTX 2080 Super and 16-core CPU."
                                            "Also, consider OC motherboard and 16 gigs of RAM.";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS60):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on ultra settings with RTX on 60 FPS. Nice choice! "
                                            "Well, i think that a budget CPU 12-core and GPU like RTX 2080 will fit your desires. "
                                            "There are some reason to OC and more than 16 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on ultra settings with RTX on 60 FPS. Nice choice! "
                                            "Well, i think that 12-core CPU and high level GPU with RTX (ie RTX 2080 Super) will go niceu with your desires. "
                                            "Consider OC motherboard and 16 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on ultra settings with RTX on 60 FPS. Nice choice! "
                                            "16-core CPU and upper high level GPU with RTX (ie RTX 3080) will go niceu with your desires. "
                                            "I think that capability of overclocking will be useful. Go with 32 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on ultra settings with RTX on 60 FPS. Nice choice! "
                                            "Ough boiiii, 20-core CPU is your choice. Also super upper high GPU like RTX 3080 will be nice. "
                                            "OC motherboard and 32 gigs of RAM. Good luck <3.";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS120):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on ultras settings with RTX on 120 FPS. This may cost something. "
                                            "Okay, 16-core CPU. You may need nice GPU like RTX 3080. "
                                            "Consider OC and 32 or more gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on ultras settings with RTX on 120 FPS. This may cost something. "
                                            "20-core CPU and nice GPU like RTX 3090. "
                                            "You may need to overclock your components. 32 or more gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on ultras settings with RTX on 120 FPS. This may cost something. "
                                            "20-core CPU and nice GPU like RTX 3090. "
                                            "You may need to overclock your components. 32 or more gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on ultras settings with RTX on 120 FPS. This may cost something. "
                                            "20-core CPU and nice GPU like RTX 3090. "
                                            "You may need to overclock your components. 32 or more gigs of RAM.";
                                    } // done
                                case (FPS_AMOUNT_ENUM::FPS240):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "Genuinely impossible. Even with 2 x RTX 3090 and 10900k @ 5.4GHz";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "Genuinely impossible. Even with 2 x RTX 3090 and 10900k @ 5.4GHz";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "Genuinely impossible. Even with 2 x RTX 3090 and 10900k @ 5.4GHz";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "Genuinely impossible. Even with 2 x RTX 3090 and 10900k @ 5.4GHz";
                                    }
                            }
                        case (false):
                            switch (FPS_AMOUNT){
                                case (FPS_AMOUNT_ENUM::FPS30):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on ultra settings with no RTX on 30 FPS. Consolelover. "
                                            "Well, go ahead with 12-core CPU and GTX 1660. "
                                            "NonOC motherboard and 16Gb of RAM. Good luck.";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on ultra settings with no RTX on 30 FPS. Consolelover. "
                                            "CPU 12-core and a GPU like RTX 2060 will go nice and smooth."
                                            "Prefer nonOC motherboard and 16 gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on ultra settings with no RTX on 30 FPS. Consolelover. "
                                            "Try out 12-core CPU and second level GPU with RTX (ie RTX 2060 Super)."
                                            "You shouldnt care about OC, so choose nonOC motherboard. 16 gigs of RAM will be nice.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on ultra settings with no RTX on 30 FPS. Consolelover. "
                                            "Well, go with mid-level GPU like RTX 2070 and 16-core CPU."
                                            "Probably, OC is a good choice. 16 Gb of RAM is quite enough";
                                    } // done
                                case (FPS_AMOUNT_ENUM::FPS60):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "So, you are trying to play on ultra settings on 60 FPS. Well, thats cool. "
                                            "Well, i think that a 12-core CPU and second stage GPU like RX 5700XT will fit your desires. "
                                            "There is no reason in OC and more than 16 gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "So, you are trying to play on ultra settings on 60 FPS. Well, thats cool. "
                                            "Try out 12-16-core CPU and GPU like RTX 2080. "
                                            "Capability of OC is required.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "So, you are trying to play on ultra settings on 60 FPS. Well, thats cool. "
                                            "16-core CPU and something like RTX 2080 Ti. "
                                            "I think that capability of overclocking will be useful. Go with 16 or 32 gigs of RAM.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "So, you are trying to play on ultra settings on 60 FPS. Well, thats cool. "
                                            "Let me see... 16-core CPU and a RTX 3070. Go for it. "
                                            "OC motherboard and 32 gigs of RAM. Good luck <3.";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS120):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "Well, you are trying to play on ultra settings on 120 FPS. There is something to offer... "
                                            "16-core CPU. Also you may need high-end GPU like RTX 3080. "
                                            "OC is required and 32 or more gigs of RAM";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "Well, you are trying to play on ultra settings on 120 FPS. There is something to offer... "
                                            "Required 20-core CPU and a GPU like RTX 3080. "
                                            "You should do OC to your system. 32 gigs of RAM I Think quite enough";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "Well, you are trying to play on ultra settings on 120 FPS. There is something to offer... "
                                            "No way. RTX 3090 and 20-core... "
                                            "Hard OC and 32 gigs of really nice RAM.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "Well, you are trying to play on ultra settings on 120 FPS. There is something to offer... "
                                            "No way. RTX 3090 and 20-core... "
                                            "Hard OC and 32 gigs of really nice RAM.";
                                    }
                                case (FPS_AMOUNT_ENUM::FPS240):
                                    switch (BUDGET){
                                        case(BUDGET_ENUM::BUDGET_LOW):
                                            return "The only choice is RTX 3090 x 2 and 20-core CPU with hard OC and nice RAM.";
                                        case(BUDGET_ENUM::BUDGET_MID):
                                            return "The only choice is RTX 3090 x 2 and 20-core CPU with hard OC and nice RAM.";
                                        case(BUDGET_ENUM::BUDGET_UPPER):
                                            return "The only choice is RTX 3090 x 2 and 20-core CPU with hard OC and nice RAM.";
                                        case(BUDGET_ENUM::BUDGET_HIGH):
                                            return "The only choice is RTX 3090 x 2 and 20-core CPU with hard OC and nice RAM.";
                                    }
                            }
                    }
            }
        case GAMING_PREFERENCE_ENUM::GAMING_PREFERENCE_CYBERSPORT:
            switch (GAMING_SETTINGS){
                case (GAMING_SETTINGS_ENUM::GAMING_SETTINGS_PUBG):
                    switch (FPS_AMOUNT){
                        case (FPS_AMOUNT_ENUM::FPS30):
                            switch (BUDGET){
                                case (BUDGET_ENUM::BUDGET_LOW):
                                    return "Plaing demanding games of 30 FPS? Well, lets see.. "
                                    "Start with 8-core CPU and beginning level GPU like GTX 1650 Super. "
                                    "You may need 8 gigs of RAM and cheapest suitable motherboard.";
                                case (BUDGET_ENUM::BUDGET_MID):
                                    return "Plaing demanding games of 30 FPS? Well, lets see.. "
                                    "Start with 8-core CPU and beginning level GPU like GTX 1650 Super. "
                                    "You may need 16 gigs of RAM and light OC motherboard.";
                                case (BUDGET_ENUM::BUDGET_UPPER):
                                    return "Plaing demanding games of 30 FPS? Well, lets see.. "
                                    "Start with 12-core CPU and GPU like GTX 1660. "
                                    "You may need 16 gigs of RAM and basic motherboard.";
                                case (BUDGET_ENUM::BUDGET_HIGH):
                                    return "Plaing demanding games of 30 FPS? Well, lets see.. "
                                    "Start with 12-core CPU and GPU like GTX 1660. "
                                    "You may need 16 gigs of RAM and do basic OC of RAM and CPU.";
                            }
                        case (FPS_AMOUNT_ENUM::FPS60):
                            switch (BUDGET){
                                case (BUDGET_ENUM::BUDGET_LOW):
                                    return "Going for demanding games on 60 FPS? Take at look at this. "
                                    "Start with 8-core CPU and GPU like GTX 1660 Ti. "
                                    "You may need 16 gigs of RAM and cheapest suitable motherboard.";
                                case (BUDGET_ENUM::BUDGET_MID):
                                    return "Going for demanding games on 60 FPS? Take at look at this. "
                                    "Start with 12-core CPU and GPU like GTX 1660 Ti. "
                                    "You may need 16 gigs of RAM and light OC motherboard.";
                                case (BUDGET_ENUM::BUDGET_UPPER):
                                    return "Going for demanding games on 60 FPS? Take at look at this. "
                                    "Start with 12-core CPU and beginning level GPU like RTX 2060. "
                                    "You may need 16 gigs of RAM and basic motherboard.";
                                case (BUDGET_ENUM::BUDGET_HIGH):
                                    return "Going for demanding games on 60 FPS? Take at look at this. "
                                    "Start with 12-core CPU and a nice GPU like RTX 2060. "
                                    "You may need 16 gigs of RAM and do basic OC of RAM and CPU.";
                            }
                        case (FPS_AMOUNT_ENUM::FPS120):
                            switch (BUDGET){
                                case (BUDGET_ENUM::BUDGET_LOW):
                                    return "Going for demanding games on 120 FPS? Going hard? "
                                    "Well, start with 12-core CPU and something like RTX 2060. "
                                    "You may need 16 gigs of RAM and cheapest suitable motherboard.";
                                case (BUDGET_ENUM::BUDGET_MID):
                                    return "Going for demanding games on 60 FPS? Going hard? "
                                    "Go with 12-core CPU and GPU like RTX 2060. "
                                    "16 gigs of RAM and a light OC.";
                                case (BUDGET_ENUM::BUDGET_UPPER):
                                    return "Going for demanding games on 60 FPS? Going hard? "
                                    "16-core CPU and beginning level GPU like RTX 2600. "
                                    "You may need 16 gigs of RAM and basic motherboard.";
                                case (BUDGET_ENUM::BUDGET_HIGH):
                                    return "Going for demanding games on 60 FPS? Going hard? "
                                    "One 16-core CPU and a one GPU like GTX 2600 Super will give you full expirience. "
                                    "You may need 16 gigs of RAM and do basic OC of RAM and CPU.";
                            }
                        case (FPS_AMOUNT_ENUM::FPS240):
                            switch (BUDGET){
                                case (BUDGET_ENUM::BUDGET_LOW):
                                    return "Demanding games on 240 FPS? Its about to get real? "
                                    "Go with 20-core CPU and something like RTX 3070. "
                                    "This may require 16 gigs of RAM and OC for stability.";
                                case (BUDGET_ENUM::BUDGET_MID):
                                    return "Demanding games on 240 FPS? Its about to get real? "
                                    "Go with 20-core CPU and something like RTX 3070. "
                                    "This may requiere 32 gigs of RAM and OC for stability.";
                                case (BUDGET_ENUM::BUDGET_UPPER):
                                    return "Demanding games on 240 FPS? Its about to get real? "
                                    "Go with 20-core CPU and something like RTX 3070 or maybe RTX 3080. "
                                    "This may requiere 32 gigs of RAM and OC for stability.";
                                case (BUDGET_ENUM::BUDGET_HIGH):
                                    return "Demanding games on 240 FPS? Its about to get real? "
                                    "Go with 20-core CPU and something like RTX 3080. "
                                    "This may requiere 32 gigs of RAM and hard OC for stability.";
                            }
                    }
                case (GAMING_SETTINGS_ENUM::GAMING_SETTINGS_CYBERSPORT_OTHERS):
                    switch (FPS_AMOUNT){
                        case (FPS_AMOUNT_ENUM::FPS30):
                            switch (BUDGET){
                                case (BUDGET_ENUM::BUDGET_LOW):
                                    return "Light games on 30 FPS? Poor boi, lets see.. "
                                    "Go for 4-core CPU and cheapest GPU like GTX 1050 Ti. "
                                    "6 gigs of ram and cheapest motherboard.";
                                case (BUDGET_ENUM::BUDGET_MID):
                                    return "Light games on 30 FPS? Poor boi, lets see.. "
                                    "Go for 4-8-core CPU and nice but cheap RX 470. "
                                    "6 gigs of ram and cheapest motherboard.";
                                case (BUDGET_ENUM::BUDGET_UPPER):
                                    return "Light games on 30 FPS? Poor boi, lets see.. "
                                    "Go for 4-8-core CPU and nice but cheap RX 470. "
                                    "You may need 8 gigs of RAM and basic cheapest motherboard.";
                                case (BUDGET_ENUM::BUDGET_HIGH):
                                    return "Light games on 30 FPS? Poor boi, lets see.. "
                                    "Start with 8-core CPU and GPU like RX 570 or RX 580. "
                                    "You may need 8 gigs of RAM and do basic OC of RAM and CPU.";
                            }
                        case (FPS_AMOUNT_ENUM::FPS60):
                            switch (BUDGET){
                                case (BUDGET_ENUM::BUDGET_LOW):
                                    return "Wanna play light games in 60 FPS? Thats balanced. "
                                    "Start with 8-core CPU. Prefer GPU like RX 484. "
                                    "You may need 8 gigs of RAM and cheapest suitable motherboard.";
                                case (BUDGET_ENUM::BUDGET_MID):
                                    return "Wanna play light games in 60 FPS? Thats balanced. "
                                    "Start with 8-core CPU and GPU like GTX 1066 or RX 488. "
                                    "You may need 8 gigs of RAM and cheapest suitable motherboard.";
                                case (BUDGET_ENUM::BUDGET_UPPER):
                                    return "Wanna play light games in 60 FPS? Thats balanced. "
                                    "8-core CPU goes nice. Find yourself a nice RX 588. "
                                    "8 gigs is on edge, so notice. Cheapest motherboard.";
                                case (BUDGET_ENUM::BUDGET_HIGH):
                                    return "Wanna play light games in 60 FPS? Thats balanced. "
                                    "Go with 12-core CPU and a nice RX 588. "
                                    "16 gigs of RAM. Basic motherboard.";
                            }
                        case (FPS_AMOUNT_ENUM::FPS120):
                            switch (BUDGET){
                                case (BUDGET_ENUM::BUDGET_LOW):
                                    return "Ough light games on 120 fps? That`s nice. "
                                    "12-core CPU and a GTX 1650 Super. "
                                    "16 Gb of RAM will deal with it. Basic suitable motherboard.";
                                case (BUDGET_ENUM::BUDGET_MID):
                                    return "Ough light games on 120 fps? That`s nice. "
                                    "Sutable CPU is 12-core something. GTX 1650 Super or even GTX 1660. "
                                    "16 gigs of RAM and a base motherboard.";
                                case (BUDGET_ENUM::BUDGET_UPPER):
                                    return "Ough light games on 120 fps? That`s nice. "
                                    "12-core CPU and GTX 1660. "
                                    "Try 16 gigs of RAM and motherboard with light OC.";
                                case (BUDGET_ENUM::BUDGET_HIGH):
                                    return "Ough light games on 120 fps? That`s nice. "
                                    "Try out 12-core CPU with nice GTX 1660 or RTX 2060. "
                                    "Check out 16 Gb kits and motherboard providing OC functional.";
                            }
                        case (FPS_AMOUNT_ENUM::FPS240):
                            switch (BUDGET){
                                case (BUDGET_ENUM::BUDGET_LOW):
                                    return "Dafran is here lol? Light games on 240 FPS. "
                                    "Only 20-core CPU and something like RTX 2070 Super. "
                                    "This may require 32 gigs of RAM and OC for stability.";
                                case (BUDGET_ENUM::BUDGET_MID):
                                    return "Dafran is here lol? Light games on 240 FPS. "
                                    "20-core CPU and GPU like 2070 Super. "
                                    "32 gigs and motherboard with OC.";
                                case (BUDGET_ENUM::BUDGET_UPPER):
                                    return "Dafran is here lol? Light games on 240 FPS. "
                                    "20-core CPU and GPU like 2070 Super, maybe 2080. "
                                    "It tooks 32 gigs of RAM and nice motherboard.";
                                case (BUDGET_ENUM::BUDGET_HIGH):
                                    return "Dafran is here lol? Light games on 240 FPS. "
                                    "RTX 2080 Super and 20-core CPU. "
                                    "No excess. 32Gb kit and powerful motherboard";
                            }
                    }
            }
    }
}