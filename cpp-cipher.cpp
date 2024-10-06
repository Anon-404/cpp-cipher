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
    cout<< "Enter shift number : ";
    cin>> shift;
    for(char c : sentence){
        int a = c + shift;
        char b = a;
        cout<< b;
    }
    //cout << sentence;
    return 0;

}

int main(){
	
	banner();
	
	cout << BOLD_GREEN << "1) Encryption" <<endl << "2) Decryption" << RESET <<endl;
	int opt;	
	cout<< BOLD_WHITE << "\nOption number : ";
	cin>> opt;
	
	if(opt == 1){
	    
	    system("clear");
	    
	    banner();
	    
	    string text;
	    cout << BOLD_WHITE << "Enter your text here : ";
	    cin.ignore();
	    getline(cin,text);
	    encryption(text);
	    
	}else if(opt == 2){
	    
	    banner();
	    
	    string text;
	    cout << BOLD_WHITE << "Enter encrypted text here : ";
	    cin >> text;
	    decryption(text);
	    
	}else{
	    cout << BOLD_RED << "rong option";
	}
	
	return 0;
	
}
