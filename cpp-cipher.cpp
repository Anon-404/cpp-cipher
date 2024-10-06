#include <iostream>
#include <stdlib.h>

using namespace std;

#define BOLD_BLACK   "\033[1;30m"
#define BOLD_RED     "\033[1;31m"
#define BOLD_GREEN   "\033[1;32m"
#define BOLD_YELLOW  "\033[1;33m"
#define BOLD_BLUE    "\033[1;34m"
#define BOLD_MAGENTA "\033[1;35m"
#define BOLD_CYAN    "\033[1;36m"
#define BOLD_WHITE   "\033[1;37m"
#define RESET   "\033[0m"

/*
        Author : William Steven \n;
        Definition : Classic ceaser cypher tool \n;
        Note : Fork kor korle || copy korle tor মারে চুদি 🖕\n;

*/

void banner() {
    cout << BOLD_CYAN << "\n\n                               _       __                 \n";
    cout << "  _________  ____        _____(_)___  / /_  ___  _____    \n";
    cout << " / ___/ __ \\/ __ \\______/ ___/ / __ \\/ __ \\/ _ \\/ ___/    \n";
    cout << "/ /__/ /_/ / /_/ /_____/ /__/ / /_/ / / / /  __/ /        \n";
    cout << "\\___/ .___/ .___/      \\___/_/ .___/_/ /_/\\___/_/         \n";
    cout << "   /_/   /_/                /_/                            \n\n\n" << RESET;
}

int encryption(string sentence) {
    int shift;
    cout << BOLD_WHITE << "Enter shift number: ";
    cin >> shift;
    
    cout << BOLD_CYAN << "\nCipher text : ";

    for (char c : sentence) {
        
        if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + shift) % 26) + 'A';
            cout << c;
        }
        
        else if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + shift) % 26) + 'a';
            cout << c;
        }
        else {
            cout << c;
        }
    }
    
    cout << RESET << "\n";

    return 0;
 
}






int decryption(string sentence){
    
    int shift;
    
    cout<< BOLD_GREEN <<"\n1) Custom shift number\n2) Test all (default)\n" << RESET <<endl;
    int choice;
    cout<< BOLD_WHITE << "Enter decryption mathod number : ";
    cin>> choice;
        if (choice== 1) {
        int num;
        cout << BOLD_WHITE << "Enter shift number: ";
        cin >> num;

        cout << "\n";
        cout << BOLD_CYAN << "Plain text: ";

        for (char c : sentence) {
            if (c >= 'A' && c <= 'Z') {
                
                c = ((c - 'A' - num + 26) % 26) + 'A';
                cout << c;
            } else if (c >= 'a' && c <= 'z') {
                
                c = ((c - 'a' - num + 26) % 26) + 'a';
                cout << c;
            } else {
                cout << c;
            }
        }

        cout << BOLD_BLUE << " (Shift " << num << ")\n" << RESET;
    
    }else if(choice== 2){
        
        cout<< "\n";
        int x = 1;
        for(shift = 25 ; shift > 0 ; shift--){
            
            cout << BOLD_CYAN << "Plain text : ";

        for (char c : sentence) {
        
            if (c >= 'A' && c <= 'Z') {
                c = ((c - 'A' + shift) % 26) + 'A';
                cout << c;
            }
        
            else if (c >= 'a' && c <= 'z') {
                c = ((c - 'a' + shift) % 26) + 'a';
                cout << c;
            }
            else {
                cout << c;
            }
        }
        
        cout << BOLD_BLUE << " ( Shift " << x << " )";
        cout << RESET << "\n";
        x++;
            
        }
        
    }else {
        cout << BOLD_RED << "Invalid option." << RESET << endl;
    }
    
    
    return 0;

}


int main() {
    system("clear");
    int opt;
    bool runAgain = true;
    
    while (runAgain) {
        banner();

        cout << BOLD_GREEN << "1) Encryption" << endl << "2) Decryption" << RESET << endl;
        cout << BOLD_WHITE << "\nOption number : ";
        cin >> opt;

        if (opt == 1) {
            system("clear");
            banner();

            string text;
            cout << BOLD_WHITE << "Enter your text here : ";
            cin.ignore();
            getline(cin, text);
            encryption(text);

        } else if (opt == 2) {
            system("clear");
            banner();

            string text;
            cout << BOLD_WHITE << "Enter encrypted text here : ";
            cin.ignore();
            getline(cin, text);
            decryption(text);

        } else {
            cout << BOLD_RED << "Wrong option" << RESET << endl;
            continue;
        }

        int YorN;
        cout << BOLD_YELLOW << "\nDo you want to use this script one more time ??\n" 
             << BOLD_GREEN << "\n1) Yes\n2) No\n" << RESET;
        cout << BOLD_WHITE << "\nEnter the value of yes or no (1/2) : ";
        cin >> YorN;

        if (YorN == 1) {
            runAgain = true;
            system("clear");
        } else if (YorN == 2) {
            cout << BOLD_GREEN << "\nGood bye 👋\nExiting !" << RESET <<endl;
            runAgain = false;
        } else {
            cout << BOLD_RED << "Unknown option\nExiting !" << RESET << endl;
            runAgain = false;
        }
    }

    return 0;
}

/*


    last message : বাহ চুদির ভাই 🙂
                   তুই তাও copy করবি ??


*/
