#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

void Zipping(){
    char path[] = "";
    char command_zip[] = "cd /D ";

    cout << "Put a path to a directory to archive: ";
    cin >> path;
    cout << path << endl;

    char final_command[256];
    strcat(final_command, command_zip);
    strcat(final_command, path);

    cout << final_command << " " << typeid(final_command).name() << endl;

    system(final_command);
    system(R"(echo %cd%)");

//    cout << "Zipping is started..." << endl;
//    string tar = "tar cvf myTAR.tar *";
//    system(tar.c_str());
//    cout << "Zipping has finished. You can find .tar in directory" << endl;

    cin >> path;
    cin.get();
}

void Unzipping(){
    cout << "Unzipping is started..." << endl;
    system(R"(tar xvf C:\Users\tard\Desktop\emojis\myTAR.tar -C C:\Users\tard\Desktop\papka)");
}

int main()
{
    Zipping();
    return 0;
}
