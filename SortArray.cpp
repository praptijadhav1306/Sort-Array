#include <bits/stdc++.h>
using namespace std;

vector<int> sortArray(vector<int> &A)
{
    vector<int> even;
    vector<int> odd;

    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            even.push_back(A[i]);
        }
        else
        {
            odd.push_back(A[i]);
        }
    }

    even.insert(even.end(), odd.begin(), odd.end());
    return even;
}
void printVector(vector<int> ans)
{

    for (auto x : ans)
    {
        cout << x << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> v = {2, 1, 3, 4};
    vector<int> ans = sortArray(v);
    printVector(ans);
    return 0;
}