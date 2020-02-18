#include<stdio.h>
int main()
{
int i,j,arr[100][100],grt,sum,value=-9999;
for(int i=0;i<6;i++){
	for(int j=0;j<6;j++){
		scanf("%d",&arr[i][j]);
	}
}
sum=0;
grt=0;
for(i=0;i<=3;i++)
{
	for(j=0;j<=3;j++)
		{
			sum=0;
			sum=sum+arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            printf("sum = %d\n",sum);
			if(sum>value){
                value=sum;
				grt=sum;
            }
		}
}
printf("%d",grt);
return 0;
}

