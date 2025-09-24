#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int totel =0;
    int cash = 0;
    do
    {
    cash=get_int("Change owed: ");
    }
    while(cash <= 0);
    for(int i = cash; i>0;)
    {
        if(i>=25)
        {
            i=i-25;
            totel++;
            

        }
         else if (i>=10)
        {
            i=i-10;
            totel++;

        }
         else if(i>=5)
        {
            i=i-5;
            totel++;

        }
         else
        {
            i=i-1;
            totel++;

        }
    }
    printf("%i\n", totel);
}
