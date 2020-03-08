    #include<iostream>
    #include"headerq1.h"
    using namespace std;
    
    

  cylinder::cylinder() 
  {
      this->radius=0.0;
      this->height=0.0;
      
      volume=3.14*radius*radius*height;
      cout<<"Volume : "<<volume;
  } 
  cylinder::cylinder(double radius,double height)
  {
      this->radius=radius;
      this->height=height;
      volume=3.14*radius*radius*height;
      cout<<"Volume : "<<volume;

  }
  void cylinder::getvolume()
  {
      cout<<"\n\tEnter Radius : ";
      cin>>radius;
      
      cout<<"\n\tEnter Height : ";
      cin>>height;
      
  }
  void cylinder::printvolume()
  {
      volume=3.14*radius*radius*height;
      cout<<"\n\t Volume Of Cylinder : "<<volume;
  }

