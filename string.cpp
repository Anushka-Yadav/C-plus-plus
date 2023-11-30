#include<iostream>
using namespace std;
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int i = 0,j = 0;
        for(int k = 0;k<s3.size();k++){
            while(i<s1.length() && j<s2.length()){
                if(s3[k]==s1[i]){
                    i++;
                }
                else if(s3[k]==s2[j]){
                    j++;
                }
                if(i==s1.length() && j==s2.length())return true;
            }
        }
        return false;
    }
};
int main(){
    Solution s;
    cout<<s.isInterleave("aabcc","dbbca","aadbbcbcac")<<endl;
}