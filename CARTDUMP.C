#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <osbind.h>



void printdata( uint16_t *add ) {
  uint16_t *d;
  int i;
  printf( "%lx: ", add );
  for( i=0 ; i < 8 ; i++ ) {
    d = add + i;
    printf( "%04x ", *d );
  }
  printf("\n");
}

int cartprobe() {

  unsigned long add;
  unsigned int lines = 0;
  for( add = 0xFA0000 ; add < 0xFC0000 ; add += 0x10 ) {
    printdata( (uint16_t*)add );
    lines++;
    if( lines % 20 == 0 )
	getchar();
  }
  printf("\nDone\n");
  return 0;

}

int main() {

  Supexec( cartprobe );

  printf("Enter\n");
  getchar();
  return 0;
}
