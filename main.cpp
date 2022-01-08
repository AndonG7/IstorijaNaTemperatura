//Izrabotil Andon Gjorgjiev INKI843

#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

//Deklariranje na varijabli i funkcii koi se koristat vo programata

int godisenProsekGrad(int grad[12]);

//Deklaracija na funckiite za prosecni temperaturi po godisni vreminja na gradovite

double proletProsek(int grad[12]);
double letoProsek(int grad[12]);
double esenProsek(int grad[12]);
double zimaProsek(int grad[12]);

//Deklaracija na funckiite za prosecni temperaturi po meseci na gradovite

double januarProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su);
double fevruarProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su);
double martProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su);
double aprilProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su);
double majProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su);
double juniProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su);
double juliProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su);
double avgustProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su);
double septemvriProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su);
double oktomvriProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su);
double noemvriProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su);
double dekemvriProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su);

//Funkcija za pronaoganje na najtopliot grad vo najtopliot mesec od godinata

double gradMesec(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su);

int main () {

    //Vnesuvanje na glavnite promenlivi na prosecnite temperaturi na mesecite na gradovite

    int kavadarci[12]={ 3, 3, 6, 10, 17, 20, 24, 25, 18, 10, 8, 3 },
           skopje[12]={ 2, 2, 4,  9, 16, 19, 23, 24, 17,  9, 7, 2 },
           bitola[12]={ 3, 4, 6, 10, 17, 20, 24, 25, 18, 10, 8, 3 },
            ohrid[12]={ 1, 1, 3,  8, 15, 17, 22, 22, 16,  8, 6, 2 },
        gevgelija[12]={ 5, 5, 7, 11, 19, 22, 26, 27, 20, 13, 9, 4 },
             stip[12]={ 4, 4, 6, 11, 18, 21, 25, 25, 19, 11, 8, 4 },
         gostivar[12]={ 2, 2, 5,  9, 16, 19, 23, 23, 17,  9, 8, 2 },
            veles[12]={ 3, 4, 6, 10, 17, 20, 24, 25, 18, 10, 8, 3 },
           prilep[12]={ 3, 4, 6, 10, 17, 20, 23, 25, 18,  8, 8, 3 },
         strumica[12]={ 4, 4, 6, 11, 18, 21, 22, 26, 19, 10, 9, 4 };

    //Presmetuvanje na godisen prosek na temperaturite na gradovte

    float prosekKavadarci=godisenProsekGrad(kavadarci)/12.0;
    float prosekSkopje=godisenProsekGrad(skopje)/12.0;
    float prosekBitola=godisenProsekGrad(bitola)/12.0;
    float prosekOhrid=godisenProsekGrad(ohrid)/12.0;
    float prosekGevgelija=godisenProsekGrad(gevgelija)/12.0;
    float prosekStip=godisenProsekGrad(stip)/12.0;
    float prosekGostivar=godisenProsekGrad(gostivar)/12.0;
    float prosekVeles=godisenProsekGrad(veles)/12.0;
    float prosekPrilep=godisenProsekGrad(prilep)/12.0;
    float prosekStrumica=godisenProsekGrad(strumica)/12.0;

    //Deklaracija na promenlivi za drzaven godisen prosek, mesecen prosek, najtopol mesec i najtopol grad vo toj mesec

    float drzavenGodisenProsek=0;
    float mesecenProsek[12];
    int najtopolMesec;
    int najtopolGrad;

    float proletKavadarci, letoKavadarci, esenKavadarci, zimaKavadarci;

    //Pecatenje na godisnite prosecni temperaturi

    cout<<"NAPOMENA! \nSite brojki izrazeni vo programata se odnesuvaat na stepeni celziuosovi"<<endl<<endl<<endl;

    cout<<"Prosecna godisna temperatura za Kavadarci: "<<prosekKavadarci<<endl;
    cout<<"Prosecna godisna temperatura za Skopje: "<<prosekSkopje<<endl;
    cout<<"Prosecna godisna temperatura za Bitola: "<<prosekBitola<<endl;
    cout<<"Prosecna godisna temperatura za Ohrid: "<<prosekOhrid<<endl;
    cout<<"Prosecna godisna temperatura za Gevgelija: "<<prosekGevgelija<<endl;
    cout<<"Prosecna godisna temperatura za Stip: "<<prosekStip<<endl;
    cout<<"Prosecna godisna temperatura za Gostivar: "<<prosekGostivar<<endl;
    cout<<"Prosecna godisna temperatura za Veles: "<<prosekVeles<<endl;
    cout<<"Prosecna godisna temperatura za Prilep: "<<prosekPrilep<<endl;
    cout<<"Prosecna godisna temperatura za Strumica: "<<prosekStrumica<<endl;
    cout<<endl<<endl<<endl;

    //Pecatenje koi gradovi se nad prosecnata temperatura vo godinata

    drzavenGodisenProsek=(prosekKavadarci+prosekSkopje+prosekBitola+prosekOhrid+prosekGevgelija+prosekStip+prosekGostivar+prosekVeles+prosekPrilep+prosekStrumica)/10;

    if (prosekKavadarci > drzavenGodisenProsek) {
        cout<<"Gradot Kavadarci ima prosecna godisna temperatura pogolema od godisniot prosek!"<<endl;
    }

    if (prosekSkopje > drzavenGodisenProsek) {
        cout<<"Gradot Skopje ima prosecna godisna temperatura pogolema od godisniot prosek!"<<endl;
    }

    if (prosekBitola > drzavenGodisenProsek) {
        cout<<"Gradot Bitola ima prosecna godisna temperatura pogolema od godisniot prosek!"<<endl;
    }

    if (prosekOhrid > drzavenGodisenProsek) {
        cout<<"Gradot Ohrid ima prosecna godisna temperatura pogolema od godisniot prosek!"<<endl;
    }

    if (prosekGevgelija > drzavenGodisenProsek) {
        cout<<"Gradot Gevgelija ima prosecna godisna temperatura pogolema od godisniot prosek!"<<endl;
    }

    if (prosekStip > drzavenGodisenProsek) {
        cout<<"Gradot Stip ima prosecna godisna temperatura pogolema od godisniot prosek!"<<endl;
    }

    if (prosekGostivar > drzavenGodisenProsek) {
        cout<<"Gradot Gostivar ima prosecna godisna temperatura pogolema od godisniot prosek!"<<endl;
    }

    if (prosekVeles > drzavenGodisenProsek) {
        cout<<"Gradot Veles ima prosecna godisna temperatura pogolema od godisniot prosek!"<<endl;
    }

    if (prosekPrilep > drzavenGodisenProsek) {
        cout<<"Gradot Prilep ima prosecna godisna temperatura pogolema od godisniot prosek!"<<endl;
    }

    if (prosekStrumica > drzavenGodisenProsek) {
        cout<<"Gradot Strumica ima prosecna godisna temperatura pogolema od godisniot prosek!"<<endl;
    }

    cout<<endl<<endl<<endl;

    //Pecatenje prosecna temperatura na gradovite po godisni vreminja

    cout<<"Prosecna temperatura za prolet vo Kavadarci e: "<<proletProsek(kavadarci)<<endl;
    cout<<"Prosecna temperatura za leto vo Kavadarci e: "<<letoProsek(kavadarci)<<endl;
    cout<<"Prosecna temperatura za esen vo Kavadarci e: "<<esenProsek(kavadarci)<<endl;
    cout<<"Prosecna temperatura za zima vo Kavadarci e: "<<zimaProsek(kavadarci)<<endl<<endl;

    cout<<"Prosecna temperatura za prolet vo Skopje e: "<<proletProsek(skopje)<<endl;
    cout<<"Prosecna temperatura za leto vo Skopje e: "<<letoProsek(skopje)<<endl;
    cout<<"Prosecna temperatura za esen vo Skopje e: "<<esenProsek(skopje)<<endl;
    cout<<"Prosecna temperatura za zima vo Skopje e: "<<zimaProsek(skopje)<<endl<<endl;

    cout<<"Prosecna temperatura za prolet vo Bitola e: "<<proletProsek(bitola)<<endl;
    cout<<"Prosecna temperatura za leto vo Bitola e: "<<letoProsek(bitola)<<endl;
    cout<<"Prosecna temperatura za esen vo Bitola e: "<<esenProsek(bitola)<<endl;
    cout<<"Prosecna temperatura za zima vo Bitola e: "<<zimaProsek(bitola)<<endl<<endl;

    cout<<"Prosecna temperatura za prolet vo Ohrid e: "<<proletProsek(ohrid)<<endl;
    cout<<"Prosecna temperatura za leto vo Ohrid e: "<<letoProsek(ohrid)<<endl;
    cout<<"Prosecna temperatura za esen vo Ohrid e: "<<esenProsek(ohrid)<<endl;
    cout<<"Prosecna temperatura za zima vo Ohrid e: "<<zimaProsek(ohrid)<<endl<<endl;

    cout<<"Prosecna temperatura za prolet vo Gevgelija e: "<<proletProsek(gevgelija)<<endl;
    cout<<"Prosecna temperatura za leto vo Gevgelija e: "<<letoProsek(gevgelija)<<endl;
    cout<<"Prosecna temperatura za esen vo Gevgelija e: "<<esenProsek(gevgelija)<<endl;
    cout<<"Prosecna temperatura za zima vo Gevgelija e: "<<zimaProsek(gevgelija)<<endl<<endl;

    cout<<"Prosecna temperatura za prolet vo Stip e: "<<proletProsek(stip)<<endl;
    cout<<"Prosecna temperatura za leto vo Stip e: "<<letoProsek(stip)<<endl;
    cout<<"Prosecna temperatura za esen vo Stip e: "<<esenProsek(stip)<<endl;
    cout<<"Prosecna temperatura za zima vo Stip e: "<<zimaProsek(stip)<<endl<<endl;

    cout<<"Prosecna temperatura za prolet vo Gostivar e: "<<proletProsek(gostivar)<<endl;
    cout<<"Prosecna temperatura za leto vo Gostivar e: "<<letoProsek(gostivar)<<endl;
    cout<<"Prosecna temperatura za esen vo Gostivar e: "<<esenProsek(gostivar)<<endl;
    cout<<"Prosecna temperatura za zima vo Gostivar e: "<<zimaProsek(gostivar)<<endl<<endl;

    cout<<"Prosecna temperatura za prolet vo Veles e: "<<proletProsek(veles)<<endl;
    cout<<"Prosecna temperatura za leto vo Veles e: "<<letoProsek(veles)<<endl;
    cout<<"Prosecna temperatura za esen vo Veles e: "<<esenProsek(veles)<<endl;
    cout<<"Prosecna temperatura za zima vo Veles e: "<<zimaProsek(veles)<<endl<<endl;

    cout<<"Prosecna temperatura za prolet vo Prilep e: "<<proletProsek(prilep)<<endl;
    cout<<"Prosecna temperatura za leto vo Prilep e: "<<letoProsek(prilep)<<endl;
    cout<<"Prosecna temperatura za esen vo Prilep e: "<<esenProsek(prilep)<<endl;
    cout<<"Prosecna temperatura za zima vo Prilep e: "<<zimaProsek(prilep)<<endl<<endl;

    cout<<"Prosecna temperatura za prolet vo Strumica e: "<<proletProsek(strumica)<<endl;
    cout<<"Prosecna temperatura za leto vo Strumica e: "<<letoProsek(strumica)<<endl;
    cout<<"Prosecna temperatura za esen vo Strumica e: "<<esenProsek(strumica)<<endl;
    cout<<"Prosecna temperatura za zima vo Strumica e: "<<zimaProsek(strumica)<<endl<<endl<<endl;

    //Popolnuvanje na nizata koja gi sodrzi mesecnite proseci za temperaturata od site gradovi so pomos na funkciite koi se deklarirani pogore

    mesecenProsek[0]=januarProsek(kavadarci[0], skopje[0], bitola[0], ohrid[0], gevgelija[0], stip[0], gostivar[0], veles[0], prilep[0], strumica[0]);
    mesecenProsek[1]=fevruarProsek(kavadarci[1], skopje[1], bitola[1], ohrid[1], gevgelija[1], stip[1], gostivar[1], veles[1], prilep[1], strumica[1]);
    mesecenProsek[2]=martProsek(kavadarci[2], skopje[2], bitola[2], ohrid[2], gevgelija[2], stip[2], gostivar[2], veles[2], prilep[2], strumica[2]);
    mesecenProsek[3]=aprilProsek(kavadarci[3], skopje[3], bitola[3], ohrid[3], gevgelija[3], stip[3], gostivar[3], veles[3], prilep[3], strumica[3]);
    mesecenProsek[4]=majProsek(kavadarci[4], skopje[4], bitola[4], ohrid[4], gevgelija[4], stip[4], gostivar[4], veles[4], prilep[4], strumica[4]);
    mesecenProsek[5]=juniProsek(kavadarci[5], skopje[5], bitola[5], ohrid[5], gevgelija[5], stip[5], gostivar[5], veles[5], prilep[5], strumica[5]);
    mesecenProsek[6]=juliProsek(kavadarci[6], skopje[6], bitola[6], ohrid[6], gevgelija[6], stip[6], gostivar[6], veles[6], prilep[6], strumica[6]);
    mesecenProsek[7]=avgustProsek(kavadarci[7], skopje[7], bitola[7], ohrid[7], gevgelija[7], stip[7], gostivar[7], veles[7], prilep[7], strumica[7]);
    mesecenProsek[8]=septemvriProsek(kavadarci[8], skopje[8], bitola[8], ohrid[8], gevgelija[8], stip[8], gostivar[8], veles[8], prilep[8], strumica[8]);
    mesecenProsek[9]=oktomvriProsek(kavadarci[9], skopje[9], bitola[9], ohrid[9], gevgelija[9], stip[9], gostivar[9], veles[9], prilep[9], strumica[9]);
    mesecenProsek[10]=noemvriProsek(kavadarci[10], skopje[10], bitola[10], ohrid[10], gevgelija[10], stip[10], gostivar[10], veles[10], prilep[10], strumica[10]);
    mesecenProsek[11]=dekemvriProsek(kavadarci[11], skopje[11], bitola[11], ohrid[11], gevgelija[11], stip[11], gostivar[11], veles[11], prilep[11], strumica[11]);

    //Pronaoganje na najtopliot mesec od godinata i pecatenje na ekranot

    najtopolMesec=distance(mesecenProsek, max_element(mesecenProsek, mesecenProsek + sizeof(mesecenProsek)/sizeof(mesecenProsek[0])));

    switch (najtopolMesec) {
    case 0:
        cout<<"Najtopol mesec e Januar so prosecna temperatura od: "<<mesecenProsek[0]<<" so najtopol grad: ";
        break;

    case 1:
        cout<<"Najtopol mesec e Fevruar so prosecna temperatura od: "<<mesecenProsek[1]<<" so najtopol grad: ";
        break;

    case 2:
        cout<<"Najtopol mesec e Mart so prosecna temperatura od: "<<mesecenProsek[2]<<" so najtopol grad: ";
        break;

    case 3:
        cout<<"Najtopol mesec e April so prosecna temperatura od: "<<mesecenProsek[3]<<" so najtopol grad: ";
        break;

    case 4:
        cout<<"Najtopol mesec e Maj so prosecna temperatura od: "<<mesecenProsek[4]<<" so najtopol grad: ";
        break;

    case 5:
        cout<<"Najtopol mesec e Juni so prosecna temperatura od: "<<mesecenProsek[5]<<" so najtopol grad: ";
        break;

    case 6:
        cout<<"Najtopol mesec e Juli so prosecna temperatura od: "<<mesecenProsek[6]<<" so najtopol grad: ";
        break;

    case 7:
        cout<<"Najtopol mesec e Avgust so prosecna temperatura od: "<<mesecenProsek[7]<<" so najtopol grad: ";
        break;

    case 8:
        cout<<"Najtopol mesec e Septemvri so prosecna temperatura od: "<<mesecenProsek[8]<<" so najtopol grad: ";
        break;

    case 9:
        cout<<"Najtopol mesec e Oktomvri so prosecna temperatura od: "<<mesecenProsek[9]<<" so najtopol grad: ";
        break;

    case 10:
        cout<<"Najtopol mesec e Nomevri so prosecna temperatura od: "<<mesecenProsek[10]<<" so najtopol grad: ";
        break;

    case 11:
        cout<<"Najtopol mesec e Dekemvri so prosecna temperatura od: "<<mesecenProsek[11]<<" so najtopol grad: ";
        break;
    }

    //Pronaoganje na najtopliot grad vo najtopliot mesec i pecatenje na ekranot

    najtopolGrad = gradMesec(kavadarci[najtopolMesec], skopje[najtopolMesec], bitola[najtopolMesec], ohrid[najtopolMesec], gevgelija[najtopolMesec], stip[najtopolMesec], gostivar[najtopolMesec], veles[najtopolMesec], prilep[najtopolMesec], strumica[najtopolMesec]); //Andon Gjorgjiev

    switch (najtopolGrad) {

    case 0:
        cout<<"Kavadarci!";
        break;
    case 1:
        cout<<"Skopje!";
        break;
    case 2:
        cout<<"Bitola!";
        break;
    case 3:
        cout<<"Ohrid!";
        break;
    case 4:
        cout<<"Gevgelija!";
        break;
    case 5:
        cout<<"Stip!";
        break;
    case 6:
        cout<<"Gostivar!";
        break;
    case 7:
        cout<<"Veles!";
        break;
    case 8:
        cout<<"Prilep!";
        break;
    case 9:
        cout<<"Strumica!";
        break;
    }

    return 0;
}

//Funkcija za presmetka na godidisnite procecni temperaturi na gradovite

int godisenProsekGrad(int grad[12]){

    int suma=0;
    int i;

    for (i=0; i<12; i++){
        suma=grad[i]+suma;
    }

    return(suma);
}

//Funkcii za presmetka na prosecnite temperaturi na gradovite po godisni vreminja

double proletProsek(int grad[12]){

    int suma=0;
    int i;

    suma=grad[2]+grad[3]+grad[4];
    return suma/3.0;
}

double letoProsek(int grad[12]){

    int suma=0;
    int i;

    suma=grad[5]+grad[6]+grad[7];
    return suma/3.0;
}

double esenProsek(int grad[12]){

    int suma=0;
    int i;

    suma=grad[8]+grad[9]+grad[10];
    return suma/3.0;
}

double zimaProsek(int grad[12]){

    int suma=0;
    int i;

    suma=grad[11]+grad[0]+grad[1];
    return suma/3.0;
}

//Funkcii za presmetka na mesecnite prosecni temperaturi od site gradovi

double januarProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su){

    int suma = 0;

    suma = ka+sk+bt+oh+ge+st+gv+ve+pp+su;
    return suma/10.0;

}

double fevruarProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su){

    int suma = 0;

    suma = ka+sk+bt+oh+ge+st+gv+ve+pp+su;
    return suma/10.0;

}

double martProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su){

    int suma = 0;

    suma = ka+sk+bt+oh+ge+st+gv+ve+pp+su;
    return suma/10.0;

}

double aprilProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su){

    int suma = 0;

    suma = ka+sk+bt+oh+ge+st+gv+ve+pp+su;
    return suma/10.0;

}

double majProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su){

    int suma = 0;

    suma = ka+sk+bt+oh+ge+st+gv+ve+pp+su;
    return suma/10.0;

}

double juniProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su){

    int suma = 0;

    suma = ka+sk+bt+oh+ge+st+gv+ve+pp+su;
    return suma/10.0;

}

double juliProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su){

    int suma = 0;

    suma = ka+sk+bt+oh+ge+st+gv+ve+pp+su;
    return suma/10.0;

}

double avgustProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su){

    int suma = 0;

    suma = ka+sk+bt+oh+ge+st+gv+ve+pp+su;
    return suma/10.0;

}

double septemvriProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su){

    int suma = 0;

    suma = ka+sk+bt+oh+ge+st+gv+ve+pp+su;
    return suma/10.0;

}

double oktomvriProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su){

    int suma = 0;

    suma = ka+sk+bt+oh+ge+st+gv+ve+pp+su;
    return suma/10.0;

}

double noemvriProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su){

    int suma = 0;

    suma = ka+sk+bt+oh+ge+st+gv+ve+pp+su;
    return suma/10.0;

}

double dekemvriProsek(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su){

    int suma = 0;

    suma = ka+sk+bt+oh+ge+st+gv+ve+pp+su;
    return suma/10.0;

}

//Funkcija za presmetka na najtopliot grad vo najtopliot mesec od godinata

double gradMesec(int ka, int sk, int bt, int oh, int ge, int st, int gv, int ve, int pp, int su){

    float arr[12]={ka, sk, bt, oh, ge, st, gv, ve, pp, su};

    return distance(arr, max_element(arr, arr + sizeof(arr)/sizeof(arr[0])));

}


