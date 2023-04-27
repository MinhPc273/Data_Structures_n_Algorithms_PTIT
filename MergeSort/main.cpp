#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int m, int r){
        // Tìm kích thước của hai mảng con được hợp nhất
        int n1 = m - l + 1;
        int n2 = r - m;

        /* Tạo mảng tạm thời */
        int *L = new int[n1];
        int *R = new int[n2];

        /*Sao chép dữ liệu vào mảng tạm thời*/
        for (int i = 0; i < n1; ++i)
            L[i] = arr[l + i];
        for (int j = 0; j < n2; ++j)
            R[j] = arr[m + 1 + j];

        /* Hợp nhất các mảng tạm thời */

        // Index ban đầu của mảng con thứ nhất và thứ hai
        int i = 0, j = 0;

        // Index ban đầu của mảng con hợp nhất
        int k = l;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            }
            else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        /* Sao chép các phần tử còn lại của L[] nếu có */
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }

        /* Sao chép các phần tử còn lại của R[] nếu có */
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

void mergeSort(int arr[],int l,int r){
    if (l < r)
    {
        // Tìm điểm giữa để chia mảng thành hai nửa.
        int m = l + (r - l) / 2;

        // Gọi đệ quy Merge Sort cho mảng bên trái.
        mergeSort(arr, l, m);

        // Gọi đệ quy Merge Sort cho mảng bên phải.
        mergeSort(arr, m + 1, r);

        // Gộp hai mảng đã sắp xếp.
        Merge(arr, l, m, r);
    }
}


int main(){
   int n; cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   mergeSort(arr, 0, n-1);
   for(int i=0;i<n;i++) cout<<arr[i]<<" ";
   // 7
   // 38 27 43 3 9 82 10
}
