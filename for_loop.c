#include <stdio.h>

int main()
{
    int amount = 26;
	  char letters[amount];
	  letters[0] = 'a';
	  for (int i=0; i<amount; i++) {
        letters[i] = 'a'+i;
        printf("%c\n", letters[i]);
	  }

	return 0;
}
