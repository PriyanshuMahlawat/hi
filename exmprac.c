#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 1;
    int t;
    printf("len?:\n");
    int l;
    scanf("%d", &l);
    int arr[l];
    arr[0] = 1;
    arr[1]=1;
    
    int c=0;
    for (int i = 2; i <= l - 1; i++)
    {
        t = a;
        a = b;
        b = t + b;
        int k=a+b;
        if (k % 2 != 0)
        {
            arr[i-c] = a + b;

            /* code */
        }
        else
        {
            arr[i - 1-c] = 0;
            c++;
        }
    }
    for (int j = 0; j < l; j++)
    {
        if (arr[j]!=0)
        {
             printf("%d ",arr[j]);

            /* code */
        }
        
       
        /* code */
    }
    

    return 0;
}
