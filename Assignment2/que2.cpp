// Write a menu driven program for class Student. In Main Create Array of Objects and provide facility for Accept, Print, Search and Sort.
// For student accept name, gender, rollnumber and marks of three subjects from user and print name, rollnumber, gender and percentage.
// Provide global function e.g. “SortRecord ()” for sorting array. When we search a particular student in an array and if it is founds show all record of that
// student otherwise show some error message.


#include<iostream>
#include<iomanip>
using namespace std;



class student
{
private:
    char name[20];
    char gender[10];
    int rollnumber;
    float marks1,marks2,marks3;
    double percentage;
public:
   void accept();
   void display();
   void sort(student *starr,int n);
   int search(int a);
   void sortdiaplay();
   
};
  void student::accept()
  {
      cout<<"\nEnter Name : ";
      cin>>name;
      cout<<"\nEnter Gender : ";
      cin>>gender;
      cout<<"\nEnter Roll Number : ";
      cin>>rollnumber;
      cout<<"\nEnter Maths Marks : ";
      cin>>marks1;
      cout<<"\nEnter Physics Marks : ";
      cin>>marks2;
      cout<<"\nEnter Chemistry Marks : ";
      cin>>marks3;

      percentage=(marks3+marks2+marks1)/3;
       cout<<"\n---------------------------------------------------------------\n";
  }

    void student::display()
  {
        cout<<setw(25)<<name<<setw(25)<<rollnumber<<setw(25)<<gender<<setw(25)<<percentage<<setw(25)<<"("<<marks1<<"+"<<marks2<<"+"<<marks3<<")";
        cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

      
  }

int student::search(int roll)
{ 
    int flag =0;
    if(roll==rollnumber)
    {
        flag =1;
    }
    else
    {
        
        flag=0;
    }
    


    if(flag==1)
    {
                cout<<"\nDetails of Roll Number : "<<rollnumber;
                cout<<"\n_________________________________";

                cout<<"\n\tName : "<<name;
      
                cout<<"\n\tGender : "<<gender;
      
                cout<<"\n\tMaths Marks : "<<marks1;

                cout<<"\n\tPhysics Marks : "<<marks2;

                cout<<"\n\tChemistry Marks : "<<marks3;

                cout<<"\n\tPercentage : "<<percentage;
    }
    return flag;
}

//   void student::search(student *starr)
//   {   
//       int rollno;
//       cout<<"Enter Roll Number : ";
//       cin>>rollno;
//       int flag = 0;
//         for (int i = 0; i < 2; i++)
//         {
//             if(starr[i].rollnumber==rollno){
//                 cout<<"Found"<<endl;
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag==0){
//             cout<<"Not Found";
//         }
        
        
            // if(rollnumber==rollno)
            // {

            //     cout<<"\nEnter Roll Number : "<<rollnumber;
            //     cout<<"\n_________________________________";

            //     cout<<"\nName : "<<name;
      
            //     cout<<"\nEnter Gender : "<<gender;
      
            //     cout<<"\nMaths Marks : "<<marks1;

            //     cout<<"\nPhysics Marks : "<<marks2;

            //     cout<<"\nChemistry Marks : "<<marks3;

            //     cout<<"\n Percentage : "<<(marks1+marks2+marks3)/3;
            // }

            // else
            // {
            //     cout<<"\n\t---Student Not Found.....";
            // }
            

    //   }

    void student::sort(student *starr,int n)
    {  
        student t;
           // for(int i=0;i<n;i++)
            {
                for(int j=0;j<n-1;j++)
                {
                if(starr[j].rollnumber<starr[j+1].rollnumber)
                {
                    t=starr[j];
                    starr[j]=starr[j+1];
                    starr[j+1]=t;
                }
        }
    }
    }
    
    void student::sortdiaplay()
  {
      
      cout<<setw(25)<<name<<setw(25)<<rollnumber<<setw(25)<<gender<<setw(25)<<percentage<<setw(25)<<"("<<marks1<<"+"<<marks2<<"+"<<marks3<<")";
      cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
  }

 


int main()
{
    int no,choice,n;
    cout<<"\n\n---------------------------------------------------------------------------------------------";
    cout<<"\nEnter Number of Record want to insert : ";
    cin>>no;
    student starr[no];

      do
    {
        cout<<"\n\n\n------------------Option Menu------------------\n";
        cout<<"\n\t 1.  Enter Student Details";
        cout<<"\n\t 2.  Display All Students";
        cout<<"\n\t 3.  Search Student";
        cout<<"\n\t 4.  Display Student in Sorted form";
     
        cout<<"\n\t 0.  Exit";
        cout<<"\n_________________________________";
        cout<<"\n\t Enter Choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1 :
            for(int i=0;i<no;i++)
            {
                starr[i].accept();
            }
            break;

        case 2 :

            cout<<setw(25)<<"Student Name"<<setw(25)<<" Roll Number"<<setw(25)<<" Gender"<<setw(25)<<"Percentage" <<setw(40)<<"(Math+Physics+Chemistry) ";
             cout<<"\n_____________________________________________________________________________________________________________________________________________________________________________________\n";
               
            for(int i=0;i<no;i++)
            {
                starr[i].display();
            }
            break;

        case 3 :
                // starr[0].search(starr);

                int roll,flag;
                cout<<"Enter Roll";
                cin>>roll;
                 for(int i=0;i<no;i++)
            {
                flag=starr[i].search(roll);
                if(flag==1)
                break;
            }
                    
             if(flag==0)
             cout<<"NOT FOUNd";
            break;

        case 4 :
            starr[0].sort(starr,no);
               cout<<"\nRollNumber Wise Students: ";
               cout<<"\n----------------------------------\n\n";
               cout<<setw(25)<<"Student Name"<<setw(25)<<" Roll Number"<<setw(25)<<" Gender"<<setw(25)<<"Percentage" <<setw(40)<<"(Math+Physics+Chemistry) ";
               cout<<"\n_____________________________________________________________________________________________________________________________________________________________________________________\n";
                for (int i = 0; i < no; i++)
                    starr[i].sortdiaplay();
            break;

             

        case 0 :
            cout<<"Exiting.......";
            break;

        default:
        cout<<"Wrong Input.....";
            break;
        }
    } while (choice!=0);
    

    

    return 0;
}
