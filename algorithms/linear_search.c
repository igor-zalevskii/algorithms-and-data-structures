#include <stdbool.h>
#include <stdio.h>

bool linear_search_int(int search_value, int arr[], int arr_length);

int main(void)
{
    int arr[] = {5, 100, 5, 18, 33, 1, 75};
    int search_value = 100;
    // sizeof() returns the number of bytes in %li
    int arr_length = sizeof(arr) / sizeof(arr[0]);

    // inside the function arr is a pointer -> we need arr_length
    bool is_found = linear_search_int(search_value, arr, arr_length);
    if (is_found)
    {
        printf("Found.\n");
    }
    else
    {
        printf("Not found.\n");
    }
    return 0;
}

bool linear_search_int(int search_value, int arr[], int arr_length)
{
    for (int i = 0; i < arr_length; i++)
    {
        if (search_value == arr[i])
        {
            return true;
        }
    }
    return false;
}