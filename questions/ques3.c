#include <stdio.h>

int main() {
	//code
	int t,n,arr[10],p1,p2;
	//enter the size of array
	scanf("%d",&t);
	while(t!=0){
	scanf("%d",&n);
	//enter the array
	for(int i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
	    if(arr[i]>arr[i+1])
	    printf("%d",arr[i+1]);
	    else
	    printf("-1");
	}
	t=t-1;
	}
	return 0;
}
