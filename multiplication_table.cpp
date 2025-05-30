#include <iostream>
#include <vector>

using namespace std;
// namespace std;
vector<int> multiplication_table(int n);
void read_vector(vector<int> vn, int n);

int main()
{
    int n = 3;
    vector<int> m = multiplication_table(n);
    read_vector(m, n);
}

vector<int> multiplication_table(int n)
{
    vector<int> vt;

    for (int i = 1; i <= n; i++)
    {
        int a = i;
        for (int x = 1; x <= n; x++)
        {

            vt.push_back(a * x);
        }
    }

    return vt;
}

void read_vector(vector<int> vn, int n)
{

    for (int i = 0; i < vn.size(); i++)
    {
        if (i % n == 0 && i != 0)
        {
            cout << "\n";
        }
        cout << vn.at(i);

        if ((i + 1) % n != 0)
        {
            cout << " ";
        }
    }
    cout << endl;
}