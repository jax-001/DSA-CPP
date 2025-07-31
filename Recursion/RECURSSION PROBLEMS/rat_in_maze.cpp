//  https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printAns(vector < string > &ans){
    cout << endl << endl;
    for(auto i : ans){
        cout << i << endl;
    }
    return ;
}
void take_input(vector < vector < int >> &nums){
    cout << "Fill the maze with 1 and 0: " << endl;
    for(int i = 0; i < nums.size() ; i++){
        for(int j = 0; j<nums.size() ; j++){
            cin >> nums[i][j];
        }
    }
    return;
}

bool isPossible(vector < vector < int >> &nums, int newr, int newc, vector < vector < bool >> &visited){
    if( (newr >= 0 && newr < nums.size() ) && ( newc >= 0 && newc < nums[0].size() ) && ( visited[newr][newc] == false ) && ( nums[newr][newc] == 1 ) ){
        return true;
    }
    return false;
}

void solve(vector < vector < int >> &nums, int r, int c, string &output, vector < string > &ans, vector < vector < bool >> &visited){
    if( (r == nums.size() - 1) && (c == nums[0].size() - 1) ){
        ans.push_back(output);
        return;
    }

    visited[r][c] = true;

    // for down...
    int newr = r + 1;
    int newc = c;
    if(isPossible(nums, newr, newc, visited)){
        output.push_back('D');
        solve(nums, newr, newc, output, ans, visited);
        output.pop_back();
    }

    // for right
    newr = r ;
    newc = c+1;
    if(isPossible(nums, newr, newc, visited)){
        output.push_back('R');
        solve(nums, newr, newc, output, ans, visited);
        output.pop_back();
    }

    // for up
    newr = r - 1;
    newc = c;
    if(isPossible(nums, newr, newc, visited)){
        output.push_back('U');
        solve(nums, newr, newc, output, ans, visited);
        output.pop_back();
    }

    // for left
    newr = r ;
    newc = c - 1;
    if(isPossible(nums, newr, newc, visited)){
        output.push_back('L');
        solve(nums, newr, newc, output, ans, visited);
        output.pop_back();
    }

    visited[r][c] = false;

    return ;
}
int main(){
    int n;
    cout << "Enter the size of the maze: " ;
    cin >> n;
    vector < vector < int >> nums(n, vector < int > (n));
    vector < string > ans;
    take_input(nums);

    if(nums[0][0] == 0){
        ans.push_back("");
        printAns(ans);
        return 0;
    }

    vector < vector < bool >> visited(nums.size() , vector < bool > (nums.size(), false));
    string output = "";
    int x = 0, y = 0;

    solve(nums, x, y, output, ans, visited);

    printAns(ans);
    return 0;
}