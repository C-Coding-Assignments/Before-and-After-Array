
#include <stdio.h>

//function prototype for before_after which is needed to find out how many of each element in the array exists before and after index y
void before_after(int *, int);

int main()
{
    //variable declaration
    int size;
    
    //getting size of the array from the user
    scanf("%d", &size);
        
    //variable declarations and initializations    
    int array[size], *ptr = array;
    
    //for loop which iterates through the entire array to initialize all of the array's elements using the user's input
    for (; ptr < array + size; ptr++)
        scanf(" %d", ptr);
        
    //calling before_after function to print the results of the program    
    before_after(array, size);    

    return 0;
}

//function definition of before_after which is used to find how many of a certain element exists before and after index y through each iteration of the array
void before_after(int *array, int n)
{
    //nested for loop which iterates to count how many of each element exists before and after index y
    for (int count = 0, *ptr1 = array, *ptr2 = array; ptr1 < array + n; ptr1++, count = 0)
    {
        for (ptr2 = array; ptr2 < ptr1; ptr2++)
            //conditional statement which increments count if an element prior to index ptr2 is equal to *ptr2
            if (*ptr1 == *ptr2)
                count++;
        
        //printing first column element and reseting count to zero
        printf("%d ", count);
        count = 0;
        
        for (ptr2 = ptr1 + 1; ptr2 < array + n; ptr2++)
            //condition statement which increments count if an element after index ptr2 is equal to *ptr2
            if (*ptr1 == *ptr2)
                count++;
        
        printf("%d\n", count);        
    }
}
