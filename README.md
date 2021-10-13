# CollatzConjecture
Collatz Conjecture Written in pure C.
Wikipedia Article: https://en.wikipedia.org/wiki/Collatz_conjecture
Uses an implementation + Memoization for cache of already done numbers.
The Memoization (Cache) stores the first 2^32 numbers in the normal 8GB numbers. Editing the main.c to allow the program to run for that ammount will work.

# Requirements: 
- x64 Processor (x86_x64 one used in the making).
- 8 GB Free RAM (To use it's automatic mode as it is).
- It uses 128 bit intagers (So it can go very far, i would not recommend going past 2^120, glitches/overflown could happen).

Otherwise, you will need to change some things:
- Change the Cache size (maxCache) in Collatz.h from 4294967296 Bytes (8GB) to other number (2147483648 for 4GB) | (1073741824 for 2 GB) | (536870912 for 1 GB).
- It uses 8 GB because of the Cache process, it is Memory Allocated x Size of Byte Type. I'm using a Short Int to store the steps, so 2 bytes (Total: 8GB), can store up to 2^32 numbers.
- If you change to half the size (4GB), go to the #define loopSize and change that to 31.
- Don't guarantee it will work for lower sizes...
- The program minimum run is 2^16, you can change that at main.c unsigned long long int l. (It goes only to inputu64-1).
- You can also just run the manual mode (No Cache), just select option 1.
