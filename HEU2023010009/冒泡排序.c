#include <stdio.h>
void bubblesort(int a[],int l){
	int b,c,d;
	for (b=0;b<l-1;b++){
		for(c=0;c<l-1-b;c++){
			if(a[c]>a[c+1]){
				d=a[c];
				a[c]=a[c+1];
				a[c+1]=d;
			}
			
		}
	}
}
void main(){
	int a[4],b,l=5;

	for(b=0;b<l;b++){
	scanf("%d",&a[b]);
	}
	bubblesort(a,l);
	for(b=0;b<l;b++){
		printf("%d ",a[b]);
	}
}



