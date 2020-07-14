#include<iostream>
#include<string>
using namespace std;


int test(string a);
int main()
{
    string a = "The Quick Brown Fox Jumped Over The Lazy Dog";
    cout << test(a) << endl;  
    return 0;
}


int test(string a)
{
    int count = 0;
    for (int i = 0; i<a.length();i++)
        {
            char find_a = a.at(i);
            if (find_a == 'a'|| find_a == 'A')
            {
                count++;
            }
        }
    return count;
}
