#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        scanf("%d", &n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];

        deque<int> dq;
        dq.push_back(b[0]);
        for (int i = 1; i < n; i++)
        {
            int front = dq.front();
            if (b[i] <= front)
            {
                dq.push_front(b[i]);
            }
            else
            {
                dq.push_back(b[i]);
            }
        }
        while (dq.empty() == false)
        {
            int front = dq.front();
            dq.pop_front();

            printf("%d ", front);
        }
        printf("\n");
    }
}
