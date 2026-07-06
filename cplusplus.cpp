#include<iostream>
int main()
{
    int a[10];
    int i;
    int b;
    for(i=0;i<9;i++)
        {
            std::cout<< " \n Enter any number: \t" ;
            std::cin>> a[i];
        }
    std::cout<< " \n Enter a number of which you want it's array location " ;
    std::cin>> b;
    for(i=0;i<9;i++)
       {
        if(a[i]==b)
          {
            std::cout<< " The position of the input number in the array is " << i+1 << "\n" ;
          }
       }
       return 0;
}