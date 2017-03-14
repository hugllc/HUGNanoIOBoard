/**
 * @file
 * @author     Scott L. Price <prices@hugllc.com>
 * @copyright  © 2017 Hunt Utilities Group, LLC
 * @brief   The main file for the fence cutting machine firmware.
 * @details
 */

#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>
#include <stdint.h>


#ifdef HUGNETNANOIO_V1
// Only a few of these were made
static const uint8_t IN1 = A0;
static const uint8_t IN2 = A1;
static const uint8_t IN3 = A2;
static const uint8_t IN4 = A3;
static const uint8_t IN5 = A4;
static const uint8_t IN6 = A5;
static const uint8_t IN7 = A6;
static const uint8_t IN8 = A7;

static const uint8_t SW1 = 12;
static const uint8_t SW2 = 2;


#else

static const uint8_t IN1 = A4;
static const uint8_t IN2 = A5;
static const uint8_t IN3 = A6;
static const uint8_t IN4 = A7;
static const uint8_t IN5 = A0;
static const uint8_t IN6 = A1;
static const uint8_t IN7 = A2;
static const uint8_t IN8 = A3;

static const uint8_t SW1 = 2;
static const uint8_t SW2 = 12;

#endif


static const uint8_t OUT1 = 10;
static const uint8_t OUT2 = 9;
static const uint8_t OUT3 = 6;
static const uint8_t OUT4 = 5;
static const uint8_t OUT5 = 3;
static const uint8_t OUT6 = 4;
static const uint8_t OUT7 = 7;
static const uint8_t OUT8 = 8;

static const uint8_t SPEAKER = 11;

static const uint8_t RV1 = IN7;
static const uint8_t RV2 = IN8;


#endif
