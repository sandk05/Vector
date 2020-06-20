#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n ,q;
    cin >>n >> q;
    vector< vector<int> > Matrix(n);
    for(int i = 0; i< n ;i++){
        int count;
        cin >> count;
        for(int j = 0;j<count;j++)
        {            
            int val;
            cin >>val;
            Matrix[i].push_back(val);
        }
    }
    int r,c;
    for(int i = 0; i<q;i++){
        cin >>r >>c;
        //cout <<r <<" " <<c <<endl;
        cout <<Matrix[r][c] <<endl;
    }
    return 0;
}
