#include <bits/stdc++.h>
using namespace std;

int findNoOfDish(int Arr[], int N)
{
    unordered_map<int, int> umap;

    for (int i = 0; i < N; i++)
    {
        if (umap.find(Arr[i]) != umap.end())
        {
            umap[Arr[i]]++;
        }
        else
        {
            umap[Arr[i]] = 1;
        }
    }

    vector < int > res;

    for(auto ch : umap){
        res.push_back(ch.second);
    }

    sort(res.begin(), res.end());

    int count = 0;
    for(int i = 0; i < res.size()-1; i++){
        if(res[i+1] != 2 * res[i]){
            continue;
        }
        count++;
    }

}

int main()
{
    int N;
    cin >> N;

    int Arr[N];
    cout << "Enter the type of dishes " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }

    int ans = findNoOfDish(Arr, N);

    cout << ans << endl;
}