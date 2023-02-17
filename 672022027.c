#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#define phi 3.14
#define MAX 255


//ngubah sesuai kartesius
void gotoxy(int x, int y){
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }

//ngilangin kursor
void hidecursor(){
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

//panah
int pointer=1;
char pil;


//menu
int pilihan;
int kabataku;
int sincostan;
int bangunan;
int luas, keliling, volume;


//pengulangan
int bruh;



//login
void login(){

    int pilih, i, y, x, z;
    char c;
    char pass[10];
    char user[10];

    system("color F4");

    login:
    gotoxy(32,4);
    printf("==================================================");
    gotoxy(32,5);
    printf("X                                                X");
    gotoxy(32,6);
    printf("X                 SELAMAT DATANG                 X");
    gotoxy(32,7);
    printf("X                                                X");
    gotoxy(32,8);
    printf("==================================================");
    gotoxy(32,10);
    printf("X                                                X");
    gotoxy(32,11);
    printf("X                                                X");
    gotoxy(32,12);
    printf("X     Masukkan Username         :                X");
    gotoxy(32,14);
    printf("X     Masukkan Password         :                X");
    gotoxy(32,15);
    printf("==================================================");
    gotoxy(67,12);
    scanf("%s",&user);
    gotoxy(67,14);

    for ( i = 0 ; i<100 ; i++ )
    {

        c = getch();
        pass[i] = c ;

        if ( pass[i] == '\b')
        {
            printf("\b \b");
            i-= 2;
            continue;
        }
        if ( pass[i] == ' ' || pass[i] == '\r' )
            printf(" ");
        else
            printf("*");
        if ( pass[i]=='\r')
            break;
    }

    if(strcmp(user,"adeliness")==0){
        gotoxy(43,22);
        printf("----------------------------");
        gotoxy(43,23);
        printf("+      AKSES DITERIMA      +");
        gotoxy(43,24);
        printf("----------------------------");
        gotoxy(57,25);
        printf(" ");
        getch();
        system("cls");
    }else{
        gotoxy(43,22);
        printf("----------------------------");
        gotoxy(43,23);
        printf("+      AKSES  DITOLAK      +");
        gotoxy(43,24);
        printf("----------------------------");
        gotoxy(57,25);
        printf(" ");
        getch();
        system("cls");
        goto login;
    }


}//end login




//loading
void loading(){
    int y;

    system("color 8F");
    gotoxy(32,13);

    char clr[]="S e d a n g   M e m b e r s i h k a n   L a y a r . . .";
        for(y=0; clr[y]!=NULL; y++){
            printf("%c",clr[y]);
            Sleep(45);
        }
        system("cls");

    gotoxy(34,28);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),135);
    printf("Pembersihan selesai, tekan ENTER untuk lanjut...");
    getch();
}//end loading

void loading2(){

    hidecursor();
    char muter[] = "\|/-";
    int j, i;

    system("Color 8F");
    gotoxy(55, 12);
    printf("Loading...");
    for(i=1; i<=10; i++){
        gotoxy(53, 12);
        printf("%c", muter[j++]);
        Sleep(50);
        //strlen buat ngitung banyak string
        if(j == strlen(muter))
            j = 0;
        }
    system("cls");
}//end loading2



//kumpulan void untuk pingporolansudo
void penjumlahan(){
    fflush(stdin);
    float a, b;
    float hasil;

    penjumlahan:
    system("Color E0");
    gotoxy(5,4);
    printf("--------------------PENJUMLAHAN--------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),232);
    gotoxy(5,5);
    printf("  Masukkan Angka Pertama: ");
    scanf("%f", &a);
    gotoxy(5,6);
    printf("  Masukkan Angka Kedua: ");
    scanf("%f", &b);

    hasil = a+b;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),228);
    gotoxy(5,7);
    printf("o--------------------------------------------------o");
    gotoxy(5,8);
    printf("| Hasil Penjumlahan dari %.2f + %.2f adalah %.2f  |", a,b,hasil);
    gotoxy(5,9);
    printf("o--------------------------------------------------o");
    back:
    gotoxy(5,10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),224);
    printf("  Perlu diulang ga? (y/g): ");

                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto penjumlahan;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *pingporolansudo();
                }else{

                system("cls");
                goto back;
                }
}//end penjumlahan

void pengurangan(){
    fflush(stdin);
    float c, d;
    float total;

    pengurangan:
    system("Color E0");
    gotoxy(5,4);
    printf("--------------------PENGURANGAN--------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),228);
    gotoxy(5,5);
    printf("  Masukkan Angka Pertama: ");
    scanf("%f", &c);
    gotoxy(5,6);

    printf("  Masukkan Angka Kedua: ");
    scanf("%f", &d);

    total = c-d;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),232);
    gotoxy(5,7);
    printf("o--------------------------------------------------o");
    gotoxy(5,8);
    printf("| Hasil Pengurangan dari %.2f - %.2f adalah %.2f  |", c,d,total);
    gotoxy(5,9);
    printf("o--------------------------------------------------o");
    back:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),224);
    gotoxy(5,10);
    printf("  Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto pengurangan;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *pingporolansudo();
                }else{

                system("cls");
                goto back;
                }
}//end pengurangan

void perkalian(){
    fflush(stdin);
    float e, f;
    float jumlah;

    perkalian:
    system("Color E0");
    gotoxy(5,4);
    printf("---------------------PERKALIAN----------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),232);
    gotoxy(5,5);
    printf("  Masukkan Angka Pertama: ");
    scanf("%f", &e);
    gotoxy(5,6);
    printf("  Masukkan Angka Kedua: ");
    scanf("%f", &f);

    jumlah = e*f;
    gotoxy(5,7);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),228);
    printf("o--------------------------------------------------o");
    gotoxy(5,8);
    printf("|  Hasil Perkalian dari %.2f x %.2f adalah %.2f   |", e,f, jumlah);
    gotoxy(5,9);
    printf("o--------------------------------------------------o");
    back:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),224);
    gotoxy(5,10);
    printf("  Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto perkalian;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *pingporolansudo();
                }else{

                system("cls");
                goto back;
                }
}//end perkalian

void pembagian(){
    fflush(stdin);
    float g, h;
    float semua;

    pembagian:
    system("Color E0");
    gotoxy(5,4);
    printf("---------------------PEMBAGIAN----------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),228);
    gotoxy(5,5);
    printf("  Masukkan Angka Pertama: ");
    scanf("%f", &g);
    gotoxy(5,6);
    printf("  Masukkan Angka Kedua: ");
    scanf("%f", &h);

    semua = g/h;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),232);
    gotoxy(5,7);
    printf("o--------------------------------------------------o");
    gotoxy(5,8);
    printf("|   Hasil Pembagian dari %.2f / %.2f adalah %.2f   |", g,h,semua);
    gotoxy(5,9);
    printf("o--------------------------------------------------o");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),224);
    back:
    gotoxy(5,10);
    printf("  Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto pembagian;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *pingporolansudo();
                }else{

                system("cls");
                goto back;
                }
}//end pembagian

void exit_pingporolansudo(){
    loading();
    main();
}//end exit

//cetak menu PingPoroLanSudo
void pingporolansudo(){

    hidecursor();

    system("cls");
    do{
    if(pointer==0){
         pointer++;
         continue;
    }
        if(pointer==6){
            pointer--;
            continue;
        }

    system("color E2");
    gotoxy(35,4);
    printf("================================================");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),234);
    gotoxy(35,5);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),233);
    gotoxy(35,6);
    printf("O");
    gotoxy(82,6);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),230);
    gotoxy(41,6);
    printf("P I N G   P O R O   L A N   S U D O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),234);
    gotoxy(35,7);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),226);
    gotoxy(35,8);
    printf("================================================");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),233);
    gotoxy(35,9);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),234);
    gotoxy(35,10);
    printf("O");
    gotoxy(82,10);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),230);
    gotoxy(45,10);
    printf("1.   Perkalian");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),233);
    gotoxy(35,11);
    printf("O");
    gotoxy(82,11);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),230);
    gotoxy(45,11);
    printf("2.   Pembagian");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),234);
    gotoxy(35,12);
    printf("O");
    gotoxy(82,12);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),230);
    gotoxy(45,12);
    printf("3.   Penjumlahan");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),233);
    gotoxy(35,13);
    printf("O");
    gotoxy(82,13);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),230);
    gotoxy(45,13);
    printf("4.   Pengurangan");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),234);
    gotoxy(35,14);
    printf("O");
    gotoxy(82,14);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),230);
    gotoxy(45,14);
    printf("5.   Kembali Ke Menu Utama");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),233);
    gotoxy(35,15);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),226);
    gotoxy(35,16);
    printf("================================================");


    gotoxy(39,8+pointer);
    printf("   ");
    gotoxy(39,9+pointer);
    printf("-->");
    gotoxy(39,10+pointer);
    printf("   ");


            pil=getch();
            switch(pil){
            case 72:
                pointer--;
                break;
            case 80:
                pointer++;
                break;
            default:
                break;
    }
    kabataku=pointer;
    }while((int)pil!=13);
    system("cls");


    switch(kabataku){

case 1:
    perkalian();
    break;
case 2:
    pembagian();
    break;
case 3:
    penjumlahan();
    break;
case 4:
    pengurangan();
    break;
case 5:
    exit_pingporolansudo();
    break;

    }//end switch

}//end menu pingporolansudo



//kumpulan void untuk trigonometri
void sinus(){
    fflush(stdin);
    float a;
    float rsinus;

    sinuss:
    system("Color CF");
    gotoxy(5,5);
    printf("-------------------S  I  N  U  S--------------------");
    gotoxy(5,6);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),206);
    printf("  Masukkan derajat Sinus: ");
    scanf("%f", &a);

    rsinus = sin(a*phi/180);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),199);
    gotoxy(5,7);
    printf("o--------------------------------------------------o");
    gotoxy(5,8);
    printf("|             Hasil Sinus adalah %.2f              |", rsinus);
    gotoxy(5,9);
    printf("o--------------------------------------------------o");
    back:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),207);
    gotoxy(5,10);
    printf("  Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto sinuss;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *trigonometri();
                }else{

                system("cls");
                goto back;
                }
}//end sinus

void cosinus(){
    fflush(stdin);
    float b;
    float rcosinus;

    cosinuss:
    system("Color CF");
    gotoxy(5,5);
    printf("----------------C  O  S  I  N  U  S-----------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),206);
    gotoxy(5,6);
    printf("  Masukkan derajat Cosinus: ");
    scanf("%f", &b);

    rcosinus = cos(b*phi/180);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),199);
    gotoxy(5,7);
    printf("o--------------------------------------------------o");
    gotoxy(5,8);
    printf("|            Hasil Cosinus adalah %.2f             |", rcosinus);
    gotoxy(5,9);
    printf("o--------------------------------------------------o");
    back:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),207);
    gotoxy(5,10);
    printf("  Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto cosinuss;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *trigonometri();
                }else{

                system("cls");
                goto back;
                }
}//end cosinus

void tangen(){
    fflush(stdin);
    float c;
    float rtangen;

    tangenn:
    system("Color CF");
    gotoxy(5,5);
    printf("-----------------T  A  N  G  E  N-------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),206);
    gotoxy(5,6);
    printf("  Masukkan derajat Tangen: ");
    scanf("%f", &c);

    rtangen = tan(c*phi/180);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),199);
    gotoxy(5,7);
    printf("o--------------------------------------------------o");
    gotoxy(5,8);
    printf("|             Hasil Tangen adalah %.2f             |", rtangen);
    gotoxy(5,9);
    printf("o--------------------------------------------------o");
    back:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),207);
    gotoxy(5,10);
    printf("  Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto tangenn;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *trigonometri();
                }else{

                system("cls");
                goto back;
                }
}//end tangen

void exit_trigonometri(){
    loading();
    main();
}//end exit

//cetak menu trigonometri
void trigonometri(){

    hidecursor();

    system("cls");
    do{
    if(pointer==0){
         pointer++;
         continue;
    }
        if(pointer==5){
            pointer--;
            continue;
        }

    system("color CF");
    gotoxy(35,4);
    printf("================================================");
    gotoxy(35,5);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),200);
    gotoxy(35,6);
    printf("O");
    gotoxy(82,6);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),207);
    gotoxy(42,6);
    printf("T  R  I  G  O  N  O  M  E  T  R  I");
    gotoxy(35,7);
    printf("O                                              O");
    gotoxy(35,8);
    printf("================================================");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),200);
    gotoxy(35,9);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),207);
    gotoxy(35,10);
    printf("O");
    gotoxy(82,10);
    printf("O");
    gotoxy(45,10);
    printf("1.   Sinus");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),200);
    gotoxy(35,11);
    printf("O");
    gotoxy(82,11);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),207);
    gotoxy(45,11);
    printf("2.   Cosinus");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),207);
    gotoxy(35,12);
    printf("O");
    gotoxy(82,12);
    printf("O");
    gotoxy(45,12);
    printf("3.   Tangen");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),200);
    gotoxy(35,13);
    printf("O");
    gotoxy(82,13);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),207);
    gotoxy(45,13);
    printf("4.   Kembali Ke Menu Utama");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),207);
    gotoxy(35,14);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),207);
    gotoxy(35,15);
    printf("================================================");


    gotoxy(39,8+pointer);
    printf("   ");
    gotoxy(39,9+pointer);
    printf("-->");
    gotoxy(39,10+pointer);
    printf("   ");


            pil=getch();
            switch(pil){
            case 72:
                pointer--;
                break;
            case 80:
                pointer++;
                break;
            default:
                break;
    }
    sincostan=pointer;
    }while((int)pil!=13);
    system("cls");


    switch(sincostan){

case 1:
    sinus();
    break;
case 2:
    cosinus();
    break;
case 3:
    tangen();
    break;
case 4:
    exit_trigonometri();
    break;
    }//end switch
}//end menu trigonometri



//kumpulan void luas bangun datar
void luas_persegi(){
    fflush(stdin);
    float p, l;
    float Lpersegi;

        luaspersegi:
        system("Color FC");
        gotoxy(5,5);
        printf("--------------------LUAS PERSEGI--------------------");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
        gotoxy(5,6);
        printf("   Masukan Panjang Persegi: ");
        scanf("%f", &p);
        gotoxy(5,7);
        printf("   Masukan Lebar Persegi: ");
        scanf("%f", &l);

        Lpersegi = p*l;

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
        gotoxy(5,8);
        printf("o--------------------------------------------------o");
        gotoxy(5,9);
        printf("|             Luas Persegi adalah %.2f             |", Lpersegi);
        gotoxy(5,10);
        printf("o--------------------------------------------------o");
        back:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
        gotoxy(5,11);
        printf("   Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto luaspersegi;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *menu_luas();
                }else{

                system("cls");
                goto back;
                }
}//end luas persegi

void luas_trapesium(){
    fflush(stdin);
    float a,b,c;
    float Ltrapesium;

        luastrapesium:
        system("Color F6");
        gotoxy(5,5);
        printf("------------------LUAS TRAPESIUM--------------------");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
        gotoxy(5,6);
        printf("  Masukkan Sisi Atas Trapesium Sama Kaki: ");
        scanf("%f", &a);
        gotoxy(5,7);
        printf("  Masukkan Sisi Bawah Trapesium Sama Kaki: ");
        scanf("%f", &b);
        gotoxy(5,8);
        printf("  Masukkan Tinggi Trapesium Sama Kaki: ");
        scanf("%f", &c);

        Ltrapesium = (a+b)*c/2;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
        gotoxy(5,9);
        printf("o--------------------------------------------------o");
        gotoxy(5,10);
        printf("|       Luas Trapesium Sama Kaki adalah %.2f       |", Ltrapesium);
        gotoxy(5,11);
        printf("o--------------------------------------------------o");
        back:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
        gotoxy(5,12);
        printf("  Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto luastrapesium;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *menu_luas();
                }else{

                system("cls");
                goto back;
                }
}//end luas trapesium

void luas_layangan(){
    fflush(stdin);
        float d1, d2;
        float Llayangan;

        luaslayangan:
        system("Color FA");
        gotoxy(5,5);
        printf("-----------------LUAS LAYANG-LAYANG-----------------");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
        gotoxy(5,6);
        printf("  Masukkan Diagonal Panjang: ");
        scanf("%f", &d1);
        gotoxy(5,7);
        printf("  Masukkan Diagonal Lebar: ");
        scanf("%f", &d2);

        Llayangan = 0.5*d1*d2;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
        gotoxy(5,8);
        printf("o--------------------------------------------------o");
        gotoxy(5,9);
        printf("|          Luas Layang-Layang adalah %.2f          |", Llayangan);
        gotoxy(5,10);
        printf("o--------------------------------------------------o");
        back:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),250);
        gotoxy(5,11);
        printf("   Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto luaslayangan;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *menu_luas();
                }else{

                system("cls");
                goto back;
                }
}//end luas layang2

void luas_lingkaran(){
        fflush(stdin);
        float r, d;
        float Llingkardm;
        float Llingkarjari2;

        luaslingkaran:
        system("Color F6");
        gotoxy(5,5);
        printf("-------------------LUAS LINGKARAN-------------------");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
        gotoxy(5,6);
        printf("   Masukkan Panjang Diameter: ");
        scanf("%f", &d);
        gotoxy(5,7);
        printf("   Masukkan Panjang Jari-jari: ");
        scanf("%f", &r);

        Llingkardm = phi*d*d/4;
        Llingkarjari2 = phi*r*r;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
        gotoxy(5,8);
        printf("o--------------------------------------------------o");
        gotoxy(5,9);
        printf("|   Luas Lingkaran berdasar Diameter adalah %.2f   |", Llingkardm);
        gotoxy(5,10);
        printf("o--------------------------------------------------o");
        gotoxy(5,11);
        printf("|   Luas Lingkaran berdasar Jari-Jari adalah %.2f  |", Llingkarjari2);
        gotoxy(5,12);
        printf("o--------------------------------------------------o");
        back:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
        gotoxy(5,13);
        printf("   Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto luaslingkaran;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *menu_luas();
                }else{

                system("cls");
                goto back;
                }
}//end luas lingkaran

void menu_luas(){

    hidecursor();

    int luas;
    int pointer=1;
    char pil;

    system("cls");
    do{
    if(pointer==0){
         pointer++;
         continue;
    }
        if(pointer==6){
            pointer--;
            continue;
        }

    system("color F8");
    gotoxy(38,4);
    printf("------------------------------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
    gotoxy(35,4);
    printf(">o<");
    gotoxy(80,4);
    printf(">o<");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(35,5);
    printf("O                                              O");
    gotoxy(35,6);
    printf("O       L U A S  B A N G U N  D A T A R        O");
    gotoxy(35,7);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(38,8);
    printf("------------------------------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(35,8);
    printf(">o<");
    gotoxy(80,8);
    printf(">o<");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(35,9);
    printf("O                                              O");
    gotoxy(35,10);
    printf("O");
    gotoxy(82,10);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
    gotoxy(45,10);
    printf("1.   Persegi");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(35,11);
    printf("O");
    gotoxy(82,11);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(45,11);
    printf("2.   Trapesium");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(35,12);
    printf("O");
    gotoxy(82,12);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),250);
    gotoxy(45,12);
    printf("3.   Layang - Layang");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(35,13);
    printf("O");
    gotoxy(82,13);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(45,13);
    printf("4.   Lingkaran");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(35,14);
    printf("O");
    gotoxy(82,14);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
    gotoxy(45,14);
    printf("5.   Kembali Ke Menu Sebelumnya");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(35,15);
    printf("O                                              O");
    gotoxy(38,16);
    printf("------------------------------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),250);
    gotoxy(35,16);
    printf(">o<");
    gotoxy(80,16);
    printf(">o<");


    gotoxy(39,8+pointer);
    printf("   ");
    gotoxy(39,9+pointer);
    printf("-->");
    gotoxy(39,10+pointer);
    printf("   ");


            pil=getch();
            switch(pil){
            case 72:
                pointer--;
                break;
            case 80:
                pointer++;
                break;
            default:
                break;
    }
    luas=pointer;
    }while((int)pil!=13);
    system("cls");


    switch(luas){

case 1:
    luas_persegi();
    break;
case 2:
    luas_trapesium();
    break;
case 3:
    luas_layangan();
    break;
case 4:
    luas_lingkaran();
    break;
case 5:
    loading();
    bangun_datarxruang();
    break;
    }//end switch
}//end menu luas



//kumpulan void keliling bangun datar
void keliling_persegi(){
    fflush(stdin);
    float p, l;
    float kel_persegi;

        kelpersegi:
        system("Color FA");
        gotoxy(5,5);
        printf("-----------------KELILING PERSEGI-------------------");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
        gotoxy(5,6);
        printf("   Masukkan Panjang Persegi: ");
        scanf("%f", &p);
        gotoxy(5,7);
        printf("   Masukkan Lebar Persegi: ");
        scanf("%f", &l);

        kel_persegi = p+l+p+l;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
        gotoxy(5,8);
        printf("o--------------------------------------------------o");
        gotoxy(5,9);
        printf("|           Keliling Persegi adalah %.2f           |", kel_persegi);
        gotoxy(5,10);
        printf("o--------------------------------------------------o");
        back:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),250);
        gotoxy(5,11);
        printf("   Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto kelpersegi;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *menu_keliling();
                }else{

                system("cls");
                goto back;
                }
}//end keliling persegi

void keliling_trapesium(){
    fflush(stdin);
    float a,b,c;
    float kel_trapesium;

        keltrapesium:
        system("Color F6");
        gotoxy(5,5);
        printf("----------------KELILING TRAPESIUM------------------");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
        gotoxy(5,6);
        printf("   Masukkan Sisi Atas Trapesium Sama Kaki: ");
        scanf("%f", &a);
        gotoxy(5,7);
        printf("   Masukkan Sisi Bawah Trapesium Sama Kaki: ");
        scanf("%f", &b);
        gotoxy(5,8);
        printf("   Masukkan Sisi Miring Trapesium Sama Kaki: ");
        scanf("%f", &c);

        kel_trapesium = a+b+c+c;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
        gotoxy(5,9);
        printf("o--------------------------------------------------o");
        gotoxy(5,10);
        printf("|     Keliling Trapesium Sama Kaki adalah %.2f     |", kel_trapesium);
        gotoxy(5,11);
        printf("o--------------------------------------------------o");
        back:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
        gotoxy(5,12);
        printf("    Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto keltrapesium;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *menu_keliling();
                }else{

                system("cls");
                goto back;
                }
}//end keliling trapesium

void keliling_layangan(){
        fflush(stdin);
        float a,b;
        float kel_layangan;

        kellayangan:
        system("Color FC");
        gotoxy(5,5);
        printf("---------------KELILING LAYANG-LAYANG---------------");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
        gotoxy(5,6);
        printf("   Masukkan Panjang Sisi Atas: ");
        scanf("%f", &a);
        gotoxy(5,7);
        printf("   Masukkan Panjang Sisi Bawah: ");
        scanf("%f", &b);

        kel_layangan = a+b+a+b;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
        gotoxy(5,8);
        printf("o--------------------------------------------------o");
        gotoxy(5,9);
        printf("|        Keliling Layang-Layang adalah %.2f        |", kel_layangan);
        gotoxy(5,10);
        printf("o--------------------------------------------------o");
        back:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
        gotoxy(5,11);
        printf("    Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto kellayangan;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *menu_keliling();
                }else{

                system("cls");
                goto back;
                }
}//end keliling layang2

void keliling_lingkaran(){
        fflush(stdin);
        float r,d;
        float kel_lingkardm;
        float kel_lingkarjari2;

        kellingkaran:
        system("Color F6");
        gotoxy(5,5);
        printf("-----------------KELILING LINGKARAN-----------------");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
        gotoxy(5,6);
        printf("  Masukkan Panjang Diameter: ");
        scanf("%f", &d);
        gotoxy(5,7);
        printf("  Masukkan Panjang Jari-jari: ");
        scanf("%f", &r);

        kel_lingkardm = phi*d;
        kel_lingkarjari2 = 2*phi*r;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
        gotoxy(5,8);
        printf("o--------------------------------------------------o");
        gotoxy(5,9);
        printf("| Keliling Lingkaran berdasar Diameter adalah %.2f |", kel_lingkardm);
        gotoxy(5,10);
        printf("o--------------------------------------------------o");
        gotoxy(5,11);
        printf("| Keliling Lingkaran berdasar Jari-Jari adalah %.2f|", kel_lingkarjari2);
        gotoxy(5,12);
        printf("o--------------------------------------------------o");
        back:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
        gotoxy(5,13);
        printf("  Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto kellingkaran;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *menu_keliling();
                }else{

                system("cls");
                goto back;
                }
}//end keliling lingkaran

void menu_keliling(){

    hidecursor();

    int keliling;
    int pointer=1;
    char pil;


    system("cls");
    do{
    if(pointer==0){
         pointer++;
         continue;
    }
        if(pointer==6){
            pointer--;
            continue;
        }

    system("color F9");
    gotoxy(38,4);
    printf("------------------------------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
    gotoxy(35,4);
    printf(">o<");
    gotoxy(80,4);
    printf(">o<");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),247);
    gotoxy(35,5);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),251);
    gotoxy(35,6);
    printf("O");
    gotoxy(82,6);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
    gotoxy(39,6);
    printf("K E L I L I N G  B A N G U N  D A T A R");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),247);
    gotoxy(35,7);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
    gotoxy(38,8);
    printf("------------------------------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(35,8);
    printf(">o<");
    gotoxy(80,8);
    printf(">o<");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),251);
    gotoxy(35,9);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),247);
    gotoxy(35,10);
    printf("O");
    gotoxy(82,10);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),250);
    gotoxy(45,10);
    printf("1.   Persegi");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),251);
    gotoxy(35,11);
    printf("O");
    gotoxy(82,11);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(45,11);
    printf("2.   Trapesium");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),247);
    gotoxy(35,12);
    printf("O");
    gotoxy(82,12);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
    gotoxy(45,12);
    printf("3.   Layang - Layang");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),251);
    gotoxy(35,13);
    printf("O");
    gotoxy(82,13);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(45,13);
    printf("4.   Lingkaran");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),247);
    gotoxy(35,14);
    printf("O");
    gotoxy(82,14);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),250);
    gotoxy(45,14);
    printf("5.   Kembali Ke Menu Sebelumnya");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),251);
    gotoxy(35,15);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
    gotoxy(38,16);
    printf("------------------------------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),250);
    gotoxy(35,16);
    printf(">o<");
    gotoxy(80,16);
    printf(">o<");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
    gotoxy(39,8+pointer);
    printf("   ");
    gotoxy(39,9+pointer);
    printf("-->");
    gotoxy(39,10+pointer);
    printf("   ");


            pil=getch();
            switch(pil){
            case 72:
                pointer--;
                break;
            case 80:
                pointer++;
                break;
            default:
                break;
    }
    keliling=pointer;
    }while((int)pil!=13);
    system("cls");


    switch(keliling){

case 1:
    keliling_persegi();
    break;
case 2:
    keliling_trapesium();
    break;
case 3:
    keliling_layangan();
    break;
case 4:
    keliling_lingkaran();
    break;
case 5:
    loading();
    bangun_datarxruang();
    break;
    }//end switch
}//end menu keliling



//kumpulan void volume bangun ruang
void volume_kubus(){
    fflush(stdin);
    float s;
    float kubus;

    volkubus:
    system("Color F9");
    gotoxy(5,5);
    printf("--------------------VOLUME KUBUS--------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(5,6);
    printf("   Masukkan Panjang Sisi Kubus: ");
    scanf("%f", &s);

    kubus = s*s*s;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
    gotoxy(5,7);
    printf("o--------------------------------------------------o");
    gotoxy(5,8);
    printf("|        Volume Kubus dari %.2f adalah %.2f      |", s, kubus);
    gotoxy(5,9);
    printf("o--------------------------------------------------o");
    back:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
    gotoxy(5,10);
    printf("   Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto volkubus;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *menu_volume();
                }else{

                system("cls");
                goto back;
                }
}//end volume kubus

void volume_prisma(){
    fflush(stdin);
    float s, a, t, r, d, t_prisma;
    float p_persegi;
    float p_segitiga;
    float silinder_jari2;
    float silinder_dm;

        volprisma:
        system("Color FB");
        gotoxy(5,5);
        printf("-------------------VOLUME PRISMA-------------------");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
        gotoxy(5,6);
        printf("   Masukkan Sisi Persegi: ");
        scanf("%f", &s);
        gotoxy(5,7);
        printf("   Masukkan Lebar Alas Segitiga: ");
        scanf("%f", &a);
        gotoxy(5,8);
        printf("   Masukkan Tinggi Segitiga: ");
        scanf("%f", &t);
        gotoxy(5,9);
        printf("   Masukkan Jari-Jari Lingkaran: ");
        scanf("%f", &r);
        gotoxy(5,10);
        printf("   Masukkan Diameter Lingkaran: ");
        scanf("%f", &d);
        gotoxy(5,11);
        printf("   Masukkan Tinggi Prisma: ");
        scanf("%f", &t_prisma);

        p_persegi = s*s*t_prisma;
        p_segitiga = ((a*t)/2)*t_prisma;
        silinder_jari2 = phi*r*r*t_prisma;
        silinder_dm = phi*d*d/4*t_prisma;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
        gotoxy(5,12);
        printf("o--------------------------------------------------o");
        gotoxy(5,13);
        printf("|  Volume Prisma Persegi adalah %.2f               |", p_persegi);
        gotoxy(5,14);
        printf("o--------------------------------------------------o");
        gotoxy(5,15);
        printf("|  Volume Prisma Segitiga adalah %.2f              |", p_segitiga);
        gotoxy(5,16);
        printf("o--------------------------------------------------o");
        gotoxy(5,17);
        printf("|  Volume Silinder berdasar Jari-Jari adalah %.2f  |", silinder_jari2);
        gotoxy(5,18);
        printf("o--------------------------------------------------o");
        gotoxy(5,19);
        printf("|  Volume Silinder berdasar Diameter adalah %.2f   |", silinder_dm);
        gotoxy(5,20);
        printf("o--------------------------------------------------o");
        back:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),251);
        gotoxy(5,21);
        printf("   Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto volprisma;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *menu_volume();
                }else{

                system("cls");
                goto back;
                }
}//end volume prisma

void volume_limas(){
    fflush(stdin);
    float s, a, t, r, d, t_limas, jari_dm;
    float l_persegi;
    float l_segitiga;
    float l_silinderdm;
    float l_silinderjari2;

        vollimas:
        system("Color F9");
        gotoxy(5,5);
        printf("-----------------------VOLUME LIMAS----------------------");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
        gotoxy(5,6);
        printf("  Masukkan Sisi Persegi: ");
        scanf("%f", &s);
        gotoxy(5,7);
        printf("  Masukkan Lebar Alas Segitiga: ");
        scanf("%f", &a);
        gotoxy(5,8);
        printf("  Masukkan Tinggi Segitiga: ");
        scanf("%f", &t);
        gotoxy(5,9);
        printf("  Masukkan Jari-Jari Lingkaran: ");
        scanf("%f", &r);
        gotoxy(5,10);
        printf("  Masukkan Diameter Lingkaran: ");
        scanf("%f", &d);
        gotoxy(5,11);
        printf("  Masukkan Tinggi Limas: ");
        scanf("%f", &t_limas);

        jari_dm = d/2;
        l_persegi = s*s*t_limas/3;
        l_segitiga = a*t*t_limas/6;
        l_silinderdm = (phi*jari_dm*jari_dm)*t_limas/3;
        l_silinderjari2 = (phi*r*r)*t_limas/3;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
        gotoxy(5,12);
        printf("o-------------------------------------------------------o");
        gotoxy(5,13);
        printf("| Volume Limas Persegi adalah %.2f                     |", l_persegi);
        gotoxy(5,14);
        printf("o-------------------------------------------------------o");
        gotoxy(5,15);
        printf("| Volume Limas Segitiga adalah %.2f                    |", l_segitiga);
        gotoxy(5,16);
        printf("o-------------------------------------------------------o");
        gotoxy(5,17);
        printf("| Volume Limas Silinder berdasar Jari-Jari adalah %.2f|", l_silinderjari2);
        gotoxy(5,18);
        printf("o-------------------------------------------------------o");
        gotoxy(5,19);
        printf("| Volume Limas Silinder berdasar Diameter adalah %.2f |", l_silinderdm);
        gotoxy(5,20);
        printf("o-------------------------------------------------------o");
        back:
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
        gotoxy(5,21);
        printf("   Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto vollimas;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *menu_volume();
                }else{

                system("cls");
                goto back;
                }
}//end volume limas

void volume_bola(){
    fflush(stdin);
    float r, d, d_jari;
    float bola_dm;
    float bola_jari2;

    volumebola:
    system("Color FB");
    gotoxy(5,5);
    printf("--------------------VOLUME BOLA---------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(5,6);
    printf("   Masukkan Jari-Jari Lingkaran: ");
    scanf("%f", &r);
    gotoxy(5,7);
    printf("   Masukkan Diameter Lingkaran: ");
    scanf("%f", &d);

    d_jari = d/2;
    bola_dm = 4*phi*d_jari*d_jari*d_jari/3;
    bola_jari2 = 4*phi*r*r*r/3;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
    gotoxy(5,8);
    printf("o--------------------------------------------------o");
    gotoxy(5,9);
    printf("|  Volume Bola berdasarkan Jari-Jari adalah %.2f  |", bola_jari2);
    gotoxy(5,10);
    printf("o--------------------------------------------------o");
    gotoxy(5,11);
    printf("|  Volume Bola berdasarkan Diameter adalah %.2f   |", bola_dm);
    gotoxy(5,12);
    printf("o--------------------------------------------------o");
    back:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),251);
    gotoxy(5,13);
    printf("   Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto volumebola;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *menu_volume();
                }else{

                system("cls");
                goto back;
                }
}//end volume bola

void menu_volume(){

    hidecursor();

    int volume;
    int pointer=1;
    char pil;


    system("cls");
    do{
    if(pointer==0){
         pointer++;
         continue;
    }
        if(pointer==6){
            pointer--;
            continue;
        }

    system("color F6");
    gotoxy(38,4);
    printf("------------------------------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
    gotoxy(35,4);
    printf(">o<");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),250);
    gotoxy(80,4);
    printf(">o<");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(35,5);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),254);
    gotoxy(35,6);
    printf("O");
    gotoxy(82,6);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(42,6);
    printf("V O L U M E  B A N G U N  R U A N G");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(35,7);
    printf("O                                              O");
    gotoxy(38,8);
    printf("------------------------------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),250);
    gotoxy(35,8);
    printf(">o<");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
    gotoxy(80,8);
    printf(">o<");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(35,9);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),254);
    gotoxy(35,10);
    printf("O");
    gotoxy(82,10);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
    gotoxy(45,10);
    printf("1.   Kubus");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(35,11);
    printf("O");
    gotoxy(82,11);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),251);
    gotoxy(45,11);
    printf("2.   Prisma");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),254);
    gotoxy(35,12);
    printf("O");
    gotoxy(82,12);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
    gotoxy(45,12);
    printf("3.   Limas");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(35,13);
    printf("O");
    gotoxy(82,13);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),251);
    gotoxy(45,13);
    printf("4.   Bola");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),254);
    gotoxy(35,14);
    printf("O");
    gotoxy(82,14);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),243);
    gotoxy(45,14);
    printf("5.   Kembali Ke Menu Sebelumnya");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(35,15);
    printf("O                                              O");
    gotoxy(38,16);
    printf("------------------------------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),252);
    gotoxy(35,16);
    printf(">o<");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),250);
    gotoxy(80,16);
    printf(">o<");


    gotoxy(39,8+pointer);
    printf("   ");
    gotoxy(39,9+pointer);
    printf("-->");
    gotoxy(39,10+pointer);
    printf("   ");


            pil=getch();
            switch(pil){
            case 72:
                pointer--;
                break;
            case 80:
                pointer++;
                break;
            default:
                break;
    }
    volume=pointer;
    }while((int)pil!=13);
    system("cls");


    switch(volume){

case 1:
    volume_kubus();
    break;
case 2:
    volume_prisma();
    break;
case 3:
    volume_limas();
    break;
case 4:
    volume_bola();
    break;
case 5:
    loading();
    bangun_datarxruang();
    break;
    }//end switch
}//end menu volume


//void untuk return
void exit_ruangxdatar(){
    loading();
    bangun_datarxruang();
}//end return ke menu sebelumnya

void exit_luaskeliling(){
    loading();
    main();
}//end exit

//cetak menu bangun datar x bangun ruang
void bangun_datarxruang(){

    hidecursor();

    system("cls");
    do{
    if(pointer==0){
         pointer++;
         continue;
    }
        if(pointer==5){
            pointer--;
            continue;
        }

    system("color B1");
    gotoxy(35,4);
    printf("================================================");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),189);
    gotoxy(35,5);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),188);
    gotoxy(35,6);
    printf("O");
    gotoxy(82,6);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),191);
    gotoxy(43,6);
    printf("LUAS   X   KELILING   X   VOLUME");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),189);
    gotoxy(35,7);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),177);
    gotoxy(35,8);
    printf("================================================");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),188);
    gotoxy(35,9);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),189);
    gotoxy(35,10);
    printf("O");
    gotoxy(82,10);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),191);
    gotoxy(45,10);
    printf("1.   Luas Bangun Datar");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),188);
    gotoxy(35,11);
    printf("O");
    gotoxy(82,11);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),191);
    gotoxy(45,11);
    printf("2.   Keliling Bangun Datar");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),189);
    gotoxy(35,12);
    printf("O");
    gotoxy(82,12);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),191);
    gotoxy(45,12);
    printf("3.   Volume Bangun Ruang");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),188);
    gotoxy(35,13);
    printf("O");
    gotoxy(82,13);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),191);
    gotoxy(45,13);
    printf("4.   Kembali Ke Menu Utama");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),189);
    gotoxy(35,14);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),177);
    gotoxy(35,15);
    printf("================================================");


    gotoxy(39,8+pointer);
    printf("   ");
    gotoxy(39,9+pointer);
    printf("-->");
    gotoxy(39,10+pointer);
    printf("   ");


            pil=getch();
            switch(pil){
            case 72:
                pointer--;
                break;
            case 80:
                pointer++;
                break;
            default:
                break;
    }
    bangunan=pointer;
    }while((int)pil!=13);
    system("cls");


    switch(bangunan){

case 1:
    loading2();
    menu_luas();
    break;
case 2:
    loading2();
    menu_keliling();
    break;
case 3:
    loading2();
    menu_volume();
    break;
case 4:
    exit_luaskeliling();
    break;
    }//end switch
}//end menu keliling dan luas



//cetak akar kuadrat
void akarkuadrat(){
    fflush(stdin);
    float angka;
    float akar;

    squareroot:
    system("Color 06");
    gotoxy(5,5);
    printf("--------------------AKAR KUADRAT--------------------");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),260);
    gotoxy(5,7);
    printf("   Masukkan Bilangan Yang Akan Diakar: ");
    scanf("%f", &angka);

    //sqrt rumus c untuk akar kuadrat (square root)
    akar = sqrt(angka);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),270);
    gotoxy(5,9);
    printf("o--------------------------------------------------o");
    gotoxy(5,10);
    printf("|        Hasil Akar dari %.2f adalah %.2f          |", angka, akar);
    gotoxy(5,11);
    printf("o--------------------------------------------------o");
    back:
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
    gotoxy(5,13);
    printf("   Perlu diulang ga? (y/g): ");
                getchar();
                bruh = getchar();
                if (bruh == 'y'|| bruh == 'Y'){
                    system("cls");
                goto squareroot;
                }
                else if(bruh == 'g'|| bruh == 'G'){
                    system("cls");
                goto *main();
                }else{

                system("cls");
                goto back;
                }
}//end akar kuadrat


//keluar dari program
void keluar(){

    hidecursor();

    int y, i;
    int titik = 46;
	system("color 8F");
    gotoxy(45,13);

    char bye[]="B  Y  E  -  B  Y  E ";
        for(y=0; bye[y]!=NULL; y++){
            printf("%c",bye[y]);
            Sleep(70);
        }
        for(i = 0; i < 3; i++)
    {
        printf("%c ", titik);
        sleep(1);
    }
}//end keluar

//cetak menu utama
void main(){

    hidecursor();

    login();

    system("cls");
    do{
    if(pointer==0){
         pointer++;
         continue;
    }
        if(pointer==6){
            pointer--;
            continue;
        }

    system("color FD");
    gotoxy(35,4);
    printf("================================================");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
    gotoxy(35,5);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(35,6);
    printf("O");
    gotoxy(82,6);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),253);
    gotoxy(45,6);
    printf("K  A  L  K  U  L  A  T  O  R");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
    gotoxy(35,7);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
    gotoxy(35,8);
    printf("================================================");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),249);
    gotoxy(35,9);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
    gotoxy(35,10);
    printf("O");
    gotoxy(82,10);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(45,10);
    printf("1.   PingPoroLanSudo");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(35,11);
    printf("O");
    gotoxy(82,11);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(45,11);
    printf("2.   SinCosTan");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),242);
    gotoxy(35,12);
    printf("O");
    gotoxy(82,12);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(45,12);
    printf("3.   Luas, Keliling, Volume");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),249);
    gotoxy(35,13);
    printf("O");
    gotoxy(82,13);
    printf("O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    gotoxy(45,13);
    printf("4.   Akar Kuadrat");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),244);
    gotoxy(35,14);
    printf("O");
    gotoxy(82,14);
    printf("O");
    gotoxy(45,14);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),248);
    printf("5.   Exit");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
    gotoxy(35,15);
    printf("O                                              O");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
    gotoxy(35,16);
    printf("================================================");

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
    gotoxy(39,8+pointer);
    printf("   ");
    gotoxy(39,9+pointer);
    printf("-->");
    gotoxy(39,10+pointer);
    printf("   ");


            pil=getch();
            switch(pil){
            case 72:
                pointer--;
                break;
            case 80:
                pointer++;
                break;
            default:
                break;
    }
    pilihan=pointer;
    }while((int)pil!=13);
    system("cls");


    switch(pilihan){

case 1:
    loading2();
    pingporolansudo();
    break;
case 2:
    loading2();
    trigonometri();
    break;
case 3:
    loading2();
    bangun_datarxruang();
    break;
case 4:
    loading2();
    akarkuadrat();
    break;
case 5:
    keluar();
    break;
    }//end switch
}//end menu utama
