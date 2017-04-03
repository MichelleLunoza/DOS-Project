#include<iostream>
#include <string>
#include<windows.h>
#include<string.h>
using namespace std;

static int splash_screen=0;

void splash()// splashscreen
{
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<"\t\t\t\t   L O A D I N G\n\n    ";
     for(int x=0;x<72;x++)
{
             cout<<char(433);
             Sleep(30);        
}
}

int main()
{
    //declaration of variables
	string YES_NO;
    string choice_command;
	
   
   system("color f");
     if(splash_screen==0){
            splash();
            splash_screen=1;
     }
     system("cls");
     system("color f");
	
	//menu
    cout<<"Good day user! Welcome in our program which is called as DCI \n(DOS Command Interpreter).\n\n";
    cout<<"Command:\n"<<endl;
     cout<<"a.Restart.\n";
		cout<<"b Shutdown\n";
		cout<<"c Diskpart\n";
		cout<<"d IP Configuration(ipconfig)\n";
		cout<<"e Network Statistics (netstat)\n";
		cout<<"f Directory (dir)\n";
		cout<<"g Task Manager\n";
        cout<<"h Office Word\n";
        cout<<"i Chrome\n";
        cout<<"j Excel\n";
        cout<<"k Specification of your PC\n";
        cout<<"l System Configuration\n";
        cout<<"m Net User\n";
        cout<<"n MS Publisher\n";
        cout<<"o MS Powerpoint\n";
        cout<<"p Notepad\n";
        cout<<"q Outlook\n";
        cout<<"r Infopath\n";
        cout<<"s Onenote\n";
        cout<<"t Explorer\n";
        cout<<"u Exit\n";
    
    cout<<"\n\nPlease enter the corresponding LETTER for your chosen command: ";
	cin>>choice_command;
	
    
    if (choice_command == "a")//restart
	{
		system("cls");
		cout<<"Good Bye!!! (Your PC is now shuting down.... Please wait a few minutes\n)";
		system("shutdown -r -f -t 00");
	}
	else if (choice_command == "b")//shutdown
	{
		system("cls");
		cout<<"Good Bye!!! (Your PC is now restarting.... Please wait a few minutes\n)";
		system("shutdown -s -f -t 00");
	}
	else if (choice_command == "c")//diskpart
	{
		system("cls");
		cout<<"Launching DISKPART.exe\n";
		system("DISKPART");
		cout<<"\n";
	}
	else if (choice_command == "d")//IP Configuration
	{
		system("cls");
		cout<<"IP Configuration.....\n)";
		system("ipconfig");
		cout<<"\n";
	}
	else if (choice_command == "e")//netstat
	{
		system("cls");
		cout<<"netstat (network statistics)...\n";
		system("netstat");
		cout<<"\n";
	}
	else if (choice_command == "f")//directory
	{
		system("cls");cout<<"dir (directory)...\n";
		system("dir");
		cout<<"\n";
	}
	else if (choice_command == "g")//task manager
	{
		system("cls");
		cout<<"taskmgr (task manager) is now opening...\n";
		system("taskmgr");
		cout<<"\n";
	}
	else if (choice_command == "h")//office word
	{
		system("cls");
		cout<<"Microsoft Office Word is now opening...\n";
		system(" start winword");
		cout<<"\n";
	}
	else if (choice_command == "i")//chrome
	{
		system("cls");
		cout<<"Google Chrome is now opening...\n";
		system("start chrome");
		cout<<"\n";
	}
	else if (choice_command == "j")//excel
	{
		system("cls");
		cout<<"Excel is now opening...\n";
		system(" start excel");
		cout<<"\n";
	}
	else if (choice_command == "k")//specification
	{
		system("cls");
		cout<<"Specifications of your PC is now opening...\n";
		system("dxdiag");
		cout<<"\n";
	}
	else if (choice_command == "l")//system configuration
	{
		system("cls");
		cout<<"System Configuration is now opening...\n";
		system("start msconfig");
		cout<<"\n";
	}
	else if (choice_command == "m")//net user
	{
		system("cls");
		cout<<"Net user is now opening...\n";
		system("net user");
		cout<<"\n";
	}
	else if (choice_command == "n")//ms publisher
	{
		system("cls");
		cout<<"MS Publisher is now opening...\n";
		system("start mspub");
		cout<<"\n";
	}
	else if (choice_command == "o")//ms powerpoint
	{
		system("cls");
		cout<<"MS Powerpoint is now opening...\n";
		system("start mspowerpnt");
		cout<<"\n";
    }
    else if (choice_command == "p")//notepad
	{
		system("cls");
		cout<<"Notepad is now opening...\n";
		system("start notepad");
		cout<<"\n";
    }
    else if (choice_command == "q")//outlook
	{
		system("cls");
		cout<<"Outlook is now opening...\n";
		system("start outlook");
		cout<<"\n";
	}
	else if (choice_command == "r")//infopath
	{
		system("cls");
		cout<<"Infopath is now opening...\n";
		system("start infopath");
		cout<<"\n";
	}
	else if (choice_command == "s")//onenote
	{
		system("cls");
		cout<<"Onenote is now opening...\n";
		system("start onenote");
		cout<<"\n";
	}
	else if (choice_command == "t")//explorer
	{
		system("cls");
		cout<<"Explorer is now opening...\n";
		system("start explorer");
		cout<<"\n";
	}
	else if (choice_command == "u")//exit
	{
		 system("cls");
         cout<< "\n\t\t\t\t      GOODBYE."<<endl;
         splash();
         return 0;
         
	}
	else
	{
		main();
	}
    cout<<"Do you want to enter another command? [YES/NO] : ";//condition for executing another command
    cin>>YES_NO;
                
    if ( YES_NO == "YES")
    {
         system("cls");
         main();
    }
    else if ( YES_NO == "NO")
    {
         system("cls");
         cout<< "\n\n\n\t\t\t\t      GOODBYE."<<endl;
         splash();
         return 0;
    }
    else
    {
        system("cls");//It will appear if the user entered an invalid command 
        cout<<"Do you want to enter another command? [YES/NO] : ";
        cin>>YES_NO;
        system("cls");
        cout<<"Do you want to enter another command? [YES/NO] : ";
        cin>>YES_NO;
        system("cls");
        cout<<"You have entered again an invalid command choice, the program is now closing....\n"<<endl;
        splash();
        return 0;
}
         
	system("pause");
    return 0;
}

