#include <iostream>
using namespace std;

int main(){
char ch;
cout<<"write your character here:";
cin >> ch;
if (ch>='a' && ch<='z')
{
    cout << "character is in lowercase" << endl;
}else if (ch>='A' && ch<='Z')
{
    cout << "character is in uppercase" << endl;
}
else if (ch>='0' && ch<='9')
{
    cout << "character is numeric" << endl;
}
else
{
    cout<< "try again later";
}


}