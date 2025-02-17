#include <iostream>
#include <fstream>
#include <filesystem>

int main(){
    std::cout <<"Aktuelles Verzeichnis: " << std::filesystem::current_path() << std::endl; 
    std::filesystem::path cwd {std::filesystem::current_path()};

    std::filesystem::path tmp_dir {"tmp/"};
    std::filesystem::path abs_tmp_dir {std::filesystem::absolute(tmp_dir)};

    std::cout << "tmp_dir: " << tmp_dir << std::endl;
    std::cout << "absoluter Pfad tmp_dir: " << abs_tmp_dir << std::endl;

    // Verzeichnis erstellen
    std::filesystem::create_directory(abs_tmp_dir);


    using namespace std::filesystem; // Importiere Namensraum
    current_path(abs_tmp_dir);
    path cwd2 {current_path()};
    std::cout << "Aktuelles Verzeichnis: " << cwd2 << std::endl;
    

    // wechseln ins Arbeitszverzeichnis vom Beginn
    std::filesystem::current_path(cwd);

    std::cout << "Das Verzeichnis " << cwd.filename() << " enthält: \n" << std::endl;
    // Iterieren über Verzeichnisinhalt
    for(auto & entry: std::filesystem::directory_iterator(cwd)){
        std::cout << entry.path().filename() << std::endl; // nur basename
    }


}

