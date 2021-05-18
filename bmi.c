#include <stdio.h>
#include <cs50.h>
#include <string.h>
 
 
int main()
{
    float height, weight, bmi;
    char bmi_cat[25];
 
 
 
    char str[50], ch;
 
    int i;
 
    printf("Enter Name\n");
 
    i = 0;
    ch = getchar ();
    while(ch!='\n')
 
    {
 
 
        str[i] = ch;
 
        i++;
 
        ch = getchar();
 
    }
 
    str[i] ='\0';
 
 
    height = get_float("Enter Height \n") ;
 
 
    weight = get_float("Enter Weight \n") ;
 
    bmi = weight / (height * height);
 
 
    if(bmi < 18.5)
    {
        printf("%s %0.2f underweight",str, bmi);
    }
    else if(bmi >= 18.5 && bmi <= 24.9)
    {
        printf("%s %0.2f normal weight",str, bmi);
    }
    else if(bmi >= 25 && bmi <= 29.9)
    {
        printf("%s %0.2f overweight",str, bmi);
    }
    else if(bmi >= 30)
    {
        printf("%s %0.2f obese",str, bmi);
    }
 
 
 
    return 0;
 
 
}
