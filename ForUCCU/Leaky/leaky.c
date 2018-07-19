#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>


char buf[80];

int main (int argc, char **argv)
{
  printf("I will echo what U gave, But not the secret.\n");
  unsigned int filler0 = 0xdeadbeef;
  unsigned int filler1 = 0xdeadbeef;
  unsigned int filler2 = 0xdeadbeef;
  unsigned int filler3 = 0xdeadbeef;
  unsigned int filler4 = 0xdeadbeef;
  unsigned int key0    = 0x4833787d;
  unsigned int key1    = 0x6630725f;
  unsigned int key2    = 0x7b25785f;
  unsigned int key3    = 0x55434355;
  unsigned int filler7 = 0xcafebabe;
  unsigned int filler8 = 0xcafebabe;
  unsigned int filler9 = 0xcafebabe;
  unsigned int filler10= 0xcafebabe;
  unsigned int filler11= 0xcafebabe;

  unsigned int red = read(STDIN_FILENO,buf,80);
  buf[red] = '\x00';
  printf(buf);
}
