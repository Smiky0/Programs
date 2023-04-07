/*Binary Search in C*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// binary search can only be permormed when array is sorted
int binary_search(int *ar, int length, int x)
{
    // define start, middle and last index
    int start = 0;
    int end = length - 1;

    // keep looking for x in mid index
    while (start <= end)
    {
        // middle index will be changed everytime depending on start and end value
        int mid = (start + end) / 2;
        // if found in middle index return
        if (ar[mid] == x)
        {
            return mid;
        }
        // if middle element is smaller
        // set start index to mid
        else if (ar[mid] < x)
        {
            start = mid + 1;
        }
        // if element in mid is bigger
        // set end index as mid
        else
        {
            end = mid - 1;
        }
    }
    // if not found then return -1
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
    int ar[] = {1, 2, 3, 4, 5, 6};
    // store length of the array inside 'len'
    int len = sizeof(ar) / sizeof(int);
    printf("Array: \n");
    print_ar(ar, len);

    // element to search
    int x = 5;
    printf("To Search: %d\n", x);
    int x_index = binary_search(ar, len, x);

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
1 2 3 4 5 6
To Search: 5
5 is in index 4

*/