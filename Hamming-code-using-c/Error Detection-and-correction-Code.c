#include<stdio.h>
void main()
{
    int r[7],i,c1,c2,c3,c;
    printf("Enter the 7 bits received data = ");
    for(i=0;i<7;i++)
        scanf("%d",&r[i]);
    c1=r[6]^r[4]^r[2]^r[0];
    c2=r[5]^r[4]^r[1]^r[0];
    c3=r[3]^r[2]^r[1]^r[0];
    c=c3*4+c2*2+c1 ;
    if(c==0)
    {
        printf("No error detected");
        return;
    }
    printf("\nError At %d Position\n",c);
    printf("\nCorrected message is = ");
    if(r[7-c]==0)
         r[7-c]=1;
    else
         r[7-c]=0;
    for (i=0;i<7;i++)
        printf("%d",r[i]);
}
