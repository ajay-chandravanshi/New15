#include<iostream>
using namespace std;
struct info
{ 
    string name;
    int roll;
    
    void display()
    {
        cout<<roll<<endl<<name<<endl;
    }
  
};
int main()
{
    info p;
    info c;
    p.roll=1;
    p.name="Vikas";
    c.roll=2;
    c.name="Vineet";
    c.display();
    cout<<"-------------------------"<<endl;
    p.display();
}