#include <stdio.h>

int main()
{
    int amount_of_numbers = 10,
        before = 1,
        after = 1,
        i,
        flag;
	for (i=0; i<amount_of_numbers; i++){
        if (i <= 1)
            puts("1");
        else {
            printf("%d\n", before+after);
            flag = before;
            before = after;
            after = before+flag;
        }
	}
	return 0;
}
