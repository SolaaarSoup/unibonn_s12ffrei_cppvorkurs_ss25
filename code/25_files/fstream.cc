#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;
int main(){
    std::cout <<"Aktuelles Verzeichnis: " << fs::current_path() << std::endl; 
    fs::path cwd {fs::current_path()};

    fs::path tmp_dir {"tmp/"};
    fs::path abs_tmp_dir {fs::absolute(tmp_dir)};

    // Verzeichnis erstellen
    fs::create_directory(abs_tmp_dir);


    fs::path filename {abs_tmp_dir / "fib.dat"};

    std::cout << "  Ausgabe in Datei: " << filename << std::endl;

    { // Gültigkeitsbereich einschränken: Automatisches Schließen der Datei
        std::ofstream fout(filename);
        fout << "# n \t fib(n) \n";

        uint64_t F_nm2 {0};
        uint64_t F_nm1 {0};
        uint64_t F_n {1};

        fout << 0 << "\t" << 0 << "\n";
        fout << 1 << "\t" << F_n << "\n";
        for(uint64_t n {2}; n<=20; n++)
        {
            F_nm2 = F_nm1;
            F_nm1 = F_n;
            F_n = F_nm1 + F_nm2;
            fout << n << "\t" << F_n << "\n";
        }
        fout.close(); // optional, da der Gültigkeitsbereich von fout hier endet
    }


}

