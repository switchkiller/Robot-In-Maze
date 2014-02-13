// Config.cpp
//

#include "Config.h"
#define LZZ_INLINE inline
int const Config::MAX_SPEED_ANALOG;
int const Config::DESIGNED_MAX_SPEED;
int const Config::WHEEL_DIAMETER;
int const Config::COUNTS_PER_REVOLUTION;
double const Config::DISTANCE_PER_TICK_CM = (PI*WHEEL_DIAMETER)/COUNTS_PER_REVOLUTION;
int const Config::SAMPLE_TIME;
double const Config::WHEELS_INTERVAL = 17.10;
double Config::MAX_SPEED = 300;
double Config::TARGET_SPEED = 200;
double Config::MIN_SPEED = 100;
double Config::PID_UPPER_LIMIT = COUNTS_PER_REVOLUTION*6*(double(MAX_SPEED)/DESIGNED_MAX_SPEED);
double Config::PID_LOWER_LIMIT = PID_UPPER_LIMIT*(double(MIN_SPEED)/DESIGNED_MAX_SPEED);
double Config::PID_SETPOINT = PID_UPPER_LIMIT*(double(TARGET_SPEED)/DESIGNED_MAX_SPEED);
#undef LZZ_INLINE
