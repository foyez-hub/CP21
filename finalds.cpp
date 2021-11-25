#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int left, int right)
{
    int pivot = a[right];
    int i = left - 1;
    for (int j = left; j <= right - 1; j++)
    {
        if (a[j] >= pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[right]);
    return i + 1;
}

void quickSort(int a[], int left, int right)
{
    if (left < right)
    {
        int pivot_index = partition(a, left, right);
        quickSort(a, left, pivot_index);
        quickSort(a, pivot_index + 1, right);
    }
}

int main()
{
    int a[] = {8, 3, 6, 3, 2, 3, 2, 1};
    int len = 8;
    quickSort(a, 0, len - 1);

    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// int partition(int a[],int left,int right){
//     int pivot=a[right];
//     int i=left;
//     for (int j = left; j <=right; j++)
//     {
//        if(a[j]>pivot){
//            swap(a[i],a[j]);
//            i++;
//        }
//     }
//     swap(a[i],a[right]);
//     return i;

// }
// void quicksort(int a[],int left,int right){
//     if(left<right){
//         int pivot_index=partition(a,left,right);
//         quicksort(a,left,pivot_index);
//         quicksort(a,pivot_index+1,right);
//     }
// }

//  Merge Sort
// void merge1(int a[],int left,int mid,int right){

//     int len1=mid-left+1;
//     int len2=right-mid;
//     int* L_arr = (int*)malloc((len1+1)*sizeof(int));
//     int* R_arr= (int*)malloc((len2+1)*sizeof(int));
//     for (int i = 0,j=left; i < len1; i++,j++)
//     {
//         L_arr[i]=a[j];
//     }
//      for (int i = 0,j=mid+1; i < len2; i++,j++)
//     {
//         R_arr[i]=a[j];
//     }
//     L_arr[len1]=999999;
//     R_arr[len2]=999999;

//         int l=0;
//         int r=0;

//     for (int i = left; i <=right ; i++)
//     {
//        if(L_arr[l]<R_arr[r]){
//            a[i]=L_arr[l];
//            l++;
//        }
//        else{
//              a[i]=R_arr[r];
//              r++;

//        }
//     }

// }

// void mergeSort(int a[],int left,int right){
//     if(left<right){
//         int mid=(left+right)/2;
//         mergeSort(a,left,mid);
//         mergeSort(a,mid+1,right);
//         merge1(a,left,mid,right);
//     }
// }

//bubbleSort

// void bubbleSort(int a[],int len){
//     for (int i = 0; i < len-1; i++)
//     {
//         for (int j = 0; j <len-i-1; j++)
//         {
//             if(a[j]>a[j+1]){
//                 swap(a[j],a[j+1]);
//             }
//         }

//     }

// }

//selectionSort
// int const infi=1000000;
// void selectionSort(int a[],int len){

//     for (int i = 0; i < len-1; i++)
//     {
//         int M=-infi;
//         int index=-1;
//         for (int j = 0; j <=len-i-1; j++)
//         {
//             if(a[j]>M){
//                 M=a[j];
//                 index=j;
//             }
//         }
//         swap(a[index],a[len-i-1]);

//     }

// }
