# cartdump
Perform a Hex Dump of the Atari ST Cartridge Port memory area, page by page.

A very simple text-based program that dumps from 0xFA0000 (start of 'ROM4') to 0xFBFFFF (end of 'ROM3'), 20 lines at a time for a quick test to see if your cartridge is properly programmed.

The C file can easily be modified to change the range, or remove the pause.

Compiles simply with GCC as: gcc -o carttest.tos carttest.c

(C) D Henderson 2020. Use & derive with attribution.
