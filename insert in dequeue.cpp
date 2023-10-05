#include <iostream>  
#include<deque>  
using namespace std;  
int main()  
{  
   deque<string> language={"java",".net","C"};  
   deque<string>::iterator itr=language.begin();  
   ++itr;  
   language.insert(itr,"C++");  
   for(itr=language.begin();itr!=language.end();++itr)  
   cout<<*itr<<" ";  
    return 0;  
    }  
