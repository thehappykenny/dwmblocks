//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
        /*Icon*/    /*Command*/     /*Update Interval*/     /*Update Signal*/
        //{"",    "dwmMusic",          0,      1},
        {"",    "dwmNet",            1,      2},
        //{"",    "dwmMailbox",       60,      3},
        {"",    "dwmDisk",          60,      4},
        {"",    "dwmClock",         60,      5},
        //{"",    "dwmWeather",     3600,      6},
        {"",    "dwmVol",            0,      7},
        {"",    "dwmBattery",       60,      8},
        {"",    "dwmUpdate",         0,      9},
        {"",    "dwmMoon",        3600,     10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
