#ifndef UTILS_H
#define UTILS_H

#include <sys/resource.h>
#include <time.h>

long get_hrtime();
long get_cputime(int who);

#endif

#ifdef __APPLE__
    #ifndef RUSAGE_THREAD
        #define RUSAGE_THREAD 1
    #endif
#endif
