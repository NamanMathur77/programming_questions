#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        int num=arr[i];
        for(n=num;n<num+4;n++){
            if(n%5==0){
                arr[i]=n;
                printf("%d",arr[i]);
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
}
