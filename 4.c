#include<stdio.h>
#include<string.h>
int main()
{
	int T,i,j;
	scanf("%d",&T);
	int len,flag,sum,counter1,counter2;
	
	for(i=0;i<T;i++)
	{	flag=0;
		char a[100001];
		scanf("%s",a);
		len = strlen(a);
	//	printf("%d",len);
		if(a[0] != '(' || a[len-1] != ')')
		{
			flag=1;
		}
		
		if(flag==1)
		{
			printf("NO\n");
			continue;
		}

		counter1=0;
		counter2=0;
		flag=0;
		for(j=len-1;j>=0;j--)
		{
			if(a[j] == ')')
			counter2++;
			else
			counter1++ ;

			if(counter1>counter2)
			{
				flag=1;
				break;	
			}
		}
		 if(flag==1)
                {
                        printf("NO\n");
                        continue;
                }

		
		sum=0;
		for(j=0;j<len;j++)
		{
			if(a[j] == '(')
			sum += 1;
			else
			sum -= 1;
		}
		
		if(sum!=0)
		{	
			printf("NO\n");
			break;
		}

		printf("YES\n");
		
	}
	
return 0;
}
