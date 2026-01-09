#include<iostream>
#include<vector>
using namespace std;

void print_Subsets(vector<int> &arr, vector<int> &ans, int i){
    if(i == arr.size()){
        for(int val : ans){
            cout << val << " ";
            
        }
        cout << endl;
        return;
    }

    //include
    ans.push_back(arr[i]);
    print_Subsets(arr,ans,i+1);

    //backtracking
    ans.pop_back();

    //exclude 
    print_Subsets(arr,ans,i+1);

}
 
int main()
{
    vector<int> arr = {1,2,3};
    vector<int> ans;

    print_Subsets(arr,ans,0);
    return 0;
}