#include <stdio.h>
int N;
int ar[100000];

int scan_swap ( int j ) {
	int temp;
	if ( j == ar[j - 1] ){
		return 0;
	}
	else if ( j == ar [j - 2] ){
		return 1;
	}
	else if (j == ar [j - 3] ){
		return 2;
	}
	else return -1;
}



int main (void){
	int T, i, j, k, point;
	scanf ("%d", &T);
	for (i=0;i<T;++i){
		scanf ("%d", &N);
		for (j=0; j<N; ++j) 
			scanf("%d", &ar[j] );
			int total = 0;
		for (j=N; j>0; --j){
			point = scan_swap ( j );
			/*for (k=0; k<N; ++k) 
				printf("%d ", ar[k] );puts("");*/
			if ( point != -1 ){
				total += point;
			}
			else {
				total = -1;
				break;
			}
		}
		if ( -1 == total ){
			puts ("Too chaotic");
		}
		else printf ("%d\n", total);
	}
}
