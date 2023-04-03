//ladder else if conditonal statement


#include <stdio.h>
int main()
{
    int class;
    scanf("%d",&class);

    if (class >= 5) 
    {
        printf("Will go to class on timely \n");
    }
    else if (class == 4 ){
        printf("Will got to class at 11'o clock");
    }

    else if (class >=2){
        printf("Not sure .....I may go or may not  go");
    }
    
    else {
        printf("Don't go .....");
    }
    return 0;
}