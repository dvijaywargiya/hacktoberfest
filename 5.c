#include<stdio.h>

void merge(long long int ar1[],long long int size1,long long int ar2[],long long int size2,long long int ar[])
        {
                int i=0,j=0;
                while(i<size1 && j<size2)
                        {
                                if(ar1[i]<ar2[j])
                                        {
                                                ar[i+j]=ar1[i];
                                                i++;
                                        }
                                else
                                        {
                                                ar[i+j]=ar2[j];
                                                j++;
                                        }
                        }
                while(i<size1)
			{
                        ar[i+j] = ar1[i];
			i++ ;
			}
                while(j<size2)
			{
                        ar[i+j] = ar2[j];
			j++ ;
			}
        }




void mergesort(long long int ar[], long long int size)
        {
                if(size<=1) return;

                long long int t1[size],t2[size],i;

                for(i=0;i<size/2;i++)
                        t1[i]=ar[i];
                for(i=size/2;i<size;i++)
                        t2[i-size/2]=ar[i];

                mergesort(t1,size/2);
                mergesort(t2,size-size/2);
                merge(t1,size/2,t2,size-size/2,ar);

        }


int main()
{
		long long int j;
		long long int N,ans=0;
		if(scanf("%lld",&N)){}
		long long int pow[N],sum=0,sum1=0;
		for(j=0;j<N;j++)
		{
		if(scanf("%lld",&pow[j])){}
		sum=sum+pow[j];
		}
		mergesort(pow,N);
		for(j=N-1;j>=0;j--)
			{
				sum = sum - pow[j];
				sum1= sum1 + pow[j];
				ans++;
				if(sum1>sum)
				break;
			}
		printf("%lld\n",ans);
		


return 0;
}
