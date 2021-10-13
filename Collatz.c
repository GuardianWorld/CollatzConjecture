#include "Collatz.h"

//========================================//
//  Code Written By GuardianWorld 2021    //
//  Free to use (Just credit if possible) //
//                 10/2021                //
//========================================//

void tostring(char str[30], uint128 num)
{
    int i, len = 0;
    uint128 n;
    uint128 rem;
    n = num;
    memset(str, 0, 30);
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}

void toInt(char input[30], uint128 *output)
{
    uint128 y = 0;
    uint128 factor = 1; // Factor for the Conversor.
    int j;
    for(j = strlen(input) - 1; j >= 0; j--)
    {
        y = y + (input[j] - 48) * factor;
        factor *= 10;
    }
    *output = y;
    return;
}

int CollatzConjecture(unsigned long long int y, unsigned short int* cache, unsigned long long int maxInputforCache)
{
    unsigned long int cachedY = 0;
    int stepCounter = 0; // Step Counter to check how many Steps were made

    if(y < maxInputforCache) { cachedY = y; }

    while (y > 1)
    {
        if(y < maxInputforCache)
        {
            if(cache[y] != 0)
            {
                stepCounter += cache[y];
                //printf("Y: %llu, O: %llu, C: %u\n", y, cachedY,cache[y]);
                y = 1;
            }
            if(y == 1)
            {
                cache[cachedY] = stepCounter;
                break;
            }

        }
        if (y % 2 == 0)        { y = y>>1 ; } // y / 2, Binary Approach.
        else                   { y = (y * 3) + 1; }
        stepCounter++;
    }
    return stepCounter;
}
