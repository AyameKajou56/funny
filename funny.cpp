#include <iostream>
#include <cstdlib>
#include <string>

int main(void){
	std::string Background = "\033[101m";
	std::string Foreground = "\033[97m";
	std::string Text = "You are an Idiot!";

	while(true){
		std::cout << Background << Foreground << Text << "      ";
		std::system("open /Users/student/Desktop/Funny/funny");
	}
	
	return 0;
}
