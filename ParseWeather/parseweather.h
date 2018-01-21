#include <CJson/cJSON.h>
#include "printweather.h"
#include "CJson/cJSON.h"
#include <stdlib.h>
#include <stdio.h>

#include <string.h>
#include "tool.h"


#define TAB_LENGTH 26

void show_update_info(cJSON *update_time, int loc);

void show_basic_info(cJSON *basic, int full);


void show_weather(cJSON *data, int show_basic, int show_forecast, int show_now,
                  int show_hourly, int show_lifestyle, int show_time);