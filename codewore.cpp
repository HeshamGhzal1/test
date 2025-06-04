#include <iostream>
#include <vector>
using namespace std;
float find_uniq(vector<float> &v);

int main()
{
    vector<float> n = {1, 2.5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    cout << find_uniq(n) << "\n"; // --> 2
}
// ================================================
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
    else if (v.at(0) == v.at(2))
    {
        return v.at(1);
    }
    else
    {
        return v.at(0);
    }
    return f;
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
// ================================================

void read_vector(vector<string> vs)
{
    for (string s : vs)
    {
        cout << s << "\n";
    }
}

short alphabet_to_num(char c)
{
    char alpha_arr[]{' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    short char_num = 0;
    for (int i = 0; i < sizeof(alpha_arr); i++)
    {
        if (c == alpha_arr[i])
            char_num = i;
    }

    return char_num;
}

vector<string> split_ech_word_in_string(string s)
{
    string separator = " ";
    vector<string> vword;
    while (s.find(separator) != string::npos)
    {
        string word = s.substr(0, s.find(separator));
        s = s.substr(s.find(separator) + separator.size());
        if (!(word.empty()))
            vword.push_back(word);
    }

    if (!(s.empty()) && s.find(separator) == string::npos)
    {
        vword.push_back(s);
    }

    return vword;
}

int equivalent_word_numer(string word)
{
    int score = 0;
    for (char c : word)
        score += alphabet_to_num(c);
    return score;
}

string highestScoringWord(string &str)
{
    int word_score = 0;
    string result;
    vector<string> vs = split_ech_word_in_string(str);
    for (string s : vs)
    {
        int score = equivalent_word_numer(s);
        if (score > word_score)
        {
            word_score = score;
            result = s;
        }
    }

    return result;
}

void read_vector(vector<string> vs)
{
    for (string s : vs)
    {
        cout << s << "\n";
    }
}

short alphabet_to_num(char c)
{
    char alpha_arr[]{' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    short char_num = 0;
    for (int i = 0; i < sizeof(alpha_arr); i++)
    {
        if (c == alpha_arr[i])
            char_num = i;
    }

    return char_num;
}

vector<string> split_ech_word_in_string(string s)
{
    string separator = " ";
    vector<string> vword;
    while (s.find(separator) != string::npos)
    {
        string word = s.substr(0, s.find(separator));
        s = s.substr(s.find(separator) + separator.size());
        if (!(word.empty()))
            vword.push_back(word);
    }

    if (!(s.empty()) && s.find(separator) == string::npos)
    {
        vword.push_back(s);
    }

    return vword;
}

int equivalent_word_numer(string word)
{
    int score = 0;
    for (char c : word)
        score += alphabet_to_num(c);
    return score;
}

string highestScoringWord(string &str)
{
    int word_score = 0;
    string result;
    vector<string> vs = split_ech_word_in_string(str);
    for (string s : vs)
    {
        int score = equivalent_word_numer(s);
        if (score > word_score)
        {
            word_score = score;
            result = s;
        }
    }

    return result;
}
// ================================================

