#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
/************************************************************************/
    //taking input from binary
    int binary_number,binary_array[16];
    printf("Please Enter 8 bit binary number = ");
    scanf("%d",&binary_number);
    int i;

    for(i=15;i>=0;i--)
    {
        if(i<8)
            binary_array[i]=0;
        else
        {
            int temp;
            temp=binary_number%10;
            binary_array[i]=temp;
            binary_number=binary_number/10;
        }
    }
    printf("\nrepresenting 8 bit binary in 16 bit binary number:\n");
    printf("16 bit binary = ");

    for(i=0;i<16;i++)
    {
        printf("%d ",binary_array[i]);

    }

/****************************************************************************************/
     //now finding 2's complement
     int flag;
     for(i=15;i>=0;i--)
     {
         if (binary_array[i]==1)
         {
            flag=1;
            int j;
            for(j=i-1;j>=0;j--)
            {
                if(binary_array[j]==0)
                {
                    binary_array[j]=1;
                }
                else
                    binary_array[j]=0;

            }
         }
         if(flag==1)
           break;
     }
     printf("\n2's complement is = ");
     for(i=0;i<16;i++)
        printf("%d ",binary_array[i]);

    return 0;
}
