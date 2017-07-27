   #include <iostream>
   #include <string>
 
   using namespace std;
 
   int main()
   {
    bool guessed = false;
    while (guessed == false)
    {

         int guess;
        cout << "How many leaves?" << endl;
        cin >> guess;
 
        if (guess == 14)
            guessed = true;
    }
       cout << "You win!" << endl;
 }

