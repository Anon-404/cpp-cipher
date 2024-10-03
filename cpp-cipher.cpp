#include <iostream>

using namespace std;





void banner(){
    
    cout<< "\n\t banner option here\n" <<endl;
    
}





int encryption(string sentence){
    
    //cout << sentence;
    int shift;
    cout<< "Enter shift number : ";
    cin>> shift;
    for(char c : sentence){
        int a = c + shift;
        char b = a;
        cout<< b;
    }
    return 0;

}





int decryption(string sentence){
    
    
    cout << sentence;
    return 0;

}





int main(){
	
	banner();
	
	cout<< "1) Encryption" <<endl << "2) Decryption" <<endl;
	int opt;	
	cout<< "\nOption number : ";
	cin>> opt;
	
	if(opt == 1){
	    
	    banner();
	    
	    string text;
	    cout << "Enter your text here : ";
	    cin >> text;
	    encryption(text);
	    
	}else if(opt == 2){
	    
	    banner();
	    
	    string text;
	    cout << "Enter encrypted text here : ";
	    cin >> text;
	    decryption(text);
	    
	}else{
	    cout<< "rong option";
	}
	
	return 0;
	
}
