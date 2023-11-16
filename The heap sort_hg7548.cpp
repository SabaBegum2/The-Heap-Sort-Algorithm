#include <iostream>
using namespace std;


void heap(int arr[], int n, int i)
{
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2; 

if (left < n && arr[left] > arr[largest])
    largest = left;

if (right < n && arr[right] > arr[largest])
    largest = right;

if (largest != i) {
    swap(arr[i], arr[largest]);
    heap(arr, n, largest);
}
}

void hSort(int arr[], int n)
{

for (int i = n / 2 - 1; i >= 0; i--)
    heap(arr, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heap(arr, i, 0);
    }
}

int main()
{
int ar[7];
cout<<"Enter number for the array:"<<endl;
for(int i = 0; i < 7; ++i)
    cin>>ar[i];
    hSort(ar, 7);
    cout<<endl<<"The array after the heap sort is performed: "<<endl;
    for(int i = 0; i < 7; ++i)
        cout<<ar[i]<<" ";
return 0;
}
