#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int chars = 0;
    int word=1;
    cout << "Enter a sentence: ";
    getline(cin, sentence);   // takes input with spaces

      for(int i = 0; sentence[i] != '\0'; i++) {
        
        if(sentence[i] == ' ') {
            word++;
            continue;
        }
          chars++;
      }
    
    cout<<"char "<<chars<<endl;
    cout<<"word "<<word<<endl;

    return 0;
}
