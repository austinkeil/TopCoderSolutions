#include <iostream>
#include <string>
#include <algorithm>
#include <array>

using namespace std;

class UserName
{
public:
    UserName() {}
    string newMember(vector<string> existingNames, string newName)
    {
        if(find(existingNames.begin(), existingNames.end(), newName) == existingNames.end())
        {
            return newName;
        }

        string curName = newName;
        int appendage = 1;
        while(find(existingNames.begin(), existingNames.end(), curName + to_string(appendage)) != existingNames.end()){
            appendage = appendage + 1;
        }
        return curName + to_string(appendage);
    }
};

//int main(){
//    UserName newUserName;
//    vector<string> existingNames = {"Joe", "Joe1", "Tom", "Joe2", "Nicole"};
//    cout << newUserName.newMember(existingNames, "Joe");
//}

