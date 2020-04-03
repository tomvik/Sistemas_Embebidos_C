#include <stdio.h>
#include <stdlib.h>

struct time {
  unsigned short hours : 5, minutes : 6, seconds : 5;
};

void PrintTime(const struct time current_time) {
  printf("Time: %d:%d:%d\n", current_time.hours, current_time.minutes, 2* current_time.seconds);
}

int main(void) {
  struct time old_time; 

  //10:24:32 "0101 0:011 000:1 0000"
  old_time.hours = 0b01010;
  old_time.minutes = 0b011000;
  old_time.seconds = 0b10000;

  PrintTime(old_time);
  
  old_time.minutes = 0x6C; // 44d

  PrintTime(old_time);

  printf("Bytes in struct: %ld\n", sizeof(old_time));

}