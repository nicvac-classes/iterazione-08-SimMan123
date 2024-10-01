#include <iostream>
using namespace std;

int main() {
    int s, i, p, m, som, d;
    cout << "s" << endl;
    do {
        cin >> s;
        if (s < 0) {
            cout << "s deve essere positivo" << endl;
        }
    } while (s < 0);
    string n[s];
    int v[s];
    som = 0;
    for (i = 0; i <= s - 1; i++) {
        cout << "nome studente" << endl;
        cin >> n[i];
        cout << "voto" << endl;
        cin >> v[i];
    }
    p = 0;
    d = 0;
    for (i = 0; i <= s - 1; i++) {
        som = som + v[i];
        if (v[i] > 6) {
            cout << "lo studente" << n[i] << "è stato promosso" << endl;
            p = p + 1;
        } else {
            cout << "lo studente" << n[i] << "ha preso il debito" << endl;
            d = d + 1;
        }
    }
    m = (int) ((double) som / s);
    cout << "i promossi sono" << p << "ed i bocciati sono" << d << endl;
    cout << "la media della classe è" << m << endl;
}
