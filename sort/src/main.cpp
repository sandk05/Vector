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
    cin >> size;
    for(int i = 0; i<size;i++){
        int value;
        cin >> value;
        myVec.push_back(value);
    }
    sort(myVec.begin(),myVec.end());
    for(int i =0; i< myVec.size();i++){
        cout <<myVec[i] <<" " <<flush;
    }
    cout <<endl;
    return 0;
}
