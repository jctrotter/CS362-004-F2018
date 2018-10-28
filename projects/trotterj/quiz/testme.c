#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

char inputChar()
{
	char *charset[] = {"[","(","{"," ","a","x","}",")","]"};
	int randInt = rand() % 9;
    return *charset[randInt];
}

char *inputString()
{
	char *charString[] = {"r","e","s","e","t","\0"};
	char *charset2[] = {"r","e","s","t"};
	int randInt;
	int strLen = 5;
	int x;
	for (x = 0; x<strLen; x++){
		randInt = rand() % 4;
		charString[x] = charset2[randInt];
		printf("%s", charString[x]);
	}
	printf("\n");
    return *charString;
}

void testme()
{
  int tcCount = 0;
  char *s;
  char c;
  int state = 0;
  while (1)
  {
    tcCount++;
    c = inputChar();
    s = inputString();
    printf("Iteration %d: c = %c, s = %s, state = %d\n", tcCount, c, s, state);
    if (c == '[' && state == 0) state = 1;
    if (c == '(' && state == 1) state = 2;
    if (c == '{' && state == 2) state = 3;
    if (c == ' '&& state == 3) state = 4;
    if (c == 'a' && state == 4) state = 5;
    if (c == 'x' && state == 5) state = 6;
    if (c == '}' && state == 6) state = 7;
    if (c == ')' && state == 7) state = 8;
    if (c == ']' && state == 8) state = 9;
    if (s[0] == 'r' && s[1] == 'e'
       && s[2] == 's' && s[3] == 'e'
       && s[4] == 't'
       && state == 9)
    {
      printf("error ");
      exit(200);
    }
}
}

int main(int argc, char *argv[])
{
    srand(time(NULL));
    testme();
    return 0;
}
