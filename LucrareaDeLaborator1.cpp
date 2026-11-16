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

// 9. Este dat un număr real S – aria pătratului. Să se elaboreze un program care calculează
// latura și perimetrul acestuia.

/*
#include <iostream>
#include <cmath>

int main() {
	double aria, sqrtAria;
	std::cout << "Introduceti aria patratului: ";
	std::cin >> aria;
	sqrtAria = std::sqrt(aria);
	std::cout << "Latura patratului: " << sqrtAria << std::endl;
	std::cout << "Perimetrul patratului: " << sqrtAria * 4 << std::endl;
}
*/

// 10. O persoană a depus pe cont R lei. La sfârșitul fiecărei luni suma se mărește cu W
// procente. Ce sumă de bani va fi pe cont peste 3, 4, 5 luni?

/*
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
	double lei, procente, formula;
	std::cout << "Introduceti suma depusa (lei): ";
	std::cin >> lei;
	std::cout << "Introduceti procentul de crestere lunar (%): ";
	std::cin >> procente;
	formula = 1.0 + procente / 100.0;
    std::cout << std::fixed << std::setprecision(2);
	std::cout << "Suma dupa trei luni: " << lei * std::pow(formula, 3) << std::endl;
    std::cout << "Suma dupa patru luni: " << lei * std::pow(formula, 4) << std::endl;
    std::cout << "Suma dupa cinci luni: " << lei * std::pow(formula, 5) << std::endl;
}
*/

// 11. Pe parcursul lecțiilor de informatică 4 elevi au rezolvat probleme la calculator.
// Primul elev a rezolvat toate problemele în N min, toți ceilalți au folosit cu 10 min mai
// mult decât precedentul său. Cât timp a fost necesar elevilor?

/*
#include <iostream>

int main() {
    unsigned int mins;
	std::cout << "Introduceti timpul primului elev (minute): ";
	std::cin >> mins;
    std::cout << "Timpul necesar elevului al doilea: " << mins + 10 << " minute." << std::endl;
    std::cout << "Timpul necesar elevului al treilea: " << mins + 20 << " minute." << std::endl;
    std::cout << "Timpul necesar elevului al patrulea: " << mins + 30 << " minute." << std::endl;
    std::cout << "Timpul total necesar elevilor: " << mins * 4 + 60 << " minute." << std::endl;
}
*/

// 12. Este dat un număr natural N. Să se elaboreze un program care calculează câte ore,
// minute, secunde sunt în:
// a) n zile(o zi = 24 ore);
// b) n săptămâni(o săptămână = 7 zile);
// c) luna mai.

/*
#include <iostream>

int main() {
	unsigned long long int n, hours, mins, secs;
	std::cout << "Introduceti un numar natural: ";
	std::cin >> n;
	hours = n * 24;
	mins = hours * 60;
	secs = mins * 60;
	std::cout << "In " << n << " zile sunt " << hours << " ore, " << mins << " minute si " << secs << " secunde." << std::endl;
    hours = n * 24 * 7;
    mins = hours * 60;
    secs = mins * 60;
    std::cout << "In " << n << " saptamani sunt " << hours << " ore, " << mins << " minute si " << secs << " secunde." << std::endl;
    hours = 24 * 31;
    mins = hours * 60;
    secs = mins * 60;
    std::cout << "In luna mai sunt " << hours << " ore, " << mins << " minute si " << secs << " secunde." << std::endl;
}
*/

// 13. Elevul dorește să înscrie pe o dischetă 3 fișiere de dimensiuni X, Y, Z Kb. Volumul
// dischetei este de 1,41Mb. De câte dischete are nevoie elevul?

/*
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, z;
    cout << "Introduceti trei dimensiuni ale fisierelor (Kb):";
    cin >> x >> y >> z;
    cout << "Dimensiunile tuturor fisierelor este de " << x + y + z << " Kb. Aveti nevoie de " << ceil((x + y + z) / 1410) << " dischete." << endl;
}
*/

// 14. Se citește un număr natural X format din 4 cifre. Să se afișeze numărul obținut din
// suma numerelor care se obțin eliminând pe rând ultima cifră a lui X, apoi ultimele două,
// apoi ultimele trei.

/*
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned int x;
    cout << "Introduceti un numar natural format din patru cifre: ";
    cin >> x;
    cout << x / 10 + x / 100 + x / 1000 << endl;
}
*/

// 15. O familie a hotărât să schimbe vechiul său automobil pe unul nou. Prețul cu care
// poate fi vândut automobilul vechi este N lei, suma de pe contul bancar al familiei este de
// K lei. Luând în considerație că suma de care dispune familia este mai mare decât prețul
// automobilului nou și prețul acestuia este de X lei, să se determine ce sumă de bani va avea
// familia după procurarea automobilului.

/*
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned int n, k, x;
    cout << "Introduceti pretul cu care poate fi vandut automobilul vechi: ";
    cin >> n;
    cout << "Introduceti suma de pe contul bancar al familiei: ";
    cin >> k;
    cout << "Introduceti pretul automobilului nou: ";
    cin >> x;
    if (n + k < x) {
        cout << "Suma de bani nu este suficienta pentru procurarea automobilului nou." << endl; }
        else {
            cout << "Suma de bani pe care o va avea familia dupa procurarea automobilului este de " << n + k - x << " lei." << endl;
    }
}
*/

// 16. Să se afișeze imaginea inversă a numărul natural introdus de 3 cifre.

/*
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned int num;
    cout << "Introduceti un numar natural format din trei cifre: ";
    cin >> num;
    if (num < 100 || num > 999) {
        cout << "Numarul este mai mare sau mai mic decat un numar de trei cifre." << endl; }
        else {
            cout << "Imaginea inversa a numarul natural introdus de 3 cifre: " << (num % 10 * 100) + (num % 100 - num % 10) + num / 100 << endl;
        }
}
*/
