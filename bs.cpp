#include <cstdio>
#include <iostream>
//algorytmy
using namespace std;
class Algo{
public:	Algo(){
		
	}
public:
	int tab[10]={5,2,7,5,3,8,4,7,9,5};
	void printtab(int tab[],int n){
		for(int i=0;i<n;i++)
			cout<<" "<<tab[i]<<" ";
		
	}
	void swp(int *ai,int *bi){ //zmiana miejscami zmiennych podawac adresy
	int temp=*ai;
	*ai=*bi;
	 *bi=temp;
	}
void bBs(int ar[],int n){  //bublesort

	for(int i=0;i<n-1;i++)

		for(int j=0;j<n-i-1;j++)
			if(ar[j]>ar[j+1])
				this->swp(&ar[j],&ar[j+1]);
		
	
};
	void iSort(int arr[], int n)  //insertionSort
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
};
};//koniec klasy

/*
 Al.swp(int *ai,int *bi){ //zmiana miejscami zmiennych podawac adresy
	int temp=*ai;
	*ai=*bi;
	 *bi=temp;
	}
Al.bBs(int ar[],int n){  //bublesort

	for(int i=0;i<n-1;i++)

		for(int j=0;j<n-i-1;j++)
			if(ar[j]>ar[j+1])
				swp(&ar[j],&ar[j+1]);
		
	
}
Al.printtab(int ar[],int size){

	for (int i=0;i<size;i++){
		printf("%d <--liczba %d<--adres\n",ar[i],&ar[i] );
	}
*/

int main(){
Algo *Al=new Algo(); 

	int i[]={4,2,7,9,3,6,4,7,9,5};
int n =sizeof(i)/sizeof(i[0]);
Al->printtab(i,n);
printf("\n|||||BUBLE SORT|||||\n");
Al->bBs(i,n);
Al->printtab(i,n);
n=10;
cout<<"\n\n";
Al->printtab(Al->tab,n);
cout<<"\ninsertionsort\n";
Al->iSort(Al->tab,n);
Al->printtab(Al->tab,n);
return 0; 
}







	
