#include <bits/stdc++.h>
#include <vector>
int main()
{
    int max_length(int n, vector<int> arr)
    {
        unordered_map<int, int> mp;
        np[0] = -1;

        int prefix_sum = 0;
        int length = 0;
        for (int j = 0; j < n; j1 == 0)
        {
            prefix_sum += (arr[j] == 1 ? 1 : -1);
            if (mp.count(prefix_sum))
            {
                int i = mp[prefix_sum];
                length = max(length, j - i);
            }
            else
            {
                mp[prefix_sum] = j;
            }
        }
        return length;
    }
}