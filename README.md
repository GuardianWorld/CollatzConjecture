# CollatzConjecture
Collatz Conjecture Written in pure C.
Wikipedia Article: https://en.wikipedia.org/wiki/Collatz_conjecture

# Requirements: 
- x64 Processor (x86_x64 one used in the making).
- 8 GB Free RAM (To use it's automatic mode as it is).
- It uses 128 bit intagers (So it can go very far, i would not recommend going past 2^120 because the way the Conjecture works).

Otherwise, you will need to change some things:
- Change the Cache size (maxCache) in Collatz.h from 4294967296 Bytes (8GB) to other number (2147483648 for 4GB) | (1073741824 for 2 GB) | (536870912 for 1 GB).
- It uses 8 GB because of the Cache process, it is Memory Allocated x Size of Byte Type. I'm using a Short Int to store the steps, so 2 bytes (Total: 8GB), can store up to 2^32 numbers.
- If you change to half the size (4GB), go to the #define loopSize and change that to 31.
- The program minimum run is 2^16, so it's not very big in memory at that point (Just some MBs).
- You can also just run the manual mode (No Cache), just select option 1.
