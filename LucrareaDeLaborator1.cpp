// 1. Să se scrie un program care citește un număr de ani și calculează numărul de luni, zile 
// și ore corespunzătoare.Se consideră că un an are 365 zile.

/*
#include <iostream>

int main() {
    unsigned int years;
    std::cout << "Introduceti numarul de ani: ";
    std::cin >> years;
    std::cout << "Luni: " << years * 12 << " Zile: " << years * 365 << " Ore: " << years * 8760 << std::endl;
 }
*/

// 2. Se citește un număr X format din exact 4 cifre. Să se afișeze numărul care se obține 
// prin eliminarea cifrelor din mijloc.

/*
#include <iostream>

int main() {
    int x;
    std::cout << "Introduceti un numar de patru cifre: ";
    std::cin >> x;
    std::cout << "Numarul primit: " << x / 1000 * 10 + x % 10 << std::endl;
}
*/

// 3. Ion și Vasile joacă următorul joc: Ion spune un număr, iar Vasile trebuie să găsească 
// cinci numere consecutive, crescătoare, numărul din mijloc fiind cel ales de Ion. Ajutați-l
// pe Vasile să găsească răspunsul mai repede.

/*
#include <iostream>

int main() {
    int num;
    std::cout << "Introduceti un numar: ";
    std::cin >> num;
    std::cout << "Ion Ciobanu spune " << num << ", Vasile Babiciuc spune " << num - 2 << " " << num - 1 << " " << num << " " << num + 1 << " " << num + 2 << "." << std::endl;
}
*/

// 4. Se citește un număr natural X format din exact 4 cifre nenule. Afișați numerele 
// obținute în următoarele moduri :
// a) schimbând prima cifră cu ultima;
// b) schimbând între ele cifrele din mijloc;
// c) înlocuind cifrele din mijloc cu doi de 0.

/*
#include <iostream>

int main() {
    int x;
    std::cout << "Introduceti un numar din patru cifre: ";
    std::cin >> x;

    int one = x / 1000;
    int two = x / 100 % 10;
    int three = x / 10 % 10;
    int four = x % 10;

    // a)
    std::cout << "Prima cifra schimbata cu ultima: " << four * 1000 + two * 100 + three * 10 + one << std::endl;

    // b)
    std::cout << "Cifrele din mijloc schimbate intre ele: " << one * 1000 + three * 100 + two * 10 + four << std::endl;

    // c)
    std::cout << "Cifrele din mijloc inlocuite cu doi de 0: " << one * 1000 + four << std::endl;
}
*/

// 5. Se citește un număr natural X format din 4 cifre. Să se afișeze numărul obținut din
// suma numerelor care se obțin eliminând pe rând prima cifră a lui X, apoi primele două,
// apoi primele trei.

/*
#include <iostream>

int main() {
    int x;
    std::cout << "Introduceti un numar din patru cifre: ";
    std::cin >> x;
    std::cout << "Numarul obtinut: " << x % 1000 + x % 100 + x % 10 << std::endl;
}
*/

// 6. Se cunoaște vârsta lui Nicolae – X ani și al lui Mihai – Z ani.Să se calculeze vârsta
// medie a acestora și diferența lor de vârstă.

/*
#include <iostream>
#include <cmath>

int main() {
    double kolea, misha;
    std::cout << "Introduceti varsta lui Nicolae: ";
    std::cin >> kolea;
    std::cout << "Introduceti varsta lui Mihai: ";
    std::cin >> misha;
    std::cout << "Varsta medie: " << (kolea + misha) / 2.0 << std::endl;
    std::cout << "Diferenta de varsta: " << std::abs(kolea - misha) << std::endl;
}
*/

// 7. Alexandra a economisit S lei și vrea să depoziteze această sumă la o bancă cu o
// dobânda de P % pe an, pe un termen de 3 luni. Să se afișeze dobânda obținută de Alexandra
// după 3 luni. Valorile S și P sunt numere naturale citite de la tastatură.

/*
#include <iostream>

int main() {
    float depozit, procent, dobanda;
    std::cout << "Introduceti depozitul initial (lei): ";
    std::cin >> depozit;
    std::cout << "Introduceti dobanda pe an (%): ";
    std::cin >> procent;
    std::cout << "Dobanda obtinuta dupa 3 luni: " << (depozit * procent / 100) / 4 << " lei." << std::endl;
}
*/

// 8.  Se cunoaște viteza de deplasare a Valentinei către Marina – V1 km / h, și viteza de
// deplasare a  Marinei către Valentina – V2 km / h.Să se determine peste cât timp ele se vor
// întâlni, dacă distanța inițială dintre ele este de S km.

/*
#include <iostream>
#include <cmath>

int main() {
	float Vvalentina, Vmarina, distanta; unsigned int hours, mins;
    std::cout << "Introduceti viteza de deplasare a Valentinei (km/h): ";
    std::cin >> Vvalentina;
    std::cout << "Introduceti viteza de deplasare a Marinei (km/h): ";
    std::cin >> Vmarina;
    std::cout << "Introduceti distanta initiala dintre Valentina si Marina (km): ";
    std::cin >> distanta;
    hours = distanta / (Vvalentina + Vmarina);
    mins = std::round(distanta / (Vvalentina + Vmarina) * 60 - (60 * hours));
    std::cout << "Valentina si Marina se vor intalni peste " << hours << " ore si " << mins << " minute." << std::endl;
}
*/
