#include<stdio.h>
int main()
{
	int n,i,j;
	if(scanf("%d",&n)){}
	int arra[n],arrb[n],arrc[n];

	for(i=0;i<n;i++)
		if(scanf("%d",&arra[i])){}

	for(i=0;i<n;i++)
		if(scanf("%d",&arrb[i])){}
	for(i=0;i<n;i++)
		if(scanf("%d",&arrc[i])){}
	
	int max1,max2,max3,temp,k;
	for(i=0;i<n;i++)
	{	
		k=0;
		int ar[3]={arra[i],arrb[i],arrc[i]};	  
		
		if(ar[k]>ar[k+1])
		{
			temp =ar[k];
			ar[k]=ar[k+1];
			ar[k+1]=temp;
		}
		
		  if(ar[k+1]>ar[k+2])
                {
                        temp =ar[k+1];
                        ar[k+1]=ar[k+2];
                        ar[k+2]=temp;
                }

		  if(ar[k+2]>ar[k])
                {
                        temp =ar[k+2];
                        ar[k+2]=ar[k];
                        ar[k]=temp;
                }

	// Sorting done

		if(ar[k] - ar[k+1] - ar[k+2] < 0 )
			{
				printf("Yes\n");
			}
		else
			{
				printf("No\n");
			}

	}


	


return 0;
}
