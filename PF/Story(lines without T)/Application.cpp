#include<iostream>
#include<fstream>
using namespace std ;

main(){
	int count = 0 ;
	char character ;
	fstream file ;
	file.open("story.txt" , ios :: in) ;
	file >> character ;
	if(character == 'T'){
		count -- ;
	}
	while(!file.eof()){
		file >> character ;
		if(character == '.'){
			count ++ ;
			file >> character ;
			if(character == 'T'){
				count -- ;
			}
		}
	}
	file.close() ;

	if(count < 0){
		count = 0 ;
	}
	
	cout << "Story contains " << count << " lines that doesn't start with 'T' ." ;
	
	
}


