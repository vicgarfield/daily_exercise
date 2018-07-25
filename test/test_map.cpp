//
// Created by Victor on 2017/11/26.
//

#include <iostream>
#include <map>

using namespace std;

int main(int argc, char** argv){

    //遍历
    map<int,string> mapStudent;

    mapStudent.insert(pair<int, string>(1, "Keven"));
    mapStudent.insert(pair<int, string>(2, "Jobs"));
    mapStudent.insert(pair<int, string>(3, "Gates"));
    mapStudent.insert(map<int, string>::value_type(4, "Betty"));
    mapStudent[5] = "Steven";


    map<int, string>::iterator iter;

    for(iter = mapStudent.begin(); iter != mapStudent.end(); iter++)
        cout << iter->first << ": " << iter->second << endl;

    std::cout << "___________________" << std::endl;
    std::cout << " Hello World!" << std::endl;
    return 0;
};