#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string parent,child;
    getline(cin,parent);
    char opt;
    cin>>opt;
    if(opt=='N'){
        cout<<"Total Members:1\n";
        cout<<"COMMISSION DETAILS"<<endl;
        cout<<parent<<": 250 INR";
        return 0;
    }
    cin.ignore();
    getline(cin,child);
    stringstream children(child);
    string token;
    int child_count=0;
    while(getline(children,token,',')){
        // cout<<token<<endl;
        child_count++;
    }
    // cout<<child_count<<endl;
    int parent_cm = ((5000*child_count)*10)/100;
    int child_cm = (5000*5)/100;
    cout<<"Total Members:"<<child_count+1<<endl;
    cout<<"COMISSION DETAILS\n";
    cout<<parent<<": "<<parent_cm<<" INR"<<endl;
    stringstream children2(child);
    string token2;
    while(getline(children2,token2,',')){
        int start = token2.find_first_not_of(" ");
        int end = token2.find_last_not_of(" ");
        if(start!=string::npos){
            token2 = token2.substr(start,end-start+1);
        }else{
            token2="";
        }

        cout<<token2<<":"<<child_cm<<endl;
    }
    // cout<<parent_cm<<endl<<child_cm;

}