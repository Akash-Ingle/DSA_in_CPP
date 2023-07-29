#include <stack>
#include <iostream>
using namespace std;

bool isValid(string s){
    stack<char> st;
    bool ans = true;
    int len = s.length();
    for(int i=0; i<len; i++){
        if((s[i]=='(') || s[i]=='{' || s[i]=='[') st.push(s[i]);
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='(') st.pop();
            else{
                ans= false;
                break;
            }
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{') st.pop();
            else{
                ans= false;
                break;
            }
        }
        else{
            if(!st.empty() && st.top()=='[') st.pop();
            else{
                ans= false;
                break;
            }
        }

    }
    if(!st.empty()) return false;
    return ans;
}

int main(){
    string s = "{([])}";

    if(isValid(s)){
        cout<<"String is valid"<<endl;
    }
    else{
        cout<<"String is not valid"<<endl;
    }

    return 0;
}