#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void echo()
{
  char message[16];

  gets(message);
  puts(message);
}

void hacked()
{
  puts("You are hacked!");
}

void shell()
{
  system("/bin/sh");
}

void ls()
{
  system("ls");
}

void main()
{
  puts("enter your message:");
  echo();
}
