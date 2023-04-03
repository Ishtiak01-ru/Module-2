//ladder else if conditonal statement


#include <stdio.h>
int main()
{
    int tk ;
    scanf("%d",&tk);

    if (tk >= 100) 
    {
        printf("Will go to eat burger \n");
    }
    else if (tk >= 50 ){
        printf("going to eat fuchka ");
    }
     else if (tk >= 20 ){
        printf("Want  to eat ice-cream ");
    }
   
    else {
        printf("i Don't go .....");
    }
    return 0;
}