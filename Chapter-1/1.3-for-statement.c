#include <stdio.h>  

int main()
{
int curr;
int start = 0;
int buffer = 2; 
int end = 10;

for(curr = start; curr < end; curr = curr + buffer)
{
    printf("%3d\n", curr);
}



}

