/* RISOLUTORE EQUAZIONI MEDIANTE METODO DELLA BISEZIONE

Semplice programma in C++ che risolve l'equazione y = 2^x + x utilizzando il metodo della bisezione per approssimare la soluzione secondo le cifre decimali inserite.

*/

#include <iostream>
#include <cmath>
using namespace std;
string intestazione = "\x1b[1m \x1b[34m ==== METODO DELLA BISEZIONE ==== \x1b[0m \n\n";
string credits = "\n\n\x1b[1m\x1b[32m==== Alex1789 ====\x1b[0m\n\n";

double fx(double x) {
  return pow(2,x)+x;
}

double defVariabile(char x) {
  double insert;
  system("clear");
  cout << intestazione << "Inserisci il valore di \x1b[1m\x1b[32m" << x << "\x1b[0m\n\n> ";
  cin >> insert;
  return insert;
}

int main() {
  double a, b, pDef;
  int p, intervallo;
  bool errore=false;
  
  system("clear"); //Per pulire la console prima dell'esecuzione
  do {
    if (errore) {
      cout << "\x1b[1m \x1b[31m ERORRE NELL'INPUT -> RIPROVA\n\n\a\x1b[0m";
    }
    cout << intestazione << "Inserire il numero di cifre decimali:\n\n1. soluzione approssimata a meno di un decimo (0.a)\n2. soluzione approssimata ai centesimi (0.ab)\n3. soluzione approssimata ai millesimi (0.abc)\n4. 0.abcd\n5. 0.abcde\n6. 0.abcdef\n7. precisione massima di macchina (|a-b|=0) con il numero massimo di cifre significative (53)\n\n> ";
  cin >> p;
  errore=true;
  system("clear");
  } while(p<1 || p>7);

  switch (p) {
    case 1:
      pDef=0.1;
      break;
    case 2:
      pDef=0.01;
      break;
    case 3:
      pDef=0.001;
      break;
    case 4:
      pDef=0.0001;
      break;
    case 5:
      pDef=0.00001;
      break;
    case 6:
      pDef=0.000001;
      break;
    case 7:
      pDef=0;
      p=53;
      break;
    default:
      return 1;
  }
  cout.precision(p);
  
  errore=false; //reset della variabile booleana errore per il ciclo postcondizionale successivo
  
  do {
    if (errore) {
      cout << "\x1b[1m \x1b[31m ERORRE NELL'INPUT -> RIPROVA\n\n\a\x1b[0m";
    }
  cout << intestazione << "Determina l'intervallo nel quale cercare le soluzioni:\n\n1. Intervallo standard \x1b[1m\x1b[32m[-1;0] \x1b[0m \n2. Intervallo personalizzato nella forma [a;b]\n\n> ";
      cin >> intervallo;
    errore=true;
    system("clear");
  } while (intervallo < 1 || intervallo > 2);

  switch (intervallo) {
    case 1:
      a=-1;
      b=0;
      break;
    case 2:
      a=defVariabile('a');
      b=defVariabile('b');
      break;
    default:
      return 1;
  }

  //esecuzione della bisezione

  while (abs(a-b)>=pDef && fx(a)*fx(b)<0) {
    if(fx(a)*fx((a+b)/2)>0) {
      a=(a+b)/2;
    } else {
      b=(a+b)/2;
    }
  }

  system("clear");
  cout << intestazione << "La soluzione è \x1b[1m\x1b[33m" << a;
  if(p<4)
    cout.precision(4);
  if(p<2)
    cout << "\n\n\x1b[1m\x1b[41m Attenzione! \x1b[0m Avendo inserito un valore di cifre decimali pari a 1 è bene verificare tramite il controllo integrità sotto riportato la veridicità del risultato che, essendo soggetto ad approssimazione potrebbe essere stato sfalsato (\x1b[4mes.\x1b[0m 0.68 = 0.7)";
  cout << "\x1b[0m\n\n\n\n\x1b[1m\x1b[46m Controllo integrità: \n\n\x1b[0m\x1b[36ma = " << a <<"\nb = "<< b << credits;
}
