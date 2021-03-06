/**
 * @brief 外部IO设计
 * @details
 * @author 01课堂 李述铜 http://01ketang.cc
 * @date 2017-06-01
 * @version 1.0
 * @copyright 版权所有，禁止用于商业用途
 */
#ifndef EXTIO_H
#define EXTIO_H

typedef enum {
    ExtIOHigh,
    ExtIOLow
}ExtIOState;

typedef enum {
    ExtIOPin0 = 0,
    ExtIOPin1,
    ExtIOPin2,
    ExtIOPin3,
    ExtIOPinEnd,
}ExtIOPin;

typedef enum {
    ExtIntIOPin4,
    ExtIntIOPin5,
    ExtIntIOPin6,
    ExtIntIOPin7,
}ExtIntIOPin;

typedef void (*ExtIntIOCb )(ExtIntIOPin pin);

void ExtIOInit (ExtIntIOCb cb);
void ExtIOSetState (ExtIOPin pin, ExtIOState);
ExtIOState ExtIOGetState (ExtIOPin pin);
void ExtIOSetDir (ExtIOPin pin, uint8_t isInput);
void ExtIOResetInput (void);

#endif //PROJECT_EXTIO_H
