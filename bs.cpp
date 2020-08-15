#include <cstdio>

void swp(int *ai,int *bi){
	int temp=*ai;
	*ai=*bi;
	 *bi=temp;
	}
void bBs(int ar[],int n){

	for(int i=0;i<n-1;i++)

		for(int j=0;j<n-i-1;j++)
			if(ar[j]>ar[j+1])
				swp(&ar[j],&ar[j+1]);
		
	
}
void printBs(int ar[],int size){

	for (int i=0;i<size;i++){
		printf("%d <--liczba %d<--adres\n",ar[i],&ar[i] );
	}

}
int main(){
	int i[]={4,2,7,9,3,6,4,7,9,5};
int n =sizeof(i)/sizeof(i[0]);
printBs(i,n);
printf("|||||BUBLE SORT|||||\n");
bBs(i,n);
printBs(i,n);
return 0;
}







	
