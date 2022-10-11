#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int n=5;
//void accept(int arr[5],int n){
//	
//	int i;
//	
//	for (i=0;i<5;i++){
//		printf("Enter The elements \n");
//		scanf("%d",&arr[i]);
//	}
//}

void display(int arr[5],int n)
{
	int i ;
	for (i=0;i<5;i++){
		printf("Print The elements%d \n",arr[i]);
		
	}
	
	
}



void BubbleSort(int arr[5],int n)
{
    int i,j,t;
	
	for (i=0;i<n-1;i++)
	{
		
		for (j=0;j<n-1-i;j++)
		{
			if (arr[j]<arr[j+1])
			{
		        
                 
	
        	             t=arr[j];
			             arr[j]=arr[j+1];
               			arr[j+1]=t; 
               			
                 
		}
	
		
		}
	}
		
	
}


int main()
{
	int i;
	int arr[5];
	int n=5;
	void srand();
 
    for (i = 0; i <5; i++)  
    {  
       arr[i]=srand() % 100;  
       printf("\n %d \n",arr[i]);
    }   
       
     

//	accept(arr,n);
	display(arr,n);
	printf("Sorted array is \n");
	BubbleSort(arr,n);
	display(arr,n);

	return 0;
    
	
}
