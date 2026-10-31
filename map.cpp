#include<iostream>
#include<list>
#include <vector>
#include<queue>
#include<stack>
#include<map>
using namespace std;
int main(){
    map<string,int> m;
    m["laptop"]=40;
    m["tv"]=30;
    m["USB"]=90;
    if(m.find("micro") !=m.end()){

        cout<<"Found";
        }
        else{
            cout<<"Not found";
        }
    
    
};