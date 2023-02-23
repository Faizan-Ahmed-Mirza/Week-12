#include<iostream>
#include<fstream>
using namespace std ;

main(){
	int count = 0 , wordlength = 0 ;
	string word ;
	fstream file ;
	file.open("story.txt" , ios :: in) ;
	while(!file.eof()){
		file >> word ;
		for(int i = 0 ; word[i] != '\0' ; i++){
			wordlength ++ ;
		}
		if(wordlength < 4){
			cout << word << endl ;
			count ++ ;
		}
		wordlength = 0 ;
	}
	file.close() ;
	
	cout << "The number of words in file whose length is less than 4 are: " << count ;
}
