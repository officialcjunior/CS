#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum weekdays {Sunday=1,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

int main()
{
    int w;
    printf("Enter number to know which day(1-7) : ");
    scanf("%d",&w);
    
    // Integer cases are matched with weekdays in switch cases
    
    switch(w)
    {
        case Sunday : printf("Day %d is a Sunday",w);   
                     break;
        case Monday : printf("Day %d is a Monday",w);   
                     break;
        case Tuesday: printf("Day %d is a Tuesday",w);   
                     break;
        case Wednesday: printf("Day %d is a Wednesday",w);   
                     break;
        case Thursday: printf("Day %d is a Thursday",w);   
                       break;
          case Friday: printf("Day %d is a Friday",w);   
                       break;
        case Saturday: printf("Day %d is a Saturday",w);   
                       break;
            default  : printf("Invalid\n");
                       break;
    }
    
}
