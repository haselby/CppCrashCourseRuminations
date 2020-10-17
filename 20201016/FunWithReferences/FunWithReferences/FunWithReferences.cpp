// FunWithReferences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



struct CodeBook {
    CodeBook(int new_secret) {
        secret = new_secret;
    }
    int secret;
};

int main()
{
    CodeBook haselcode{ 123456 };
    //To declare a Reference Type followed by &
    //Must be initialized and can't be reseated thereafter
    CodeBook& haselcodeRef = haselcode;

    std::cout << "haselcode secret: " << haselcode.secret << "\n"; 
    std::cout << "haselcodeRef secret: " << haselcodeRef.secret << "\n";

    haselcode.secret = 424242;

    std::cout << "haselcode secret: " << haselcode.secret << "\n";
    std::cout << "haselcodeRef secret: " << haselcodeRef.secret << "\n";

    haselcodeRef.secret = 888888;

    std::cout << "haselcode secret: " << haselcode.secret << "\n";
    std::cout << "haselcodeRef secret: " << haselcodeRef.secret << "\n";


}


