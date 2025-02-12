#include<bits/stdc++.h>
using namespace std;

#define loop(n) for(int i=0;i<n;i++)

vector<int> merge_sort(vector<int> a)
{
    if(a.size()<=1)
        return a;

    int mid = a.size()/2;

    vector<int> left, right;
    for(int i=0;i<mid;i++)
        left.push_back(a[i]);

    for(int i= mid;i<a.size();i++)
        right.push_back(a[i]);

    vector<int> sorted_left = merge_sort(left);
    vector<int> sorted_right = merge_sort(right);

    vector<int> sorted;

    int idx1=0, idx2=0;

    for(int i=0;i<a.size();i++)
    {
        if(idx1 == sorted_left.size())
        {
            sorted.push_back(sorted_right[idx2]);
            idx2++;
        }

        else if(idx2 == sorted_right.size())
        {
            sorted.push_back(sorted_left[idx1]);
            idx1++;
        }

        else if(sorted_left[idx1] < sorted_right[idx2])
        {
            sorted.push_back(sorted_left[idx1]);
            idx1++;
        }

        else
        {
            sorted.push_back(sorted_right[idx2]);
            idx2++;
        }
    }


    return sorted;
}

int main()
{

    vector<int> v;
    int n;
    cin>>n;

    loop(n)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    vector<int> ans = merge_sort(v);

    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
}
