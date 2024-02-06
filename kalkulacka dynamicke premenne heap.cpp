//  vytvor kalkulacku na krat delene plus minus a modulo s dynamickymi premennymi (heap)
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int *phodnota=new int;
    double *pCislo1= new double;
    double *pCislo2= new double;
    long int *pModulo1= new long int;
    long int *pModulo2=new long int;
    cout<<"Zadajte hodnotu vyzadovanej operacie:"<<endl<<'\t'<<"1 - sucet"<<endl<<'\t'<<"2 - sucin"<<endl<<'\t'<<"3 - rozdiel"<<endl<<'\t'<<"4 - podiel"<<endl<<'\t'<<"5 - modulo"<<endl;
    cin>>*phodnota;

    switch(*phodnota)
    {
    case 1:
        cout<<"Zadajte dve cisla, ktore chcete scitat: "<<endl;
        cin>>*pCislo1;
        cin>>*pCislo2;
        cout<<"Sucet tychto dvoch cisel je: "<<setprecision(4)<<*pCislo1+*pCislo2;
        break;
    case 2:
        cout<<"Zadajte dve cisla, ktore chcete vynasobit: "<<endl;
        cin>>*pCislo1;
        cin>>*pCislo2;
        cout<<"Sucin tychto dvoch cisel je: "<<setprecision(4)<<(*pCislo1)*(*pCislo2);
        break;
    case 3:
        cout<<"Zadajte dve cisla, ktore chcete odcitat: "<<endl;
        cin>>*pCislo1;
        cin>>*pCislo2;
        cout<<"Rozdiel tychto dvoch cisel je: "<<setprecision(2)<<(*pCislo1)-(*pCislo2);
        break;
    case 4:
        cout<<"Zadajte dve cisla, ktore chcete vydelit: "<<endl;
        cin>>*pCislo1;
        cin>>*pCislo2;
        cout<<"Podiel tychto dvoch cisel je: "<<setprecision(3)<<(*pCislo1)/(*pCislo2);
        break;
    case 5:
        cout<<"Zadajte dve cele cisla, ktore chcete vydelit a dostat zvysok po deleni: "<<endl;
        cin>>*pModulo1;
        cin>>*pModulo2;
        cout<<"Zvysok po deleni tychto dvoch cisel je: "<<(*pModulo1)%(*pModulo2);
        break;
    default:
        cout<<"Zadali ste nespravnu hodonotu pre operaciu.";
        break;
    }
    delete phodnota,pCislo1,pCislo2,pModulo1,pModulo2;
    phodnota = 0;
    pCislo1=0;
    pCislo2=0;
    pModulo1=0;
    pModulo2=0;
    return 0;
}
