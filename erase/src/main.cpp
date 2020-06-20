#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> myVec;
    int size;
    cin >>size;
    for(int i = 0; i< size;i++){
        int value;
        cin >> value;
        myVec.push_back(value);
    }
    int a,b,c;
    cin >>a >>b >>c;
    myVec.erase(myVec.begin()+a-1);
    myVec.erase(myVec.begin()+b-1, myVec.begin()+c-1);
    cout <<myVec.size() <<endl;
    for(vector<int>::iterator it = myVec.begin();it != myVec.end();it++){
        cout <<*it <<" " <<flush;
    }
    cout <<endl;
    return 0;
}
