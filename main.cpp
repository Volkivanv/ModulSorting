#include <iostream>
#include <vector>
using namespace std;

int position(vector<int>vec,int n){
    int a = 0;
    int b = vec.size()-1;
    int m;
    if (vec[a] >= n) return 0;
    if (vec[b] <= n) return vec.size();
    while(b - a > 1){
        m = (a+b)/2;

        if(vec[m] <= n){
            a = m;
        } else b = m;
        // cout << a <<" "<< b << endl;
        // m = (a+b)/2;
    }
    return a+1;

}


int main() {
    vector<int>vec = {-100,-50, -5, 0, 1, 10, 15,58,100};
    vector<int>vec1(vec.size());
    int n;
    n = position(vec,0);
    int j = n-1;
    int k = n;
    //cout << n << endl;
    for(int i = 0; i < vec.size(); i++){
        if(((abs(vec[j]) < abs(vec[k]))&&(j > -1))||(k == vec.size())){
            vec1[i]=vec[j];
            j--;
            //cout << vec[j] << endl;
        }else{
            vec1[i]=vec[k];
            k++;
        }
       // cout << j << " " << k << endl;


    }
    for(int i = 0; i < vec1.size(); i++){
        cout << vec1[i] << " ";
    }


}
