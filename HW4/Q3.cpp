#include <iostream>

using namespace std;

int main()
{
    int m1[4][3];
    int m2[3][2];
    int ans[4][2];

    cout << "Write a 4x3 integer matrix and a 3x2 integer matrix:" << endl;
    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> m1[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> m2[i][j];
        }
    }

    /* cout << "M1" << endl;
    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << m1[i][j] << ",";
        }
        cout << endl;
    }

    cout << "M2" << endl;
    
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout <<  m2[i][j] << ",";
        }
        cout << endl;
    } */

    for(int i = 0; i < 4; i++ )
    {
        for(int j = 0; j < 2; j++)
        {
            ans[i][j] = 0;
        }
    }
    for(int i = 0; i < 4; i++ )
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << ans[i][j] << " " ;
        }
        
        cout << endl;
    }
}

