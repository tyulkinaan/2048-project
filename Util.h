//
// Created by anastasia on 08.05.17.
//

#ifndef _UTIL_H_
#define _UTIL_H_

#include <iostream>
#include "cocos2d.h"
USING_NS_CC;
class Util
{
public:
    float random_0_1()
    {
        struct timeval now;
        gettimeofday(&now, NULL);

        unsigned rand_seed = (unsigned)(now.tv_sec * 1000 + now.tv_usec / 1000);
        srand(rand_seed);

        return rand_0_1();
    }
};

#endif