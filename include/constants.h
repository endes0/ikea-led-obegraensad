#pragma once

#define PIN_ENABLE 26
#define PIN_DATA 27
#define PIN_CLOCK 14
#define PIN_LATCH 12
#define PIN_BUTTON 16

// disable if you do not want to have online functionality
#define ENABLE_SERVER

// disable if you do not want to use the internal storage
#define ENABLE_STORAGE

#ifdef ENABLE_SERVER
#define NTP_SERVER "es.pool.ntp.org"
#define TZ_INFO "WET0WEST,M3.5.0/1,M10.5.0"
#endif

#define COLS 16
#define ROWS 16
