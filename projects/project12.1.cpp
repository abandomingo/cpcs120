#include<iostream>
using namespace std;
struct PersonalInfo
{
   string name,address,city;
};
struct Student
{
   int studentID;
   PersonalInfo pData;
   short year;
   double gpa;
};
/* array of structure is passed as argument */
void student_info(Student s[])
{
   int i;
   /* input data in array */
   for(i=0;i<2;i++)
   {
       cout<<endl<<"Enter student id : ";
       cin>>s[i].studentID;
       cin.ignore();
       cout<<"Enter name of the student :";
       fflush(stdin);
       getline(cin,s[i].pData.name);
       cout<<"Enter address : ";
       fflush(stdin);
       getline(cin,s[i].pData.address);
       cout<<"Enter city : ";
       fflush(stdin);
       getline(cin,s[i].pData.city);
       cout<<"Enter year : ";
       cin>>s[i].year;
       cout<<"Enter gpa : ";
       cin>>s[i].gpa;
   }
}
/* array of structure is passed as argument */
void display_info(Student s[])
{
   int i;
   /* display details */
   for(i=0;i<2;i++)
   {
       cout<<endl<<"Student "<<(i+1)<<" : "<<endl;
       cout<<"Id : "<<s[i].studentID<<endl;
       cout<<"Name :"<<s[i].pData.name<<endl;
       cout<<"Student Address : "<<s[i].pData.address<<endl;
       cout<<"City : "<<s[i].pData.city<<endl;
       cout<<"Year : "<<s[i].year<<endl;
   cout<<"Gpa : "<<s[i].gpa<<endl;
   cout<<endl;
   }
}
/* array of structure is passed as argument */
void linear_search(Student s[])
{
   string nm;
   int i,c=0;
   /* console input name of student */
   cout<<endl<<"Enter the student name : ";
      getline(cin,nm);
      cout << nm;
   for(i=0;i<2;i++)
   {
       if(s[i].pData.name==nm)
       {
           cout<<endl<<"Student of name " <<nm<<" is present with following details "<<endl<<endl;
           cout<<"Id : "<<s[i].studentID<<endl;
       cout<<"Name :"<<s[i].pData.name<<endl;
       cout<<"Student Address : "<<s[i].pData.address<<endl;
       cout<<"City : "<<s[i].pData.city<<endl;
       cout<<"Year : "<<s[i].year<<endl;
   cout<<"Gpa : "<<s[i].gpa<<endl;
   break;
       }
       else
       {
           c++;
       }
   }
   if(c==2)
   {
       cout<<endl<<"No such record found for student "<<nm<<endl;
   }
}
/* bubble sort */
/* array of structure is passed as argument */
void bubble_sort(Student s[])
{
   int i,j,l;
   string t;
   double d;
   /* sorting */
   for(i=0;i<2;i++)
   {
       for(j=i+1;j<2;j++)
       {
           if(s[i].pData.city>s[j].pData.city)
           {
               t=s[i].pData.city;
               s[i].pData.city=s[j].pData.city;
               s[j].pData.city=t;
              
               t=s[i].pData.name;
               s[i].pData.name=s[j].pData.name;
               s[j].pData.name=t;
              
               t=s[i].pData.address;
               s[i].pData.address=s[j].pData.address;
               s[j].pData.address=t;
              
               l=s[i].studentID;
               s[i].studentID=s[j].studentID;
               s[j].studentID=l;
              
               l=s[i].year;
               s[i].year=s[j].year;
               s[j].year=l;
              
               d=s[i].gpa;
               s[i].gpa=s[j].gpa;
               s[j].gpa=d;
           }
       }
   }
}
/* array of structure is passed as argument */
void binary_search(Student s[])
{
int l,r,n,m,result;
string ct;
n=2;
l=0;
r=n-1;
/* console input of city */
cout<<endl<<"Enter the city to be searched : ";
fflush(stdin);
   getline(cin,ct);
while (l<=r)
{
m=l+(r-l)/2;
if (ct == s[m].pData.city)
result = 0;
if (result== 0)
{
   cout<<endl<<"Student of city " <<ct<<" is present with following details "<<endl<<endl;
               cout<<"Id : "<<s[m].studentID<<endl;
       cout<<"Name :"<<s[m].pData.name<<endl;
       cout<<"Student Address : "<<s[m].pData.address<<endl;
       cout<<"City : "<<s[m].pData.city<<endl;
       cout<<"Year : "<<s[m].year<<endl;
   cout<<"Gpa : "<<s[m].gpa<<endl;
   break;
           }
if (ct > s[m].pData.city)
{
l = m + 1;  
           }
else
{
   r = m - 1;
   }
}
if(result!=0)
{
    cout<<endl<<"No such record found for student for city "<<ct<<endl;
   }
}
int main()
{
   struct Student s[2];
   cout<<endl<<"Enter the student details" <<endl;
   /* enter data in array */
   student_info(s);
   cout<<endl<<"All students details "<<endl;
   /* display student info */
   display_info(s);
   /* here linear search also done in function */
   linear_search(s);
   /* for binary search bubble sort is done to put data in ascending order */
   bubble_sort(s);
   /* binary serach for city is done with function */
   binary_search(s);
   return 0;
}

