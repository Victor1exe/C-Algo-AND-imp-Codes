#include <bits/stdc++.h>
using namespace std;

// Merge Sort

// void mergE(vector<int> &arr, int low, int mid, int high)
// {
//     vector<int> temp;
//     int left = low;
//     int right = mid + 1;

//     while (left <= mid && right <= high)
//     {
//         if (arr[left] <= arr[right])
//         {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else
//         {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     while (left <= mid)
//     {
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while (right <= high)
//     {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for (int i = low; i <= high; i++)
//     {
//         arr[i] = temp[i - low];
//     }
// }

// void mergeSort(vector<int> &arr, int low, int high)
// {
//     if (low >= high)
//     {
//         return;
//     }
//     int mid = (low + high) / 2;
//     mergeSort(arr, low, mid);
//     mergeSort(arr, mid + 1, high);
//     mergE(arr, low, mid, high);
// }

// int main()
// {
//     vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
//     int n = 7;
//     mergeSort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// Quicksort

// int partition(vector<int> &arr, int low, int high) {
//     int pivot = arr[low];
//     int i = low;
//     int j = high;

//     while (i < j) {
//         while (arr[i] <= pivot && i <= high - 1) {
//             i++;
//         }

//         while (arr[j] > pivot && j >= low + 1) {
//             j--;
//         }
//         if (i < j) swap(arr[i], arr[j]);
//     }
//     swap(arr[low], arr[j]);
//     return j;
// }

// void qs(vector<int> &arr, int low, int high) {
//     if (low < high) {
//         int pIndex = partition(arr, low, high);
//         qs(arr, low, pIndex - 1);
//         qs(arr, pIndex + 1, high);
//     }
// }

// vector<int> quickSort(vector<int> arr) {
//     qs(arr, 0, arr.size() - 1);
//     return arr;
// }

// int main()
// {
//     vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
//     int n = arr.size();
//     cout << "Before Using quick Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     arr = quickSort(arr);
//     cout << "After Using quick sort: " << "\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     return 0;
// }


// Recursive Insertion sort


// void insertion_sort(int arr[], int i, int n) {

//     // Base Case: i == n.
//     if (i == n) return;

//     int j = i;
//     while (j > 0 && arr[j - 1] > arr[j]) {
//         int temp = arr[j - 1];
//         arr[j - 1] = arr[j];
//         arr[j] = temp;
//         j--;
//     }

//     insertion_sort(arr, i + 1, n);
// }

// int main()
// {
//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before Using insertion Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     insertion_sort(arr, 0, n);
//     cout << "After Using insertion sort: " << "\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     return 0;
// }


// Recursive Bubble sort


// void bubble_sort(int arr[], int n) {
//     // Base Case: range == 1.
//     if (n == 1) return;

//     for (int j = 0; j <= n - 2; j++) {
//         if (arr[j] > arr[j + 1]) {
//             int temp = arr[j + 1];
//             arr[j + 1] = arr[j];
//             arr[j] = temp;
//         }
//     }

//     //Range reduced after recursion:
//     bubble_sort(arr, n - 1);
// }

// int main()
// {
//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before Using Bubble Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     bubble_sort(arr, n);
//     cout << "After Using bubble sort: " << "\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     return 0;

// }