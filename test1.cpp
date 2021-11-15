#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // class node{
    //     public:
    //     int data;
    //     node* next;

    //     node(int val){
    //         data=val;
    //         next=NULL:
    //     }
    // };

    // void LastToFirst(node* &head){
    //     if(head==NULL||head->next==NULL) return;
    //     node* last=head;
    //     node* scnd=NULL;
    //     while(last->next!=NULL){
    //         scnd=last;
    //         last=last->next;
    //     }
    //     last->next=head;
    //     scnd->next=NULL;
    //     head=last;
    // }
    int n;
    string s;
    cin >> s;
    int k = 8%4;
    cout << k;
    return 0;
}