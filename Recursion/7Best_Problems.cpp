#include <iostream>
#include <string>
using namespace std;

void reverse(string s){
    if(s.length()==0) return;
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

void replacePi(string s){
    if(s.length()==0) return;
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    } 
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }

}

void towerOfHanoi(int n, char src, char dest, char helper){
    if(n==0) return;
    towerOfHanoi(n-1, src, helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1, helper, dest, src);
}

string removeConsecutiveDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = removeConsecutiveDup(s.substr(1));
    if(ch==ans[0]) return ans;
    return (ch+ans);
}

string moveAllX(string s){
    if(s.length()==0) return ""; // Base Case
    char ch = s[0];
    string ans = moveAllX(s.substr(1));
    if(ch=='x') return ans + ch;
    return ch+ans;
}

void subsequence(string s ,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros = s.substr(1);
    subsequence(ros,ans);
    subsequence(ros,ans+ch);
}

void subsequenceASCII(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code =ch;
    string ros = s.substr(1);
    subsequenceASCII(ros,ans);
    subsequenceASCII(ros,ans+ch);
    subsequenceASCII(ros,ans+ to_string(code));
}

string keypadArr[] = {"","","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};
void keypad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string code = keypadArr[ch -'0'];
    string ros = s.substr(1);
    for(int i=0; i<code.length(); i++){
        keypad(ros, ans+code[i]);
    }

}

int main(){
    //reverse("binod");
    //replacePi("pippppiiiipi");
    //towerOfHanoi(3, 'A', 'C', 'B');
    //cout<<removeConsecutiveDup("aaabbcd")<<endl;
    //cout<<moveAllX("axxbdxcefxhix");
    // subsequence("ABC", "");
    // subsequenceASCII("AB","");
    keypad("23", "");
    

    return 0;
}
