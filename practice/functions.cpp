#include "functions.h"

int functions::biggestDiff(std::vector<int> arr)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max) max = arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < min) min = arr[i];
    }
    return max - min;
}
