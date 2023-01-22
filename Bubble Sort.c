// Bubble Sort Algorithm Implementation. 
#include<stdio.h>
#include<stdlib.h> 
void swap(int *a, int *b);                       // Swap two varaibles holding values. 
void print_array(int Array, int array_size);     //Print Sorted array. 
void bubblesort_ascend(int Array, int array_size);
void bubblesort_descend(int Array, int array_size);
int main(void)
{  
    int Array[]= {5,9,8,2,9,3,7,12};
    int i,j;
    int array_size= (sizeof(Array)/ sizeof(Array[0]));
    printf("Initial list: \n");
           for(j=0; j<array_size; j++)
        {
            printf("%d", Array[j]);
            printf("\n");
        }
    char command; 
    printf("Choose your order for sorting\n");
    printf("Press 1 for Ascending order, and 2 for Descending order\n");
    if(command=='1')
    {
        bubblesort_ascend(Array, array_size);
    }    
    if(command=='2')
    {
        bubblesort_descend(Array, array_size);
    }    
    return 0;
}
void bubblesort_ascend(int Array, int array_size);
{
    int i;j;
    
    for(i=0;i<array_size-1;i++)
    {
        swapped=false; // swapped is initially initialised to false. 
        for(j=0;j<array_size-i-1;j++)
        {
            if(Array[i]>Array[i+1])           
            {
                  swap (Array[i], Array[i+1]);
                  swapped=true; 
            }
        }
        if(swapped = false) // No swapping peroformed by inner loop. 
        {
            break;
        }
    }
        print_array(Array, array_size);   
}
void bubblesort_descend(int Array, int array_size);
{
   int i;j;
    for(i=0;i<array_size-1;i++)
    {
        swapped=false; // swapped is initially initialised to false. 
        for(j=0;j<array_size-i-1;j++)
        {
            if(Array[i]<Array[i+1])           
            {
                  swap (Array[i], Array[i+1]);
                  swapped=true; 
            }
        }
        if(swapped = false) // No swapping peroformed by inner loop. 
        {
            break;
        }
          
    } 
    print_array(Array, array_size); // Prints the sorted array in descending order.
}    
void swap(int *a, int *b);
{
    int temp = *a;       
    *a = *b;         
    *b = temp;                              
}
print_array(int Array, int array_size);
{
    int i;
    for(i=0;i<array_size;i++)
    {
        printf("%d", Array[i]);
        printf("\n");
    }
}
