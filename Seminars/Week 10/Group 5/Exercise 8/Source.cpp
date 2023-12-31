#include <iostream>

int binSearchRec(int l, int r, int *arr, int search)
{
    if (l <= r)
    {
        int mid = l + (r - l) / 2; // or (l + r) / 2
        if (arr[mid] == search)
        {
            return mid;
        }

        if (arr[mid] > search)
        {
            return binSearchRec(l, mid - 1, arr, search);
        }

        return binSearchRec(mid + 1, r, arr, search);
    }
    return -1;
}

int binSearch(int *arr, int n, int x)
{
    int left = 0,
        right = n - 1, middle;

    while (left <= right)
    {
        middle = (left + right) / 2;
        if (arr[middle] == x)
        {
            return middle;
        }

        if (arr[middle] > x)
        {
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }

    return -1;
}

int main()
{
    int *arr;
    int n, x;
    std::cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Find number:";
    std::cin >> x;

    //cout << "Element at index: " << binSearch(arr, n, x) << endl;

    std::cout << "Element at index: " << binSearchRec(0, n - 1, arr, x) << std::endl;
    delete[] arr;
}
