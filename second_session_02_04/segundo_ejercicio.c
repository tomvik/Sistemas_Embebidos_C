#include <stdio.h>
#include <stdlib.h>

void PrintTime(const unsigned short time) {
  unsigned short hour = (time >> 11) & 0x1F;
  unsigned short minutes = (time >> 5) & 0x3F;
  unsigned short seconds = (time & 0x1F) * 2;
  printf("Time: %d:%d:%d\n", hour, minutes, seconds);
}

struct time {
  unsigned short seconds : 5, minutes : 6, hours : 5;
};

int main(void) {
  unsigned short old_time = 0x5310; //10:24:32 "0101 0:011 000:1 0000"

  PrintTime(old_time);

  unsigned short new_time = old_time & ~(0x3F << 5);
  new_time |= (0x2c << 5);

  PrintTime(new_time);

  struct time this_time;
  printf("Size of struct: %ld\n", sizeof(this_time));

}