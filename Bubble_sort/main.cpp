#include <iostream>

using namespace std;

void bubble_sort(int a[], int n)
{
    int iteraciones = 0;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            iteraciones++;
        }
    }
    cout<<iteraciones<<endl;
}

int main()
{
    int arr[] = {9,8,2,3};

    bubble_sort(arr, 4);

    for(int i = 0; i<4; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
