#include<iostream>
#include<fstream>
using namespace std;
int n,S;
void Input(){
    fstream fp("input.text");
    fp>>n;
    fp.close();
}
void Run(){
    fstream fp("output.text");
    for (int i=1;i<=n/2;i++){
        if(i*i<=n){
            fp<<i<<" ";
        }
    }
    fp.close();
}
int main(){
    Input();
    Run();
}
//Nguy?n Ðang Khoa 22CN2 2255010117
