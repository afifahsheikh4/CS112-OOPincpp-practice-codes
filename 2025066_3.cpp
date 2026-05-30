#include <iostream>
#include<string>
using namespace std;
int main(){

    char playagain;
    do{
        system("cls"); // clears screen before going inside 

     // array to save questions
 string questions[20]={
    "1.What is the capital of France?",
    "2.In which year did World War II end?",
    "3.What is the largest planet in our solar system?",
    "4.Who wrote Romeo and Juliet?",
    "5.What is the capital of Japan?",
    "6.Which ocean is the largest?",
    "7.What is the currency of Australia?",
    "8.Who was the first President of the United States?",
    "9.What is the main ingredient in guacamole?",
    "10.In which year did the Titanic sink?",
    "11.What is the largest mammal on Earth?",
    "12.Who painted the Mona Lisa?",
    "13.What is the national flower of Japan?",
    "14.Which planet is known as the 'Red Planet'?",
    "15.What is the largest desert in the world?",
    "16.Who wrote 'To Kill a Mockingbird'?",
    "17.What is the capital of Canada?",
    "18.Which element has the chemical symbol 'H'?",
    "19.What is the largest organ in the human body?",
    "20.Which famous scientist developed the theory of relativity?",
     
};
   // array to store options
   string options[20][4]={
    {"a. Berlin", "b. Madrid", "c. Paris", "d. Rome"},
    {"a. 1943", "b. 1945", "c. 1945", "d. 1950"},
    {"a. Venus", "b. Mars", "c. Jupiter", "d. Saturn"},
    {"a. Charles Dickens", "b. William Shakespeare", "c. Jane Austen", "d. Mark Twain"},
    {"a. Beijing", "b. Seoul", "c. Tokyo", "d. Bangkok"},
    {"a. Indian Ocean", "b. Atlantic Ocean", "c. Pacific Ocean", "d. Arctic Ocean"},
    {"a. Euro", "b. Dollar", "c. Australian Dollar", "d. Peso"},
    {"a. Thomas Jefferson", "b. George Washington", "c. Abraham Lincoln", "d. John Adams"},
    {"a. Tomatoes", "b. Onions", "c. Avocado", "d. Peppers"},
    {"a. 1910", "b. 1912", "c. 1915", "d. 1920"},
    {"a. Elephant", "b. Blue Whale", "c. Giraffe", "d. Polar Bear"},
    {"a. Vincent van Gogh", "b. Leonardo da Vinci", "c. Pablo Picasso", "d. Claude Monet"},
    {"a. Rose", "b. Tulip", "c. Cherry Blossom", "d. Orchid"},
    {"a. Jupiter", "b. Venus", "c. Saturn", "d. Mars"},
    {"a. Sahara Desert", "b. Gobi Desert", "c. Arabian Desert", "d. Antarctic Desert"},   
    {"a. J.K. Rowling", "b. Ernest Hemingway", "c. Harper Lee", "d. F. Scott Fitzgerald"},
    {"a. Ottawa", "b. Toronto", "c. Ottawa", "d. Montreal"},
    {"a. Hydrogen", "b. Helium", "c. Carbon", "d. Oxygen"},
    {"a. Heart", "b. Liver", "c. Skin", "d. Lungs"},
    {"a. Isaac Newton", "b. Galileo Galilei", "c. Albert Einstein", "d. Stephen Hawking"}

};
     // array to store correct options
     char correctanswers[]={'c','c','c','c','c','c','c','b','c','b','b','b','c','d','d','c','a','a','c','c'};
     char useranswer; // memory to store answer user will give 
     int score =0;
    
    
     // displaying questions and its respective options by using for loop
     for(int i=0 ; i<20 ; i++){ // for questions
         cout<<questions[i]<<endl;
          for(int j=0 ; j<4 ; j++){
            cout<<options[i][j]<<" "; // loop to print optins for the current question 
         } 
        
     cout<<" Your answer (a ,b ,c or d)  :     ";
     cin>>useranswer;
     cin.ignore();

     useranswer = tolower(useranswer); // this will allow user to enter option in which case he like either A or a both will work 
     // to check if enered option is correct or not 
     if(useranswer==correctanswers[i]){
         cout<<"Correct!"<<endl;
         score++;
     }
     else {
         cout<<"Wrong"<<endl;
     }
     }
     
     // to display score 
     cout<<"Overall Score : "<<score<<" out of 20" <<endl;
     
     // asking user if they want to play again
     cout<<"Do you want to play again ? (y/n) ";
     cin>>playagain;
     
     }
     while(playagain=='y'|| playagain=='Y');
     


    return 0;

    }

