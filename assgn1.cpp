//2) EXTENDED EUCLIDEAN ALGORITHM
#include<iostream>
using namespace std;
int gcdextend(int a,int b,int *x,int *y)
{
    if (a == 0)
    {
        *x=0;
        *y=1;
        return b;
    }
    int x1,y1;
    int gcd = gcdextend(b%a,a,&x1,&y1);
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}
int main() {
    int a;
    int b;
    int x;
    int y;
    cout << " enter a " << endl;
    cin >> a;
    cout << " enter b " << endl;
    cin >> b;
    int g = gcdextend (a, b, &x, &y);
    cout << " gcd (" << a << "," << b << ") =" << g << endl;
    return 0;
}



// C++ program for implementation of Bubble sort
#include<iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)


        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}


void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = {8,6,3,10,9,4,12,5,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}


// C++ program for insertion sort
#include <iostream>
using namespace std;


void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[] = {8,6,3,10,9,4,12,5,2,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}

#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, mini_id;


    for (i = 0; i < n-1; i++)
    {

        mini_id = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_id])
                mini_id = j;


        swap(&arr[mini_id], &arr[i]);
    }
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver program to test above functions
int main()
{
    int arr[] = {8,6,3,10,9,4,12,5,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
