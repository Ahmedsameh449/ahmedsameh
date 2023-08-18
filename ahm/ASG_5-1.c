#include <stdio.h>  
 
int main()  
{  
     int arr_1[10],i,n,min,max,temp;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr_1[i]);
    }
      
    //Calculate length of array arr  
    int size = sizeof(arr_1)/sizeof(arr_1[0]);  
      
    //Displaying elements of original array  
    printf("Elements of original array: \n");  
    for (int i = 0; i<size; i++) {   
        printf("%d ", arr_1[i]);   
    }    
      
    //Sort the array in ascending order  
    for (int i = 0; i<size; i++) {   
        for (int j = i+1; j<size; j++) {   
           if(arr_1[i] > arr_1[j]) {  
               temp = arr_1[i];  
               arr_1[i] = arr_1[j];  
               arr_1[j] = temp;  
           }   
        }   
    }  
      
    printf("\n");  
      
    //Displaying elements of array after sorting  
    printf("Elements of array sorted in ascending order: \n");  
    for (int i = 0; i<size; i++) {   
        printf("%d ", arr_1[i]);  
    } 
    min=max=arr_1[0];
    for(i=1; i<n; i++)
    {
         if(min>arr_1[i])
		  min=arr_1[i];
		   if(max<arr_1[i])
		    max=arr_1[i];
    }
printf("\nmaximum of array is : %d",max);
//printf("\nminimum of array is : %d",min);
printf("\nmaximum of array is : %d",max);
           
 
    return 0;  
}  