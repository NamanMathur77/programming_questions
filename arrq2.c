#include<stdio.h>
main()
{
    int t,test,n,i,j,k,sum=0,count=0,a[100];
    printf("Enter the test cases");
    scanf("%d",&t);
    for(test=t;test>0;test--){
        count=0;
        printf("Enter the size of array");
        scanf("%d",&n);
        printf("Enter the array");
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                sum=a[i]+a[j];
                for(k=0;k<n;k++){
                    if(sum==a[k]){
                        count++;
                    }
                }
            }
        }
        if(count==0){
            printf("-1");
        }
        else{
            printf("%d",count);
        }
    }
    return 0;
}