/*performing operations
fprintf()......writing
fscanf()......read
fseek()............set file pointer position*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fp;
    fp.open("output.txt",ios::out);
    if(fp)
    {
        fp<<"Iamneo.ai"<<endl;
        fp<<"Lovely Professional University"<<endl;
        fp<<"C++ Tutorial"<<endl;
        fp<<"object Oriented Programming"<<endl;
    }
    else cout<<"Error Occured while opening file: "<<endl;
    return 0;
}
