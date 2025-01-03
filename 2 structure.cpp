#include<iostream>
using namespace std;
struct info
{ 
    string name;
    int roll;
    
    void display(info a)
    {
        cout<<a.name<<a.roll;
    }
  
};
int main()
{
    info p={"ajay",2};
    p.display(p);

}