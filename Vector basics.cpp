// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
    //define the vector
    vector<int>n;
    
    n.assign(9,1);   //1 will be printed 9 times 
    cout<<"print the elements";
    for(int i=0;i<n.size();i++)
    {
        cout<<n[i]<<" ";
        cout<<endl;
    }
    n.push_back(2);
    int n_size=n.size();
    cout<<"last element :"<<n[n_size-1]<<endl;
    for(int i=0;i<n.size();i++)
    {
        cout<<n[i]<<" ";
        //cout<<endl;
    }
    cout<<endl;

    //pop command
    n.pop_back();
    cout<<"after popping the elements->"<<endl;
    for(int i=0;i<n.size();i++)
    {
        cout<<n[i]<<" ";
        
    }
    cout<<endl;

    //insert command
    n.insert(n.begin(),7);
    cout<<"after inserting the elements->"<<endl;
    for(int i=0;i<n.size();i++)
    {
        cout<<n[i]<<" ";
        //cout<<endl;
    }
    
    
    
}
