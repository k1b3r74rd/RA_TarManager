// Written by Zolotarev Maxim. Разработано Золотаревым Максимом.

#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

void Tarring(){
    string zip_path;
    string arch_name;
    string storage_path = R"(C:\ProgramData\TarManager)";

    system("cls");
    cout << "Put a path to a directory to archive: ";
    cin >> zip_path;

    cout << "Put a name for your archive: ";
    cin >> arch_name;

    cout << "Zipping is started..." << endl;
    string zip_raw_command = "tar cvf " + storage_path + "\\" + arch_name + ".tar " + zip_path; // How to make this more beautiful/skillful?
    const char * zip_final_command = zip_raw_command.c_str();
    system(R"(mkdir C:\ProgramData\TarManager)");
    system(zip_final_command);
    cout << "Zipping has finished. Path to your archive: " << storage_path + "\\" + arch_name + ".tar" << endl; // Also that one
    system("pause");
}

void Untarring(){
    string tarfile_path;
    string unzip_path;

    system("cls");
    cout << "Put a path to your .tar WITH .tar in it : ";
    cin >> tarfile_path;

    cout << "Put a path to directory where you want to extract your .tar : ";
    cin >> unzip_path;

    cout << "Untarring is started..." << endl;
    string unzip_raw_command = "tar xvf " + tarfile_path + " -C " + unzip_path;
    const char * unzip_final_command = unzip_raw_command.c_str();
    system(unzip_final_command);
    cout << "Untarring finished. You can find files in your directory. If any errors aquired, try again." << endl;
    system("pause");
}

void Menu(){
    int choose;

    system("cls");
    cout << " Welcome to TarManager. Choose one of proposed options: " << endl;
    cout << " [1] - to tar your files; \n [2] - to untar your archive into a directory; " << endl;
    cout << " Your choise: ";
    cin >> choose;
    if (choose == 1){
        Tarring();
    }else if(choose == 2){
        Untarring();
    }else{
        cout << "There is no option under this number." << endl;
    }
    system("pause");
}

int main()
{
    while (true){
        system("cls");
        Menu();
    }
    return 0;
}
