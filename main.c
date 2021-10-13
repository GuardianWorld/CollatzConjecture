#include <stdio.h>
#include <math.h>
#include "Collatz.h"

//========================================//
//  Code Written By GuardianWorld 2021    //
//  Free to use (Just credit if possible) //
//                 10/2021                //
//========================================//
int main()
{
    FILE* output;
    int choice;
    unsigned long long int x;
    unsigned int steps;
    char input[30]; // Input.
    unsigned long long int preCache = 1;
    unsigned long long int y; //Used in the conjecture;
    unsigned long long int l = inputu16+1; //How many loops it will do;
    unsigned long long int k = 0; //In which loop it is rn;
    unsigned short int *cache;

    printf("Choose a option: \n");
    printf("1) Manual Loop\n");
    printf("2) Automatic Loop\n");
    printf("option: ");
    scanf("%d", &choice);
    if(choice == 2)
    {
        memset(input,0, 30); //Sets the input to 0
        cache = (int*)malloc((maxCache+1) * sizeofInt); //Size of Short Int is 2 bits.

        //Pre-Cache step 1: Initializing Cache
        memset(cache, 0, maxCache);
        //Pre-Cache step 2: All 2^n (up to 32 bits in this case).
        for(x = 0; x < loopSize + 1; x++)
        {
            if(x == 0) { cache[preCache] = 0; }
            else
            {
                preCache = preCache * 2;
                cache[preCache] = x;
                printf("%llu\n", preCache);
            }
        }


        printf("> Input: ");
        scanf("%s", input); //Gets the input
        toInt(input, &y); //Turns the input into a number (needed for 64bit+ numbers inputted).
        while(k < l)
        {
           steps = CollatzConjecture(y, cache, maxCache-1);
           y = y + 1;
           k++;
           //printf("S: %d\n", steps);
        }

        output = fopen("io/output.txt", "w");
        for(x = 1; x < inputu16+1; x++)
        {
            fprintf(output, "%s %d\n", "S: ", cache[x]);
        }
        free(cache);
    }
    else
    {
        while(input[0] != '0')
        {
            memset(input,0, 30);
            printf("> Input: ");
            scanf("%s", input);
            toInt(input, &y);
            steps = CollatzConjecture(y, NULL, 0);
            printf("steps: %u\n", steps);
        }
    }
	//system("pause");

	return 0;
}
