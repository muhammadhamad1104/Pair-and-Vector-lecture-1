#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
//#include<bits/stdc++.h>
using namespace std;
/*-------------------------  PAIR BASIC -----------------------------*/
int main() {
    //pair<int, string> p(2,"abc");
    pair<int, string> p;
    p = make_pair(2, "abc");
    cout << p.first << " " << p.second << endl;
    pair<int, string> p1 = p;
    p1.first = 3;
    p1.second = "dcb";
    cout << p.first << " " << p.second << endl;
    pair<int, string>& p2 = p;
    p2.first = 3;
    p2.second = "dcb";
    cout << p.first << " " << p.second << endl;
    pair<int, int> p_array[3];
    p_array[0] = { 1,2 };
    p_array[1] = { 3,4 };
    p_array[2] = { 5,6 };
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; i++) {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
}

/*-------------------------  VECTOR BASIC -----------------------------*/


   /*template<class T>
void PrintVec(vector<T> &v) {
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    //v.push_back(4);
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        PrintVec(v);
        int x;
        cin >> x;
        v.push_back(x);
    }
    PrintVec(v);
    vector<string> s;
    int m;
    cout << "Enter the size of vector : ";
    cin >> m;
    for (int i = 0; i < m; i++) {
        PrintVec(s);
        string x;
        cin >> x;
        s.push_back(x);
    }
    PrintVec(s);*/
    //vector<int> v(5,3);
    /*vector<int> v(5);
    v.push_back(7);
    PrintVec(v);
    PrintVec(v);
    v.push_back(2);
    PrintVec(v);
    v.pop_back();
    PrintVec(v);
    PrintVec(v);
    PrintVec(v);*/
    //}