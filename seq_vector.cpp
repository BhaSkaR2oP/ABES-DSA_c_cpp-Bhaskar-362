#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Enter the size of vector1:"<<v.size()<<endl;
    cout<<"Enter the capacity of vector1:"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Enter the size of vector1:"<<v.size()<<endl;
    cout<<"Enter the capacity of vector1:"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Enter the size of vector1:"<<v.size()<<endl;
    cout<<"Enter the capacity of vector1:"<<v.capacity()<<endl;

    v.push_back(6);
    cout<<"Enter the size of vector1:"<<v.size()<<endl;
    cout<<"Enter the capacity of vector1:"<<v.capacity()<<endl;

    v.push_back(8);
    cout<<"Enter the size of vector1:"<<v.size()<<endl;
    cout<<"Enter the capacity of vector1:"<<v.capacity()<<endl;

    v.push_back(10);
    cout<<"Enter the size of vector1:"<<v.size()<<endl;
    cout<<"Enter the capacity of vector1:"<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++)
    {
        // cascade >> for input and << for output   
        cout<<v[i]<<" ";   // v[i] gives value
        cout<<v.at(i)<<" ";  // v.at(i) gives value at index i

    }
    cout<<endl;
        v.pop_back(); // removes last element
    for(auto value:v){
        cout<<value<<" ";
    }
    cout<<endl;

    cout<<"Front element: "<<v.front()<<endl; // front() gives first element
    cout<<"Last element: "<<v.back()<<endl; // back() gives last element

    v.insert(v.begin(),2); // insert 2 at index 0
    for(auto value:v){
        cout<<value<<" ";
    }
    cout<<endl;
    
    v.insert(v.begin()+2,4); // insert 4 at index 2
    for(auto value:v){
        cout<<value<<" ";
    }
    cout<<endl;
    
    v.insert(v.end(),11); // insert 11 at last index
    for(auto value:v){
        cout<<value<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+4,3,7); // insert 3 7's from index 4
    for(auto value:v){
        cout<<value<<" ";
    }
    cout<<endl;

    v.erase(v.begin()+4); // erase element at index 4
    for(auto value:v){
        cout<<value<<" ";
    }
    cout<<endl;

    v.erase(v.begin()+2,v.begin()+5); // erase element from index 2 to 4
    for(auto value:v){
        cout<<value<<" ";
    }
    cout<<endl;

    vector<int>v1={2,5,7,8,9,10};
    for(auto value:v1){
        cout<<value<<" ";

    }
    cout<<endl;

    vector<int>v2(3,6);  //
    for(auto value:v2){
        cout<<value<<" ";
    }
    cout<<endl;

    vector<int>::iterator itr;
    for(auto itr=v.begin(); itr!=v.end(); itr++){
        cout<<*itr<<" "; // *itr gives value at itr
    }
    cout<<endl;

    vector<int> :: reverse_iterator ritr;
    for(auto ritr=v.rbegin(); ritr!=v.rend(); ritr++){
        cout<<*ritr<<" "; // *ritr gives value at ritr
    }
    cout<<endl;


}