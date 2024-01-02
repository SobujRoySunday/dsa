#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mat[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    // Solution
    for(int i = 0;i < n-1;i++){
        for(int j = i+1;j < n;j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    for(int i = 0;i<n;i++){
        reverse(mat[i].begin(), mat[i].end());
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}