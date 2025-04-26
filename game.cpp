#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    bool revealed[6] = {false};
    int numbers[6];
    for (int i = 0; i < 6; i++) {
        numbers[i] = rand() % 10;  
    }

    for(int i = 0; i <6 ; i++) {
        cout<<numbers[i]<<" ";
    }

    cout<<endl;

    for(int i = 0; i<6;i++){
        int randIndex = rand() % 6;

        int swap = numbers[i];
        numbers[i] = numbers[randIndex];
        numbers[randIndex] = swap;

    }

    int attempts = 0, correct_guess = 0;

    while(correct_guess < 6){

        for (int i = 0; i < 6; i++) {
            if (revealed[i]) {
                cout << numbers[i] << " ";
            } else {
                cout << "[] ";
            }
        }
        cout << endl;

        int guess, index;

        cout<<"Enter The Index you want to Guess(1-6):  ";
        cin>> index;
        index--;

        if(index < 0 || index > 6){
            cout<<"Invalid Index try again!  "<<endl;
            continue;
        }
        if (revealed[index]) {
            cout << "You already guessed this index correctly!" << endl;
            continue;
        }
        else{
            cout<<"Enter your Guess(0-10):  ";
            cin>>guess;

            if(guess < 0 || guess > 10){
                cout<<"Invalid Guess try agin!  "<<endl;
                continue;
            }
        }

        if (numbers[index] == guess) {
            cout << "✅ Correct guess!" << endl;
            revealed[index] = true;
            correct_guess++;
        } 
        else {
            cout << "❌ Incorrect guess!" << endl;
        }
    

        attempts++;

    }

    cout << "\n🎉 You guessed all numbers correctly!" << endl;
    cout << "Total attempts: " << attempts << endl;


    cout << "The final numbers were: ";
    for (int i = 0; i < 6; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
