#include<iostream>
using namespace std;

class hospital
{
public:
    char name[50];
    char doa[10];
    char dod[10];
    char disease[50];
    
    void input()
    {
        cout<<"\nEnter the name of the patient: ";
        cin>>name;
        cout<<"\nEnter the date of admission: ";
        cin>>doa;
        cout<<"\nEnter the disease: ";
        cin>>disease;
        cout<<"\nEnter the date of discharge: ";
        cin>>dod;
        
    }
    
    void display()
    {
        cout<<"\nPatient name: "<<name<<endl;
        
        
    }
    
};

class age: public hospital
{
public:
    int a;
    void input_age()
    {
        cout<<"\nEnter the age: ";
        cin>>a;
    }
    
    void pediatric()
    {
        if(a <= 12)
        {
            cout<<"\nNAME:"<<name;
            cout<<"\nDATE OF ADMISSION:"<<doa;
            cout<<"\nDISEASE:"<<disease;
            cout<<"\nDATE OF DISCHARGE"<<dod;
            cout<<"\nAGE:"<<a;
        }
    }
};

int main()
{

    age s[10];
    int count;
    int i;
    cout<<"\nenter the no. of patients";
    cin>>count;
    for( i=1;i<=count;i++)
    {
       s[i].input();
       s[i].input_age();
    }
    cout<<"\n\nLIST OF PATIENTS\n";
    for(i=1;i<=count;i++)
    {
      s[i].display();
    }
    cout<<"\nPEDIATRIC PATIENTS\n";
    for(i=1;i<=count;i++)
    {
      s[i].pediatric();
    }
    return 0;
}



