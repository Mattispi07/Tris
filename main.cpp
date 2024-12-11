#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>
#include<cstdlib>
#include <ctime>
#include <windows.h>
#include <vector>
#include <conio.h>
//colori
#define VERDE "\x1B[38;5;48m"
#define ROSA "\x1B[38;5;129m"
#define BLU "\x1B[38;5;27m"
#define GRIGIO "\x1B[38;5;146m"
#define ROSSO "\x1B[38;5;196m"
#define AZZURRO "\x1B[38;5;123m"
#define GIALLO_G "\x1B[38;5;220m"
#define ROSSO_G "\x1B[38;5;160m"
#define BIANCO "\x1B[38;5;255m"
#define NERO "\x1B[38;5;0m"
#define RESET "\x1B[0m"
using namespace std;
class matrice1{
public:
    char matrice[3][3];
    bool turno=true;
    int vincite=0;
    int vAvversario=0;
    bool modalita=true; // se true -> semplice   se false ->difficile
    void intro();
    void stampa();
    void inizializza();
    void turno1();
    void turno2();
    int controllo();
    void vittoria();
    void sconfitta();
    void scegliMod();
    void stampaMenu();
};
void matrice1::intro(){
cout<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"                                             _______  ______    ___   _______ "<<endl;
Sleep(200);
cout<<"                                             |       ||    _ |  |   | |       |"<<endl;
Sleep(200);
cout<<"                                             |_     _||   | ||  |   | |  _____|"<<endl;
Sleep(200);
cout<<"                                               |   |  |   |_||_ |   | | |_____ "<<endl;
Sleep(200);
cout<<"                                               |   |  |    __  ||   | |_____  |"<<endl;
Sleep(200);
cout<<"                                               |   |  |   |  | ||   |  _____| |"<<endl;
Sleep(200);
cout<<"                                               |___|  |___|  |_||___| |_______|"<<endl;
Sleep(200);
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl;
printf("%s",ROSSO);
cout<<"                                             _______  ______    ___   _______ "<<endl;
Sleep(200);
printf("%s",ROSA);
cout<<"                                             |       ||    _ |  |   | |       |"<<endl;
Sleep(200);
printf("%s",GIALLO_G);
cout<<"                                             |_     _||   | ||  |   | |  _____|"<<endl;
Sleep(200);
printf("%s",VERDE);
cout<<"                                               |   |  |   |_||_ |   | | |_____ "<<endl;
Sleep(200);
printf("%s",AZZURRO);
cout<<"                                               |   |  |    __  ||   | |_____  |"<<endl;
Sleep(200);
printf("%s",BLU);
cout<<"                                               |   |  |   |  | ||   |  _____| |"<<endl;
Sleep(200);
printf("%s",BIANCO);
cout<<"                                               |___|  |___|  |_||___| |_______|"<<endl;
printf("%s",RESET);
system("cls");
system("color F0");
cout<<endl<<endl<<endl<<endl<<endl<<endl;
printf("%s",ROSSO);
cout<<"                                             _______  ______    ___   _______ "<<endl;
Sleep(200);
printf("%s",ROSA);
cout<<"                                             |       ||    _ |  |   | |       |"<<endl;
Sleep(200);
printf("%s",GIALLO_G);
cout<<"                                             |_     _||   | ||  |   | |  _____|"<<endl;
Sleep(200);
printf("%s",VERDE);
cout<<"                                               |   |  |   |_||_ |   | | |_____ "<<endl;
Sleep(200);
printf("%s",AZZURRO);
cout<<"                                               |   |  |    __  ||   | |_____  |"<<endl;
Sleep(200);
printf("%s",BLU);
cout<<"                                               |   |  |   |  | ||   |  _____| |"<<endl;
Sleep(200);
printf("%s",NERO);
cout<<"                                               |___|  |___|  |_||___| |_______|"<<endl;
printf("%s",RESET);
Sleep(400);
system("cls");
cout<<"CARICAMENTO..."<<endl;
Sleep(200);
scegliMod();
}
void matrice1::scegliMod(){
system("cls");
printf("%s",ROSSO);
    cout<<"                                             _______  ______    ___   _______ "<<endl;
    printf("%s",ROSA);
    cout<<"                                             |       ||    _ |  |   | |       |"<<endl;
    printf("%s",GIALLO_G);
    cout<<"                                             |_     _||   | ||  |   | |  _____|"<<endl;
    printf("%s",VERDE);
    cout<<"                                               |   |  |   |_||_ |   | | |_____ "<<endl;
    printf("%s",AZZURRO);
    cout<<"                                               |   |  |    __  ||   | |_____  |"<<endl;
    printf("%s",BLU);
    cout<<"                                               |   |  |   |  | ||   |  _____| |"<<endl;
    printf("%s",BIANCO);
    cout<<"                                               |___|  |___|  |_||___| |_______|"<<endl<<endl<<endl;
    printf("%s",ROSSO);
    cout<<"MODALITA':"<<endl;
    printf("%s",RESET);
    cout<<"Digita 1 per semplice"<<endl<<"Digita 2 per difficile"<<endl;
    int i=0;
    cin>>i;
    if(i<1|| i>2){
        cout<<"ERRORE!!!"<<endl;
        Sleep(300);
        system("cls");
        scegliMod();
    }
    else{
        if(i==1)
            modalita=true;
        else
            modalita=false;
    }
    system("cls");
    Sleep(400);
    system("cls");
    cout<<"CARICAMENTO..."<<endl;
    Sleep(200);
    inizializza();
}
void matrice1::stampa(){
    system("cls");
    printf("%s",ROSSO);
    cout<<"                                             _______  ______    ___   _______ "<<endl;
    printf("%s",ROSA);
    cout<<"                                             |       ||    _ |  |   | |       |"<<endl;
    printf("%s",GIALLO_G);
    cout<<"                                             |_     _||   | ||  |   | |  _____|"<<endl;
    printf("%s",VERDE);
    cout<<"                                               |   |  |   |_||_ |   | | |_____ "<<endl;
    printf("%s",AZZURRO);
    cout<<"                                               |   |  |    __  ||   | |_____  |"<<endl;
    printf("%s",BLU);
    cout<<"                                               |   |  |   |  | ||   |  _____| |"<<endl;
    printf("%s",BIANCO);
    cout<<"                                               |___|  |___|  |_||___| |_______|"<<endl<<endl<<endl;

    printf("%s",VERDE);
    cout<<"                                                                             Vincite Proprie:"<<vincite<<endl;
    printf("%s",ROSSO);
    cout<<"                                                                             Vincite Avversario:"<<vAvversario<<endl;
    printf("%s",RESET);
    if(turno==true)
        cout<<"TOCCA A TE..."<<endl<<endl;
    else
        cout<<"TURNO AVVERSARIO"<<endl<<endl;
    //matrice1 m;
    cout<<"                                                     -------------"<<endl;
    for(int i=0; i<3; i++){
        cout<<"                                                     ";
        for(int j=0; j<3; j++){
            cout<<"| ";
            if(matrice[i][j]=='X')
                printf("%s",VERDE);
            else if(matrice[i][j]=='O')
                printf("%s",ROSSO);
            else
                printf("%s",RESET);
            cout<<matrice[i][j]<<" ";
            printf("%s",RESET);
        }
        cout<<"|"<<endl<<"                                                     -------------"<<endl;
    }
    //Sleep(100);
    int a=controllo();
    if(a==1)
        vittoria();
    else if(a==2)
        sconfitta();
    else if(a==0){
        if(turno==false){
            Sleep(400);
            turno2();
        }
        else
            turno1();
    }
}
void matrice1::inizializza(){
    Sleep(2000);
    system("cls");
    int a=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            char b=a+48;
            matrice[i][j]=b;
            a++;
        }
    }
    stampa();
}
void matrice1::turno1(){
    turno=true;
    cout<<endl;
    cout<<"Dimmi una posizione:";
    int a=0;
    char b;
    cin>>b;
    if(b == 48 || b == 49 || b == 50 || b == 51 || b == 52 || b == 53 || b == 54 || b == 55 || b == 56){
        a=b-48;
    }
    else{
        cout<<"Errore!!"<<endl;
        stampa();
    }

    cout<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a==0){
                if(matrice[i][j]=='X'||matrice[i][j]=='O'){
                    cout<<"Posisizione gia' in uso"<<endl;
                    Sleep(200);
                    turno1();
                }
                else{
                    matrice[i][j]='X';
                    system("cls");
                    turno=false;
                    stampa();
                }
            }
            else
                a--;
        }
    }
}
void matrice1::turno2(){
    if(modalita==true){
        int a=rand()%9;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(a==0){
                    if(matrice[i][j]=='X'||matrice[i][j]=='O'){
                        turno2();
                    }
                    else{
                        matrice[i][j]='O';
                        system("cls");
                        turno=true;
                        stampa();
                    }
                }
                else
                    a--;
            }
        }
    }
    else if(modalita==false){
        //DIFESA
        if(matrice[0][0]=='X' && matrice[0][1]=='X' && matrice[0][2]!='O')
            matrice[0][2]='O';
        else if(matrice[1][0]=='X' && matrice[1][1]=='X' && matrice[1][2]!='O')
            matrice[1][2]='O';
        else if(matrice[2][0]=='X' && matrice[2][1]=='X' && matrice[2][2]!='O')
            matrice[2][2]='O';

        else if(matrice[0][2]=='X' && matrice[0][1]=='X' && matrice[0][0]!='O')
            matrice[0][0]='O';
        else if(matrice[1][2]=='X' && matrice[1][1]=='X' && matrice[1][0]!='O')
            matrice[1][0]='O';
        else if(matrice[2][2]=='X' && matrice[2][1]=='X' && matrice[2][0]!='O')
            matrice[2][0]='O';
        else if(matrice[0][2]=='X' && matrice[0][0]=='X' && matrice[0][1]!='O')
            matrice[0][1]='O';
        else if(matrice[1][2]=='X' && matrice[1][0]=='X' && matrice[1][1]!='O')
            matrice[1][1]='O';
        else if(matrice[2][2]=='X' && matrice[2][0]=='X' && matrice[2][1]!='O')
            matrice[2][1]='O';

        //controllo orizzontale
        else if(matrice[0][0]=='X' && matrice[1][0]=='X' && matrice[2][0]!='O')
            matrice[2][0]='O';
        else if(matrice[0][1]=='X' && matrice[1][1]=='X' && matrice[2][1]!='O')
            matrice[2][1]='O';
        else if(matrice[0][2]=='X' && matrice[1][2]=='X' && matrice[2][2]!='O')
            matrice[2][2]='O';

        else if(matrice[2][0]=='X' && matrice[1][0]=='X' && matrice[0][0]!='O')
            matrice[0][0]='O';
        else if(matrice[2][1]=='X' && matrice[1][1]=='X' && matrice[0][1]!='O')
            matrice[0][1]='O';
        else if(matrice[2][2]=='X' && matrice[1][2]=='X' && matrice[0][2]!='O')
            matrice[0][2]='O';

        else if(matrice[2][0]=='X' && matrice[0][0]=='X' && matrice[1][0]!='O')
            matrice[1][0]='O';
        else if(matrice[2][1]=='X' && matrice[0][1]=='X' && matrice[1][1]!='O')
            matrice[1][1]='O';
        else if(matrice[2][2]=='X' && matrice[0][2]=='X' && matrice[1][2]!='O')
            matrice[1][2]='O';

        //controllo obliquo
        else if(matrice[0][0]=='X' && matrice[1][1]=='X' && matrice[2][2]!='O')
            matrice[2][2]='O';
        else if(matrice[2][2]=='X' && matrice[1][1]=='X' && matrice[0][0]!='O')
            matrice[0][0]='O';
        else if(matrice[2][2]=='X' && matrice[0][0]=='X' && matrice[1][1]!='O')
            matrice[1][1]='O';

        else if(matrice[2][0]=='X' && matrice[1][1]=='X' && matrice[0][2]!='O')
            matrice[0][2]='O';
        else if(matrice[0][2]=='X' && matrice[1][1]=='X' && matrice[2][0]!='O')
            matrice[2][0]='O';
        else if(matrice[0][2]=='X' && matrice[2][0]=='X' && matrice[1][1]!='O')
            matrice[1][1]='O';




        //controllo verticale / ATTACCO
        else if(matrice[0][0]=='O' && matrice[0][1]=='O' && matrice[0][2]!='X')
            matrice[0][2]='O';
        else if(matrice[1][0]=='O' && matrice[1][1]=='O' && matrice[1][2]!='X')
            matrice[1][2]='O';
        else if(matrice[2][0]=='O' && matrice[2][1]=='O' && matrice[2][2]!='X')
            matrice[2][2]='O';

        else if(matrice[0][2]=='O' && matrice[0][1]=='O' && matrice[0][0]!='X')
            matrice[0][0]='O';
        else if(matrice[1][2]=='O' && matrice[1][1]=='O' && matrice[1][0]!='X')
            matrice[1][0]='O';
        else if(matrice[2][2]=='O' && matrice[2][1]=='O' && matrice[2][0]!='X')
            matrice[2][0]='O';

        else if(matrice[0][2]=='O' && matrice[0][0]=='O' && matrice[0][1]!='X')
            matrice[0][1]='O';
        else if(matrice[1][2]=='O' && matrice[1][0]=='O' && matrice[1][1]!='X')
            matrice[1][1]='O';
        else if(matrice[2][2]=='O' && matrice[2][0]=='O' && matrice[2][1]!='X')
            matrice[2][1]='O';

        //controllo orizzontale
        else if(matrice[0][0]=='O' && matrice[1][0]=='O' && matrice[2][0]!='X')
            matrice[2][0]='O';
        else if(matrice[0][1]=='O' && matrice[1][1]=='O' && matrice[2][1]!='X')
            matrice[2][1]='O';
        else if(matrice[0][2]=='O' && matrice[1][2]=='O' && matrice[2][2]!='X')
            matrice[2][2]='O';

        else if(matrice[2][0]=='O' && matrice[1][0]=='O' && matrice[0][0]!='X')
            matrice[0][0]='O';
        else if(matrice[2][1]=='O' && matrice[1][1]=='O' && matrice[0][1]!='X')
            matrice[0][1]='O';
        else if(matrice[2][2]=='O' && matrice[1][2]=='O' && matrice[0][2]!='X')
            matrice[0][2]='O';

        else if(matrice[2][0]=='O' && matrice[0][0]=='O' && matrice[1][0]!='X')
            matrice[1][0]='O';
        else if(matrice[2][1]=='O' && matrice[0][1]=='O' && matrice[1][1]!='X')
            matrice[1][1]='O';
        else if(matrice[2][2]=='O' && matrice[0][2]=='O' && matrice[1][2]!='X')
            matrice[1][2]='O';

        //controllo obliquo
        else if(matrice[0][0]=='O' && matrice[1][1]=='O' && matrice[2][2]!='X')
            matrice[2][2]='O';
        else if(matrice[2][2]=='O' && matrice[1][1]=='O' && matrice[0][0]!='X')
            matrice[0][0]='O';
        else if(matrice[2][2]=='O' && matrice[0][0]=='O' && matrice[1][1]!='X')
            matrice[1][1]='O';

        else if(matrice[2][0]=='O' && matrice[1][1]=='O' && matrice[0][2]!='X')
            matrice[0][2]='O';
        else if(matrice[0][2]=='O' && matrice[1][1]=='O' && matrice[2][0]!='X')
            matrice[2][0]='O';
        else if(matrice[0][2]=='O' && matrice[2][0]=='O' && matrice[1][1]!='X')
            matrice[1][1]='O';
        else{
           int a=rand()%9;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    if(a==0){
                        if(matrice[i][j]=='X'||matrice[i][j]=='O'){
                            turno2();
                        }
                        else{
                            matrice[i][j]='O';
                            system("cls");
                            turno=true;
                            stampa();
                        }
                    }
                    else
                        a--;
                }
            }
        }
        system("cls");
        turno=true;
        stampa();
    }
}
int matrice1::controllo(){
    //controllo orizzontale
    for(int i=0; i<3; i++){
        if(matrice[i][0]==matrice[i][1]&&matrice[i][1]==matrice[i][2]){
            if(matrice[i][0]=='X')
                return 1;
            else
                return 2;
        }
    }
    for(int i=0; i<3; i++){
        if(matrice[0][i]==matrice[1][i]&&matrice[1][i]==matrice[2][i]){
            if(matrice[0][i]=='X')
                return 1;
            else
                return 2;
        }
    }

    if(matrice[0][0]==matrice[1][1]&&matrice[1][1]==matrice[2][2]){
        if(matrice[0][0]=='X')
                return 1;
            else
                return 2;
    }
    else if(matrice[0][2]==matrice[1][1]&&matrice[1][1]==matrice[2][0]){
        if(matrice[0][2]=='X')
                return 1;
            else
                return 2;
    }
    int c=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(matrice[i][j]=='X'|| matrice[i][j]=='O')
                c++;
        }
    }
    if(c==9){
        cout<<endl<<"PAREGGIO"<<endl;
        Sleep(400);
        inizializza();
    }
    return 0;
}
void matrice1::vittoria(){
    //turno=NULL;
    vincite++;
    Sleep(600);
    printf("%s",GIALLO_G);
    cout<<"                                                        VITTORIA"<<endl;
    printf("%s",RESET);
    Sleep(300);
    cout<<"                                  Premi Esc per uscire, INVIO per continuare, + per menu"<<endl;
    char ch;
    ch = _getch(); // Legge il carattere premuto
    if(ch==27){
        cout << "Hai premuto ESC"<<endl;
        Sleep(300);
        cout<<"SALVATAGGIO IN CORSO...."<<endl;
        Sleep(300);
        cout<<endl<<"USCITA..."<<endl;
        abort();
    }
    else if(ch==13){
        cout<<"Creazione nuova partita..."<<endl;
        Sleep(600);
        inizializza();
    }
    else if(ch==43){
        cout << "Vai al menu. Continua...\n";
        Sleep(600);
        system("cls");
        stampaMenu();
    }
}
void matrice1::stampaMenu(){
    system("cls");
    printf("%s",VERDE);
        cout<<"                                                         MENU'"<<endl;
    printf("%s",BIANCO);
        cout<<"                                                  1-Torna al Gioco"<<endl;
        cout<<"                                                  2-Ripristina Gioco"<<endl;
        //cout<<"                                                  3-Cambio Font Schermo Notte"<<endl;
        //cout<<"                                                  4-Cambio Font Schermo Giorno"<<endl;
        //cout<<"                                                  5-Stampa Risultato"<<endl;
        cout<<"                                                  3-Istruzioni"<<endl;
        //cout<<"                                                  7-Stampa Record"<<endl;
        cout<<"                                                  4-Modalita'"<<endl;
        cout<<"                                                  5-Esci"<<endl<<endl;
        int a=0;
        cin>>a;
        if(a<1 || a>5){
            cout<<"ERRORE!!!"<<endl;
            Sleep(200);
            stampaMenu();
        }
        else{
            switch(a){
            case 1:
                stampa();

            case 2:
                vincite=0;
                vAvversario=0;
                inizializza();
            case 3:
                system("cls");
                   printf("%s",AZZURRO);
                cout<<"                                                     ISTRUZIONI"<<endl<<endl;
                printf("%s",BIANCO);
                cout<<"Il gioco e' tris, devi inizialmente sceglire una modalita' tra semplice e difficile, dopodiche' dovrano affrontare il tuo avversario cercando di fare tris"<<endl;
                cout<<"Il tris puo' essere fatto orizzontalmente, verticalmente o in diagonale"<<endl<<endl;
                system("pause");
                system("cls");
                stampaMenu();
            case 4:
                scegliMod();
            case 5:
                cout<<"SALVATAGGIO IN CORSO...."<<endl;
                Sleep(300);
                cout<<endl<<"USCITA..."<<endl;
                abort();
            }

        }

}
void matrice1::sconfitta(){
    //turno=NULL;
    vAvversario++;
    Sleep(600);
    printf("%s",ROSSO);
    cout<<"                                                     SCONFITTA"<<endl;
    printf("%s",RESET);
    Sleep(300);
    cout<<"                                    Premi Esc per uscire, INVIO per continuare, + per menu"<<endl;
    char ch;
    ch = _getch(); // Legge il carattere premuto
    if(ch==27){
        cout << "Hai premuto ESC"<<endl;
        Sleep(300);
        cout<<"SALVATAGGIO IN CORSO...."<<endl;
        Sleep(300);
        cout<<endl<<"USCITA..."<<endl;
        abort();
    }
    else if(ch==13){
        cout<<"Creazione nuova partita..."<<endl;
        Sleep(600);
        inizializza();
    }
    else if(ch==43){
        cout << "Vai al menu. Continua...\n";
        Sleep(600);
        system("cls");
        stampaMenu();
    }
}
int main()
{
    matrice1 m;
    m.intro();
    return 0;
}
