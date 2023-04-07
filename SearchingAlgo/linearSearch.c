/*Linear Search in C*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function to perform linear search
int linear_search(int *ar, int length, int x)
{
    // to find x
    // go through each element in array(ar) to find x
    for (int i = 0; i < length; i++)
    {
        // check if ith element matches with x
        if (ar[i] == x)
        {
            // if found return index value
            return i;
        }
        // else ignore
    }
    // if not found reutrn -1 to indicate x is not present in array(ar)
    return -1;
}

// function to print an array
void print_ar(int *ar, int length)
{
    // use a forloop to print all the array elements
    for (int i = 0; i < length; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

int main()
{
    // declare and define a static array
    int ar[] = {3, 1, 5, 6, 1, 6, 3};
    // store length of the array inside 'len'
    int len = sizeof(ar) / sizeof(int);
    printf("Array: \n");
    print_ar(ar, len);

    // element to search
    int x = 5;
    printf("To Search: %d\n", x);
    int x_index = linear_search(ar, len, x);

    if (x_index != -1)
    {
        printf("%d is in index %d\n", x, x_index);
    }
    else
    {
        printf("%d is not present in this array\n", x);
    }

    return 0;
}

/*
Output :-

Array:
3 1 5 6 1 6 3
To Search: 5
5 is in index 2

*/