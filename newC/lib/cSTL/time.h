#ifndef _NEWC_TIME_H__
#  define _NEWC_TIME_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <time.h>

struct Make_Time {
    // http://www.runoob.com/cprogramming/c-standard-library-time-h.html
    char * (*asctime)(const struct tm *timeptr); //
    clock_t (*clock)(void); //
    char * (*ctime)(const time_t *timer); //
    double (*diff)(time_t time1, time_t time2); //
    struct tm * (*gmtime)(const time_t *timer); //
    struct tm * (*localtime)(const time_t *timer); //
    time_t (*mktime)(struct tm *timeptr); //
    size_t (*strftime)(char *str, size_t maxsize, const char *format, const struct tm *timeptr); //
    time_t (*time)(time_t *timer); //
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _NEWC_TIME_H__ */
