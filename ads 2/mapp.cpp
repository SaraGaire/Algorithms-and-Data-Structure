#include<iostream>
#include<map>
#include<fstream>
using namespace std;
//libraries and the header files.
int main()
{
ifstream textfile("maps.txt");
if (!textfile.is_open()){
    cerr<< "could not open the file."<<endl;
    return 1;
}
//mapping.
    map<string,string> mymap;
    string key, value; // define key and value
    string line;
    int linenumber = 0;

    while (getline(textfile , line)){
        if (linenumber %2 == 0){
            key = line;
        }
        else{
            value = line;
            mymap[key]=value;
        }
        linenumber++;
    }
 textfile.close();
 //closing the textfile.
 map<string,string>::iterator itr;//iterator for the mapping string.
 
    string user_input;
    getline(std::cin, user_input);
        // get user input
        itr = mymap.find(user_input);
         if(itr != mymap.end()) {
        std::cout << itr->second << std::endl;
    }
    else {
        std::cout << "Name not found" << std::endl;
    }
    // returns pointer to the key value pair if exists
        // returns pointer to elem past the last value 
        // i.e container.end
return 0;
}