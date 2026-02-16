#include<iostream>
#include<string>
using namespace std;
 
int main() {
    int test;
    cin >> test;
    int lenstring;
    string mystring;
    int min, max;
    while(test--)
    {
        cin >> lenstring >> mystring;
        min = 0;
        max = 0;
        int hasharray[26] = {0};
        for(int i = 0; i<lenstring; i++)
        {
            char temp = mystring[i];
            hasharray[temp - 97]++;
        }
        bool check = true;
        for(int i = 0; i<26; i++)
        {
            if(hasharray[i] >= hasharray[max])
            {
                max = i;
            }
            if(check)
            {
                if(hasharray[i] > 0)
                {
                    min = i;
                    check = false;
                }
            }
            else
            {
                if(hasharray[i] < hasharray[min] && hasharray[i] > 0)
                {
                    min = i;
                }
            }
        }
        int stringidx = 0;
        while(mystring[stringidx] != (min+97))
            stringidx++;
        int anotheridx = 0;
        while(mystring[anotheridx] != (max+97))
            anotheridx++;
        mystring[stringidx] = mystring[anotheridx];
        cout << mystring << endl;
    }
    return 0;
}
