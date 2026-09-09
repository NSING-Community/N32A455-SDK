#ifndef _LIN_MASTER_H
#define _LIN_MASTER_H
#include <stdio.h>
#include "n32a455.h"
#include "log.h"


#define SC_RECEIVE_TIMEOUT 0x4000  /* Direction to reader */

typedef enum
{
    CLASSIC = 0,
    ENHANCED = !CLASSIC
} ChecksumType;

typedef struct M_LIN_EX_MSG
{
    ChecksumType CheckType;
    unsigned char DataLen;
    unsigned char Sync;
    unsigned char PID;
    unsigned char Data[8];
    unsigned char Check;
} M_LIN_EX_MSG;

void TestLinMaster(void);

#endif
