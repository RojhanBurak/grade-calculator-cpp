#include <iostream>
#include <cmath>



double ortalamaHeseplama();
double dersnotuHeseplama();


int main()
{
    int choice=0;

    do
    {
        
        std::cout<< "##################"<<'\n';
        std::cout<< "Ortalama Heseplama"<<'\n';
        std::cout<< "##################"<<'\n';
        std::cout<< "Lutfen bir secenek secin"<<'\n';
        std::cout<< "1) Ortalama Heseplama"<<'\n';
        std::cout<< "2) Ders notu heseplama"<<'\n';
        std::cout<< "3) Cikis"<<'\n';
        std::cin>>choice;

        switch(choice)
        {
            case 1:
            ortalamaHeseplama();
            break;

            case 2:
            dersnotuHeseplama();
            break;

            case 3: 
            std::cout<< "Ziyaretiniz icin tesekkur ederiz"<<'\n';
            break;

            default:
            std::cout<< "Gecersiz giris"<<'\n';
            
        }
    }while(choice !=3); 



    return 0;
}


double ortalamaHeseplama(){
    double ders_notu=0;
    double ders_kredisi=0;
    double ders_ortalamasi= 0;
    double genel_ortalama=0;
    double toplam_not=0;
    double toplam_kredi=0;
    int ders=0;


    std::cout<<"Lutfen kac dersiniz oldugunu girin"<<'\n';
    std:: cin>>ders;
    for(int i=1; i<=ders; i+=1){

        
           
        
        
        std::cout<<i<<". dersin notunu girin"<<'\n';
        std::cin >> ders_notu;
        std::cout <<i<< ". dersin kredisini girin"<<'\n';
        std::cin>> ders_kredisi;
        ders_ortalamasi=ders_notu*ders_kredisi;
        std::cout<<i<<". dersin ortalamasi:"<<ders_ortalamasi<<'\n';
        

        toplam_not+= (ders_notu*ders_kredisi);
        toplam_kredi+= ders_kredisi;

       

        

    }

         if(toplam_kredi==0 ||toplam_not==0){

            std::cout<<"Hata toplam kredi veya toplam not 0 olamaz!"<<'\n';
            return 0;
         }


     genel_ortalama=toplam_not/toplam_kredi;
        std::cout<<"Genel ortalama = "<< genel_ortalama<<'\n';
    

    return 0;
}

char harflegosterim(double ortalama) {
    if(ortalama >= 90) return 'A';
    else if(ortalama >= 80) return 'B';
    else if(ortalama >= 70) return 'C';
    else if(ortalama >= 60) return 'D';
    else return 'F';
}

double dersnotuHeseplama(){
double major=0;
double minor=0;
double other=0;
double ortalama=0;
double major_sayisi=0;
double minor_sayisi=0;
double other_sayisi=0;
double toplam_major=0;
double toplam_minor=0;
double toplam_other=0;
double genel_major_ortalama;
double genel_minor_ortalama;
double genel_other_ortalama;

std::cout<<"Kac tane major gradiniz oldugunu girin"<<'\n';
std::cin>>major_sayisi;
for (int i = 1; i <= major_sayisi; i+=1)
{
 std::cout<<i<<". Major grade girinn:"<<'\n';
 std:: cin>> major; 
 toplam_major+=major;
}
if(major_sayisi>0){
    double major_ortalama=toplam_major/major_sayisi;
    genel_major_ortalama= major_ortalama*0.5;
}

std::cout<<"Kac tane minor gradiniz oldugunu girin"<<'\n';
std::cin>>minor_sayisi;
for (int i = 1; i <= minor_sayisi; i+=1)
{
 std::cout<<i<<". Minor grade girinn:"<<'\n';
 std:: cin>> minor;   
 toplam_minor+=minor;
}
if(minor_sayisi>0){
    double minor_ortalama=toplam_minor/minor_sayisi;
     genel_minor_ortalama= minor_ortalama*0.35;
}

std::cout<<"Kac tane other gradiniz oldugunu girin"<<'\n';
std::cin>>other_sayisi;
for (int i = 1; i <= other_sayisi; i+=1)
{
 std::cout<<i<<". Other grade girinn:"<<'\n';
 std:: cin>> other;  
 toplam_other+=other; 
}
if(other_sayisi>0){
    double other_ortalama=toplam_other/other_sayisi;
     genel_other_ortalama= other_ortalama*0.15;
}

ortalama= genel_major_ortalama+genel_minor_ortalama+genel_other_ortalama;
std::cout<< "Ders ortalaman = "<<ortalama<<'\n';

char harf_notu = harflegosterim(ortalama);
    std::cout<< "Harf notunuz = "<<harf_notu<<'\n';


 return 0;}


