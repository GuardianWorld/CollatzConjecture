#ifndef COLLATZ_H_INCLUDED
#define COLLATZ_H_INCLUDED

//========================================//
//  Code Written By GuardianWorld 2021    //
//  Free to use (Just credit if possible) //
//                 10/2021                //
//========================================//

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <inttypes.h>
#include <string.h>

#define sizeofInt 2
#define inputu16 65536
#define inputu32 4294967296
#define inputu64 18446744073709551616
#define maxCache 4294967297 //Goes by memory really... It's GB (in bytes) divided by the bytes of the type of int (so short = 2.)

typedef unsigned __int128 uint128;

void tostring(char str[30], uint128 num);
void manualLoop();
void autoLoop();
int CollatzConjecture(unsigned long long int y, unsigned short int* cache, unsigned long long int maxInputforCache);
void toInt(char input[30], uint128 *output);

#endif // COLLATZ_H_INCLUDED
