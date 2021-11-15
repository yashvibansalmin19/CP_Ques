#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<a[n/2];

    return 0;
}