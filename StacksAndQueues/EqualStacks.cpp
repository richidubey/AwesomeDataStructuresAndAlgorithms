https://www.hackerrank.com/challenges/equal-stacks/problem

#include <bits/stdc++.h>
#include <stack>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the equalStacks function below.
 */
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    stack<int> s1,s2,s3;
    int sum=0,common;
    for (auto it = h1.rbegin(); it != h1.rend(); ++it)
    {
        sum+=*it;
        s1.push(sum);
    }
    sum=0;
    for (auto it = h2.rbegin(); it != h2.rend(); ++it)
    {
        sum+=*it;
        s2.push(sum);
    }
    sum=0;
    for (auto it = h3.rbegin(); it != h3.rend(); ++it)
    {
        sum+=*it;
        s3.push(sum);
    }
    // while(!(s1.empty()))
    // {
    //     cout<<s1.top()<<endl;
    //     s1.pop();
    // }
    // return 1;
    while(!(s1.empty()||s2.empty()||s3.empty()))
    {
        if(s1.top()==s2.top() && s1.top()==s3.top())
        {
            common=s1.top();
            return common;
        }
        else
        {
            if(s1.top()>=s2.top() && s1.top()>=s3.top())
            {
                s1.pop();
            }
            else if(s2.top()>=s1.top() && s2.top()>=s3.top())
            {
                s2.pop();
            }
            else
                s3.pop();
        }
    }
    return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n1N2N3_temp;
    getline(cin, n1N2N3_temp);

    vector<string> n1N2N3 = split_string(n1N2N3_temp);

    int n1 = stoi(n1N2N3[0]);

    int n2 = stoi(n1N2N3[1]);

    int n3 = stoi(n1N2N3[2]);

    string h1_temp_temp;
    getline(cin, h1_temp_temp);

    vector<string> h1_temp = split_string(h1_temp_temp);

    vector<int> h1(n1);

    for (int h1_itr = 0; h1_itr < n1; h1_itr++) {
        int h1_item = stoi(h1_temp[h1_itr]);

        h1[h1_itr] = h1_item;
    }

    string h2_temp_temp;
    getline(cin, h2_temp_temp);

    vector<string> h2_temp = split_string(h2_temp_temp);

    vector<int> h2(n2);

    for (int h2_itr = 0; h2_itr < n2; h2_itr++) {
        int h2_item = stoi(h2_temp[h2_itr]);

        h2[h2_itr] = h2_item;
    }

    string h3_temp_temp;
    getline(cin, h3_temp_temp);

    vector<string> h3_temp = split_string(h3_temp_temp);

    vector<int> h3(n3);

    for (int h3_itr = 0; h3_itr < n3; h3_itr++) {
        int h3_item = stoi(h3_temp[h3_itr]);

        h3[h3_itr] = h3_item;
    }

    int result = equalStacks(h1, h2, h3);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
