#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){

    string creditCardNum;
    int choice;
    
    cout << "Enter 1 to validate a VISA credit card" << endl << "Enter 2 to validate a MasterCard credit card" << endl << "Enter 3 to validate an American Express credit card" << endl;
    
    cin >> choice;

    
    if(choice == 1){
        cout << "Please enter a Visa credit card number" << endl;
        cin >> creditCardNum;
        
        if(creditCardNum.length() > 16){
            cout << "The Visa credit card is not valid" << endl;
            return 0;
        }
        
        else if(creditCardNum.length() > 13 && creditCardNum.length() < 16){
            cout << "The Visa credit card is not valid" << endl;
            return 0;
        }
        
        else if(creditCardNum.length() < 13){
            cout << "The Visa credit card is not valid" << endl;
            return 0;
        }
        
        else if(creditCardNum.at(0) != '4'){
            cout << "The Visa credit card is not valid" << endl;
            return 0;
        }
        
        else{
            int totalSum = 0;
            
            for (int i = (creditCardNum.length()-2);i >= 0;i = i - 2){
                
                stringstream evenNumberedChars;
                
                evenNumberedChars << creditCardNum.at(i);
                
                int evenNumberedDigits;
                
                evenNumberedChars >> evenNumberedDigits;
                
                evenNumberedDigits = (evenNumberedDigits * 2);
                
               if (evenNumberedDigits < 9){
                    totalSum = totalSum + evenNumberedDigits;
               }
                
                if (evenNumberedDigits > 9){
                    string s;
                    stringstream ss;
                    ss << evenNumberedDigits;
                    ss >> s;
                    int digit1 = 0;
                    int digit2 = 0;
                    stringstream ss1;
                    stringstream ss2;
                    ss1 << s.at(0);
                    ss2 << s.at(1);
                    ss1 >> digit1;
                    ss2 >> digit2;
                    int sumOfDigits;
                    sumOfDigits = digit1 + digit2;                  // adds the digits of the products
                    
                    totalSum = totalSum + sumOfDigits;                  // updates the total sum
                }
            }
            
            for (int z = (creditCardNum.length()-1);z >= 0;z = z - 2){
                stringstream oddNumberedChars;
                oddNumberedChars << creditCardNum.at(z);
                int oddNumberedDigits;
                oddNumberedChars >> oddNumberedDigits;                       // converts the odd numbered charcter to integer
                totalSum = totalSum + oddNumberedDigits;                      // adds the odd numbered characters to the total sum
            }
            
            if ((totalSum % 10) == 0){
                cout << "The Visa credit card is valid" << endl;
                return 0;
            }
            
            else{
                cout << "The Visa credit card is not valid" << endl;
                return 0;
            }
        }
    }
    
    else if(choice == 2){
    
        cout << "Please enter a MasterCard credit card number" << endl;
       
        cin >> creditCardNum;
        
        if(creditCardNum.length() != 16){
            cout << "The MasterCard credit card is not valid" << endl;
            return 0;
        }
        
        else if(creditCardNum.at(0) != '5' && creditCardNum.at(1) != '1'){
            cout << "The MasterCard credit card is not valid" << endl;
            return 0;
        }
        
        else if(creditCardNum.at(0) != '5' && creditCardNum.at(1) != '5'){
            cout << "The MasterCard credit card is not valid" << endl;
            return 0;
        }
        else{
            
            int totalSum = 0;
            
            for (int i = (creditCardNum.length()-2);i >= 0;i = i - 2){
                
                stringstream evenNumberedChars;
                
                evenNumberedChars << creditCardNum.at(i);
                
                int evenNumberedDigits;
                
                evenNumberedChars >> evenNumberedDigits;
                
                evenNumberedDigits = (evenNumberedDigits * 2);
                
                if (evenNumberedDigits < 9){
                    totalSum = totalSum + evenNumberedDigits;
                }
                
                if (evenNumberedDigits > 9){
                    string s;
                    stringstream ss;
                    ss << evenNumberedDigits;
                    ss >> s;
                    int digit1 = 0;
                    int digit2 = 0;
                    stringstream ss1;
                    stringstream ss2;
                    ss1 << s.at(0);
                    ss2 << s.at(1);
                    ss1 >> digit1;
                    ss2 >> digit2;
                    int sumOfDigits;
                    sumOfDigits = digit1 + digit2;                  // adds the digits of the products
                    
                    totalSum = totalSum + sumOfDigits;                  // updates the total sum
                }
            }
            
            for (int z = (creditCardNum.length()-1);z >= 0;z = z - 2){
                stringstream oddNumberedChars;
                oddNumberedChars << creditCardNum.at(z);
                int oddNumberedDigits;
                oddNumberedChars >> oddNumberedDigits;                       // converts the odd numbered charcter to integer
                totalSum = totalSum + oddNumberedDigits;                      // adds the odd numbered characters to the total sum
            }
            
            if ((totalSum % 10) == 0){
                cout << "The MasterCard credit card is valid" << endl;
                return 0;
            }
            
            else{
                cout << "The MasterCard credit card is not valid" << endl;
                return 0;
            }
        }
    }

    else if(choice == 3){
    
        cout << "Please enter a American Express credit card number" << endl;
       
        cin >> creditCardNum;
        
        if(creditCardNum.length() != 15){
            cout << "The American Express credit card is not valid" << endl;
            return 0;
        }
        
        else if(creditCardNum.at(0) != '3' && creditCardNum.at(1) != '4'){
            cout << "The American Express credit card is not valid" << endl;
            return 0;
        }

        else if(creditCardNum.at(0) != '3' && creditCardNum.at(1) != '7'){
            cout << "The American Express credit card is not valid" << endl;
            return 0;
        }
        else{
            
            int totalSum = 0;
            
            for (int i = (creditCardNum.length()-2);i >= 0;i = i - 2){
                
                stringstream evenNumberedChars;
                
                evenNumberedChars << creditCardNum.at(i);
                
                int evenNumberedDigits;
                
                evenNumberedChars >> evenNumberedDigits;
                
                evenNumberedDigits = (evenNumberedDigits * 2);
                
                if (evenNumberedDigits < 9){
                    totalSum = totalSum + evenNumberedDigits;
                }
                
                if (evenNumberedDigits > 9){
                    string s;
                    stringstream ss;
                    ss << evenNumberedDigits;
                    ss >> s;
                    int digit1 = 0;
                    int digit2 = 0;
                    stringstream ss1;
                    stringstream ss2;
                    ss1 << s.at(0);
                    ss2 << s.at(1);
                    ss1 >> digit1;
                    ss2 >> digit2;
                    int sumOfDigits;
                    sumOfDigits = digit1 + digit2;
                    
                    totalSum = totalSum + sumOfDigits;
                }
            }
            
            for (int z = (creditCardNum.length()-1);z >= 0;z = z - 2){
                stringstream oddNumberedChars;
                oddNumberedChars << creditCardNum.at(z);
                int oddNumberedDigits;
                oddNumberedChars >> oddNumberedDigits;
                totalSum = totalSum + oddNumberedDigits;
            }
            
            if ((totalSum % 10) == 0){
                cout << "The American Express credit card is valid" << endl;
                return 0;
            }
            
            else{
                cout << "The American Express credit card is not valid" << endl;
                return 0;
            }
        }
    }
}
