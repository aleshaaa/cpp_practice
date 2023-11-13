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

std::vector<int> functions::subarraySum(std::vector<int>arr, int n, long long s)
{
    int i_start = 0;
    int i_end = n;
    int result = 0;

    for (int i = 0; i <= n; i++)
    {
        if (result < s)
        {
            result += arr[i];
        }
        else if (result > s)
        {
            i_start += 1;
            i = i_start - 1;
            result = 0;
        }
        else
        {
            i_start += 1;
            i_end = i;
            return { i_start, i_end };
        }
    }

    return { -1 };
}
