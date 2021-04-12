#include<bits/stdc++.h>
using namespace std;
#define ll long long
int val (int b[26], char c){
    int p;
    if(c=='a'){
        p= b[0];
    }if(c=='b'){
        p= b[1];
    }if(c=='c'){
        p= b[2];
    }if(c=='d'){
        p= b[3];
    }if(c=='e'){
        p= b[4];
    }if(c=='f'){
        p= b[5];
    }if(c=='g'){
        p= b[6];
    }if(c=='h'){
        p= b[7];
    }if(c=='i'){
        p= b[8];
    }if(c=='j'){
        p= b[9];
    }if(c=='k'){
        p= b[10];
    }if(c=='l'){
        p= b[11];
    }if(c=='m'){
        p= b[12];
    }if(c=='n'){
        p= b[13];
    }if(c=='o'){
        p= b[14];
    }if(c=='p'){
        p= b[15];
    }if(c=='q'){
        p= b[16];
    }if(c=='r'){
        p= b[17];
    }if(c=='s'){
        p= b[18];
    }if(c=='t'){
        p= b[19];
    }if(c=='u'){
        p= b[20];
    }if(c=='v'){
        p= b[21];
    }if(c=='w'){
        p= b[22];
    }if(c=='x'){
        p= b[23];
    }if(c=='y'){
        p= b[24];
    }if(c=='z'){
        p= b[25];
    }
    return p;
}
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s; 
    cin>>s;
    int k;
    cin>>k;
    int a[26];
    for(int i=0; i<26; i++){
        cin>>a[i];
    }
    int maxVal = INT_MIN;
    for(int i=0; i<26; i++){
        if(a[i]>maxVal){
            maxVal=a[i];
        }
    }
    int result_1=0, result_2=0;
    for(int i=0; i<s.size(); i++){
        char m = s[i];
       result_1 += (i+1)*(val (a,m));
    }
    for(int i=s.size()+1; i<=s.size()+k; i++){
       result_2 += i;
    }
    cout<< result_1 + (result_2*maxVal);
return 0;
}
