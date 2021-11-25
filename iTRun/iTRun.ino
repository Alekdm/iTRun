// iTRun OPENS A HIDDEN POWERSHELL WINDOW, DOWNLOADS FILES NEEDED FOR BRAND NEW COMPANY 
//PC'S AND RUNS FILES


#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT);        //LED ON MODEL A 
}

void loop() {


                            //FILE DOWNLOADS ON TEMP FOLDER

                            //--------------------------------------

                            //ChromeSetup.exe-File
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("powershell -NoP -Win H -Noni -Exec Bypass"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("irm -uri \"https://github.com/Alekdm/itdownloads/raw/main/ChromeSetup.exe\" -OutFile \"$env:temp\\ChromeSetup.exe\";"));
  DigiKeyboard.print(F("Add-Type -AssemblyName presentationCore;"));
  DigiKeyboard.print(F("$filepath = [uri] \"$env:temp\\ChromeSetup.exe\";"));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  

                            //OfficeSetup.exe-File
                            
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("powershell -NoP -Win H -Noni -Exec Bypass"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("irm -uri \"https://github.com/Alekdm/itdownloads/raw/main/OfficeSetup.exe\" -OutFile \"$env:temp\\OfficeSetup.exe\";"));
  DigiKeyboard.print(F("Add-Type -AssemblyName presentationCore;"));
  DigiKeyboard.print(F("$filepath = [uri] \"$env:temp\\OfficeSetup.exe\";"));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);


                            //PWF%20-%20SC%20-%20MSI.msi(ScreenConnect)-File
                            
  DigiKeyboard.sendKeyStroke(0);      
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("powershell -NoP -Win H -Noni -Exec Bypass"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("irm -uri \"https://github.com/Alekdm/itdownloads/raw/main/PWF%20-%20SC%20-%20MSI.msi\" -OutFile \"$env:temp\\PWF%20-%20SC%20-%20MSI.msi\";"));
  DigiKeyboard.print(F("Add-Type -AssemblyName presentationCore;"));
  DigiKeyboard.print(F("$filepath = [uri] \"$env:temp\\PWF%20-%20SC%20-%20MSI.msi\";"));
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);



                          //INSTALL FILES

                          //ChromeSetup.exe
                          
  //Office_SetUp
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("%USERPROFILE%\\AppData\\Local\\Temp\\OfficeSetup.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(8000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  //Chrome_Setup
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("%USERPROFILE%\\AppData\\Local\\Temp\\ChromeSetup.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(8000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  //Screen-Connect_Setup
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("%USERPROFILE%\\AppData\\Local\\Temp\\PWF%20-%20SC%20-%20MSI.msi");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(8000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  

    
  digitalWrite(1, HIGH);      //LED TURNS ON WHEN FINISHED
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
  for(;;){ /*empty*/ }
}
