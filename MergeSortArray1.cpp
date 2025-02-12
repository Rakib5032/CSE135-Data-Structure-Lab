#include<bits/stdc++.h>
using namespace std;
#define loop(n) for(int i=0;i<n;i++)

void merge(int ara[], int left[], int left_size, int right[], int right_size)
{
    int idx =0, idx1=0, idx2=0;
    while(idx1<left_size && idx2<right_size)
    {
        if(left[idx1]<right[idx2])
        {
            ara[idx] = left[idx1];
            idx1++;
        }
        else
        {
            ara[idx] = right[idx2];
            idx2++;
        }
        idx++;
    }

    while(idx1<left_size)
    {
        ara[idx] = left[idx1];
        idx1++;
        idx++;
    }

    while(idx2<right_size)
    {
        ara[idx] = right[idx2];
        idx2++;
        idx++;
    }

}

void merge_sort(int ara[], int size)
{
    if(size<=1)
        return ;
    int mid = size/2;

    int left [mid];
    int right [size-mid];

    for(int i=0;i<mid;i++)
        left[i] = ara[i];
    for(int i=mid;i<size;i++)
        right[i-mid] = ara[i];

    merge_sort(left, mid);
    merge_sort(right, size-mid);

    merge(ara, left, mid, right, size-mid);
}

int main()
{
    int n;
    cin>>n;
    int ara[n];

    loop(n) cin>>ara[i];

    merge_sort(ara, n);

    loop(n) cout<<ara[i]<<" ";

}
