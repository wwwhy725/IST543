#include <stdio.h>
#include <string.h>

void echo()
{
  char message[16];

  gets(message);
  puts(message);
}

void main()
{
  puts("enter your message:");
  echo();
}
