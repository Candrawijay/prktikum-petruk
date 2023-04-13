#include<bits/stdc++.h>

using namespace std;

bool hasTwoSum(int nums[], int n, int k) {
    bool seen[1000001] = {false};
    for (int i = 0; i < n; i++) {
        int complement = k - nums[i];
        if (seen[complement]) {
            return true;
        }
        seen[nums[i]] = true;
    }
    return false;
}


int main() {
    
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int k ;
    cin >> k;
    bool res = hasTwoSum(nums, n, k);
    cout << res << endl;

    return 0;
}


void deret(int a, int d, int n) {
    int has = (n*(2 * a + (n - 1) * d))/2;
    cout<<has;
}

void baris(int a, int d, int n) {
    int temp = 0;
    for (int i = 1; i <= n; i++) {
        temp = a + (i-1) * d;
        if(temp>=0){
            cout << temp << " ";
        }else{
            cout<<"Not Found";
            exit(0);
        }
    }
    cout << endl;
}



#include <iostream>
using namespace std;
int main(){
    int m, n, a, b, jumlah = 0;

    cin >> m >> n;

    int mtr1[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> mtr1[i][j];
        }
    }

    cin >> a >> b;

    int mtr2[a][b];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin >> mtr2[i][j];
        }
    }

    if(n == a){
        int hasil[m][b];

        for(int i = 0; i < m; i++){
            for(int j = 0; j < b; j++){
                for(int k = 0; k < a; k++){
                    jumlah = jumlah + mtr1[i][k] * mtr2[k][j];
                }
                hasil[i][j] = jumlah;
                jumlah = 0;
            }
        }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < b; j++){
                cout << hasil[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Perkalian matriks tidak dapat dilakukan";
    }
}



void vPtr(void* p, char type)
{
    if (type == 'i')
    {
        for (int i = 0; i < *(int *)p;i++) {
            cout << "ing" << endl;
        }
    }
    else if (type == 'c')
    {
        cout << "ceng " << *(char*)p << endl;
    }
}
