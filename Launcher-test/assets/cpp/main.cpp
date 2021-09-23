#include <iostream>

int download(std::string url, std::string destination) {
    std::cout << "telechargement de minecraft\n";
    system(("powershell -Command \"(New-Object Net.WebClient).DownloadFile('" + url + "', '" + destination + "')\" ").c_str());
    return 0;
}


int main() {
    std::cout << "Programme d'installation\n";
    system("title minecraft");
    system("if not exist %CD%\\Launcher md %CD%\\Launcher");
    download("https://craftdium.ml/res/launcher/launcher.txt", "Launcher\\launcher.bat");
    system("cd Launcher && launcher.bat");
    return 0;
}