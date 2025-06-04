#include <iostream>
#include <vector>
using namespace std;
float find_uniq(vector<float> &v);

int main()
{
    vector<float> n = {1, 2.5,1, 1,1, 1,1, 1,1, 1,1, 1,1};
    cout << find_uniq(n) << "\n"; // --> 2
}

float find_uniq(vector<float> &v)
{
    float f = 0;
    if (v.at(0) == v.at(1))
    {
        f = v.at(0);
        for (float j : v)
        {
            if (j != f)
            {
                return j;
            }
        }
    }
   else if(v.at(0) == v.at(2))
    {
        return v.at(1);
    }
    else
    {
        return v.at(0);
    }
    return f;
}