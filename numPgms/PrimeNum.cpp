//pgm_no:01
//title:prime number( approch 1)
/*
 
*/
#include<iostream>
using namespace std;
int main()
{
    int num=7,i;
 for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }

    if (i == num)
    {
        std::cout<<num<<" is a prime number"<<endl;
    }
    else
    {
         std::cout<<num<<" is a prime number"<<endl;
    }

return 0;
}