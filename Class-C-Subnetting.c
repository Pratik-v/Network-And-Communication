//QUESTION
/*
Assume you are a network administrator and you have been assigned the task of setting up the IP network. 
You have a single class C IP address range (198.20.1) and have to setup ‘n’ subnets of ‘m’ hosts each (‘m’ includes the subnet id and broadcasting id).

Write a C program to effectively assign the IP addresses for the same. Print the subnet id and mask for each Subnet.
A minimum of three sample outputs are required (2 for subnetting and 1 for the validation check)
*/

//CODE
#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,s,p,h,i,lastoctet=0,k=1;
	printf("Enter No. of Subnett Required: \t ");
	scanf("%d",&n); //Require Subnets
	printf("Enter No. of host required in each subnet: \t ");
	scanf("%d",&m); //Require hosts
	p=ceil(log2(n));
	s=pow(2,p); //converting Require Subnet into power of 2
	printf("\nPossible subnets : %d \n",s);
	h=pow(2,8-p);
	printf("Total No. of hosts: %d \n",h);
	printf("Usable hosts : %d \n",h-2);
	if(h-2<m)
		printf("\n\nREQUIRE HOSTS NUMBER IS INVALID!\n\n");
	for(i=0;i<p;i++)
		lastoctet+=(int)pow(2,7-i);
	printf("\nSubnet mask : 255.255.255.%d/%d\n",lastoctet,24+p);
	i=0;
	while(i<=255)
	{
		printf("\n\n Subnet-No. : %d",k);
		printf(" \t Subnet-id : 192.20.1.%d",i);
		printf(" \t Address-Range : 192.20.1.%d - ",i);
		i+=h;
		printf("192.20.1.%d",i-1);
		k++;
	}
	return 0;
}
