#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void removeSentence(char* paragraph , char* input)
{
    cout<<"Enter sentence: ";
    cin.getline(input,1000);

    char* start = strstr(paragraph, input);

    if(start != NULL)
    {
        
        int len = strlen(input);
        memmove(start, start + len, strlen(start + len) + 1);
    }
    else
    {
        cout<<"Substring not found\n";
    }

    cout<<paragraph<<endl;
}
int main(){
    // initializing  of paragraph (not doing it input ) 

    char input[1000];
    char paragraph[1000]="I am currently studying OOP course. I hope to pass it.I might fail.";
    
    cout<<paragraph<<endl;
   // calling func 
   removeSentence(paragraph , input);

}