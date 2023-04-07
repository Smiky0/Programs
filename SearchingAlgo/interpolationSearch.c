#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int interpolation_search(int *ar, int length, int x)
{
    // define start, middle and last index
    int start = 0;
    int end = length - 1;
    int pos;

    // keep looking for x in pos index
    while (start <= end && x >= ar[start] && x <= ar[end])
    {
        // pos contains a number calculated using this formula
        pos = start + (((double)(start - end) / (ar[end] - ar[start])) * (x - ar[start]));
        // if found return
        if (ar[pos] == x)
        {
            return pos;
        }
        // if pos element is smaller
        // set start index to pos
        else if (ar[pos] < x)
        {
            start = pos + 1;
        }
        // if element in pos is bigger
        // set end index as pos
        else
        {
            end = pos - 1;
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
    int ar[] = {3, 1, 5, 6, 1, 6, 3};
    // store length of the array inside 'len'
    int len = sizeof(ar) / sizeof(int);
    printf("Array: \n");
    print_ar(ar, len);

    // element to search
    int x = 5;
    printf("To Search: %d\n", x);
    int x_index = interpolation_search(ar, len, x);

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
