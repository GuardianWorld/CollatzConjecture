# CollatzConjecture
Collatz Conjecture Written in pure C.
Wikipedia Article: https://en.wikipedia.org/wiki/Collatz_conjecture

To use as it is, make sure you have at least 8GB of free RAM avaliable, otherwise, it's going to crash.
Check that you also have support for a 128 Intager type on your machine (If your processor is a x64 processor, you are probably fine). It uses 128 bit intagers (So it can go very far, i would not recommend going past 2^124 because the way the Conjecture works).

Otherwise, you will need to change some things:
- Change the Cache size (maxCache) in Collatz.h from 4294967297 (4GB) into half of that.
- It uses 8 GB because of the Cache process, it is Memory Allocated x Size of Byte Type. I'm using a Short Int to store the steps, so 2 bytes (Total: 8 GB), can store up to 2^32 numbers.
- You can change to half of the Cache size (storing 2^31 words at most), after that, just go on Main.c, change the Pre-cache info from x < 33 to x < 32.
- The program minimum run is 2^16, so it's not very big in memory at that point (Just some MBs).
- You can also just run the manual mode (No Cache), just select option 1.
