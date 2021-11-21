#include<stdio.h>
void main()
{
    int cw[7],i;
    printf("Enter(with spaces in between) the 4 digit data to be transfered=");
    scanf("%d%d%d%d",&cw[0],&cw[1],&cw[2],&cw[4]);
    cw[6]=cw[0]^cw[2]^cw[4];
    cw[5]=cw[0]^cw[1]^cw[4];
    cw[3]=cw[0]^cw[1]^cw[2];
    printf("CODEWORD=");
    for(i=0;i<7;i++)
    {
        printf("%d",cw[i]);
    }
}
