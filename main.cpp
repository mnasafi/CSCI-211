//main.cpp
//elberling, Ace
//elberling

#include <iostream>
#include <string>
#include "video.h"
using namespace std;

int main()
{
  string sort_type, title, url, comment;
  Video* videos[100];
  int rating;
  float length;
  

  getline(cin, sort_type);
  cout<<"sort type: "<<sort_type<<endl;
  for(int i=0; i<10; i++)
    {
      while(getline(cin, title));
      while(getline(cin, url));
      while(getline(cin, comment));
      cin>>length>>rating;
      cin.ignore();
      
      cout<<"input recieved\ntitle: "<<title<<"\nURL: "<<url<<endl;

      videos[i] = new Video(title, url, comment, length, rating);
      
    }

  videos[0]->print();

/*  
  switch(sort_type)
    {
      case 'rating':
        cout<<"sort rating\n";
        break;
      case 'length':
        cout<<"sort length\n";
        break;
      case 'title':
        cout<<"sort title\n;
        break;
      default:
        cout<<"oops bugging out\n;
        return 1;
        //break;
      
    }
*/  
//  Video video1("Title One", "www.youtube.com/one", "Comment ONE", 1.1, 1);
//  Video video2("Title Two", "www.youtube.com/two", "Comment TWO", 2.2, 2);

//  video1.print();
//  video2.print();
  return 0;
  
}


