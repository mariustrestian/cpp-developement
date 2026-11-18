// 1. Să se elaboreze un program care să citească de la tastatură trei valori numerice a, b, c
// şi apoi să afișeze pe ecran cea mai mare diferență dintre oricare două valori date.

/*
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double a, b, c;
    cout << "Introduceti trei valori numerice: " << endl;
    cin >> a >> b >> c;
    cout << "Cea mai mare diferenta: " << max({a, b, c}) - min({a, b, c}) << endl;
    return 0;
}
*/

// 2. Să se elaboreze un program care să citească de la tastatură trei numere reale a, b, c și
// să determine dacă acestea pot constitui lungimile laturilor unui triunghi. În caz
// afirmativ se va afișa tipul triunghiului (oarecare, isoscel, echilateral, dreptunghic).

/*
#include <iostream>

using namespace std;

int main() {
    unsigned int a, b, c;
    cout << "Introduceti trei valori numerice: " << endl;
    cin >> a >> b >> c;
    if (a==b && b==c) {
        cout << "Triunghi echilateral." << endl;
    } else if (a==b && b!=c || b==c && a!=b || a==c && a!=b) {
        cout << "Triunghi isoscel." << endl;
    } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        cout << "Triunghi dreptunghic." << endl;
    } else if (a != b && a != c && b != c) {
        cout << "Triunghi oarecare." << endl;
    } else {
        cout << "Numerele introduse nu pot construi lungimile laturilor unui triunghi." << endl;
    }
    return 0;
}
*/

// 3. Să se elaboreze un program care să citească un număr X natural din exact 3 cifre și să
// se genereze cel mai mare număr care are aceleași cifre ca el.

/*
#include <iostream>

using namespace std;

int main() {
    unsigned int a, b, c, num, big1, big2, big3, finalnum;
    cout << "Introduceti un numar natural din trei cifre: " << endl;
    cin >> num;
    if (num < 100 || num > 999) {
        cout << "Numarul este mai mic sau mai mare de trei cifre." << endl;
        return 0;
    }
    a = num / 100;
    b = (num % 100) / 10;
    c = num % 10;
    if (a > b && a > c) {
        big1 = a;
    }
    else if (b > a && b > c) {
        big1 = b;
    }
    else {
        big1 = c;
    }
    if (a < b && a < c) {
        big3 = a;
    }
    else if (b < a && b < c) {
        big3 = b;
    }
    else {
        big3 = c;
    }
    if (big1 == a) {
        if (big3 == b) {
            big2 = c;
        }
        else {
            big2 = b;
        }
    }
    else if (big1 == b) {
        if (big3 == a) {
            big2 = c;
        }
        else {
            big2 = a;
        }
    }
    else {
        if (big3 == a) {
            big2 = b;
        }
        else {
            big2 = a;
        }
    }
    finalnum = big1 * 100 + big2 * 10 + big3;
    cout << "Cel mai mare numar cu aceleasi cifre: " << finalnum << endl;
    return 0;
}
*/

// 4. Să se elaboreze un program care să citească de la tastatură două numere reale a și b,
// apoi să pună utilizatorului întrebarea: Ce doriți să calculați, media aritmetică sau
// geometrică? Dacă se va răspunde prin 1, se va calcula și afișa media aritmetică a
// numerelor, iar pentru 2 – media geometrică (numai în cazul numerelor pozitive). Dacă
// nu se răspunde prin 1 sau 2 se va afișa ‘Răspuns incorect’.

/*
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b; unsigned int variant;
    cout << "Introduceti doua numere reale: " << endl;
    cin >> a >> b;
    cout << "Ce doriti sa calculati, media aritmetica sau geometrica? " << endl;
    cin >> variant;
    if (variant < 1 || variant > 2) {
        cout << "Raspuns incorect." << endl;
        return 0;
    }
    else if (variant == 1) {
        cout << "Media aritmetica a numerelor introduse: " << (a + b) / 2 << endl;
    }
    else {
        if (a > 0 && b > 0) {
            cout << "Media geometrica a numerelor introduse: " << sqrt(a * b) << endl;
        }
        else {
            cout << "Unul sau ambele numere nu sunt pozitive." << endl;
            return 0;
        }
    }
    return 0;
}
*/

// 5. Să se elaboreze un program care să citească un număr X natural din exact 3 cifre și
// să genereze cel mai mic număr care are aceleași cifre ca el.

/*
#include <iostream>

using namespace std;

int main() {
    unsigned int a, b, c, num, big1, big2, big3, finalnum;
    cout << "Introduceti un numar natural din trei cifre: " << endl;
    cin >> num;
    if (num < 100 || num > 999) {
        cout << "Numarul este mai mic sau mai mare de trei cifre." << endl;
        return 0;
    }
    a = num / 100;
    b = (num % 100) / 10;
    c = num % 10;
    if (a > b && a > c) {
        big1 = a;
    }
    else if (b > a && b > c) {
        big1 = b;
    }
    else {
        big1 = c;
    }
    if (a < b && a < c) {
        big3 = a;
    }
    else if (b < a && b < c) {
        big3 = b;
    }
    else {
        big3 = c;
    }
    if (big1 == a) {
        if (big3 == b) {
            big2 = c;
        }
        else {
            big2 = b;
        }
    }
    else if (big1 == b) {
        if (big3 == a) {
            big2 = c;
        }
        else {
            big2 = a;
        }
    }
    else {
        if (big3 == a) {
            big2 = b;
        }
        else {
            big2 = a;
        }
    }
    finalnum = big3 * 100 + big2 * 10 + big1;
    cout << "Cel mai mic numar cu aceleasi cifre: " << finalnum << endl;
    return 0;
}
*/

// 6. Să se elaboreze un program care să citească data curentă (zi, lună, an) și să
// determine data zilei următoare.

/*
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t acum = time(0);
    tm *dataLocala = localtime(&acum);
    int zi = dataLocala->tm_mday;
    int luna = dataLocala->tm_mon + 1;
    int an = dataLocala->tm_year + 1900;
    cout << "Data curenta este: " << zi << "." << luna << "." << an << endl;
    int zileInLuna = 31;
    if (luna == 4 || luna == 6 || luna == 9 || luna == 11) {
        zileInLuna = 30;
    } else if (luna == 2) {
        bool esteBisect = (an % 4 == 0 && an % 100 != 0) || (an % 400 == 0);
        zileInLuna = esteBisect ? 29 : 28;
    }
    if (zi < zileInLuna) {
        zi++;
    } else {
        zi = 1;
        if (luna < 12) {
            luna++;
        } else {
            luna = 1;
            an++;
        }
    }
    cout << "Data zilei urmatoare este: " << zi << "." << luna << "." << an << endl;
    return 0;
}
*/

// 7. Fie a, b, c, d numere întregi citite de la tastatură. Să se elaboreze un program care
// să calculeze suma primelor două dacă c<d, produsul lor dacă c>d și suma
// inverselor, dacă c=d.

/*
#include <iostream>

using namespace std;

int main() {
    double a, b, c, d;
    cout << "Introduceti patru numere intregi: " << endl;
    cin >> a >> b >> c >> d;
    if (c<d) {
        cout << "C < D. Suma primelor doua este: " << a + b << endl;
    }
    else if (c>d) {
        cout << "C > D. Produsul primelor doua este: " << a * b << endl;
    }
    else {
        cout << "C = D. Suma inverselor primelor doua este: " << (1.0 / a) + (1.0 / b) << endl;
    }
    return 0;
}
*/
