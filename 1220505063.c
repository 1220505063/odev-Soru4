#include <stdio.h>
#include <string.h>

struct Ogrenci {
    char ad[20];
    char soyad[20];
    int no;
    char memleket[20];
    int yas;
};

int main() {
    struct Ogrenci ogr1 = {"Yusuf ", "Aksu", 2147, "Diyarbakir", 20};
    struct Ogrenci ogr2 = {"Nazli", "Gumus", 1223, "Istanbul", 24};
    struct Ogrenci ogr3 = {"Eren", "Celik", 1487, "Malatya", 25};
    struct Ogrenci ogr4 = {"Ayse", "Bakir", 3786, "Hatay", 19};
    struct Ogrenci ogr5 = {"Sultan", "Demir", 3480, "Karaman",22};

    printf("1.Ogrenci:\n");
    printf("Adi: %s\n", ogr1.ad);
    printf("Soyadi: %s\n", ogr1.soyad);
    printf("Nosu: %d\n", ogr1.no);
    printf("Memleketi: %s\n", ogr1.memleket);
    printf("Yasi: %d\n\n", ogr1.yas);

    printf("2.Ogrenci:\n");
    printf("Adi: %s\n", ogr2.ad);
    printf("Soyadi: %s\n", ogr2.soyad);
    printf("Nosu: %d\n", ogr2.no);
    printf("Memleketi: %s\n", ogr2.memleket);
    printf("Yasi: %d\n\n", ogr2.yas);

    printf("3.Ogrenci:\n");
    printf("Adi: %s\n", ogr3.ad);
    printf("Soyadi: %s\n", ogr3.soyad);
    printf("Nosu: %d\n", ogr3.no);
    printf("Memleketi: %s\n", ogr3.memleket);
    printf("Yasi: %d\n\n", ogr3.yas);

    printf("4.Ogrenci:\n");
    printf("Adi: %s\n", ogr4.ad);
    printf("Soyadi: %s\n", ogr4.soyad);
    printf("Nosu: %d \n",ogr4.no);
    printf("Memleketi: %s\n",ogr4.memleket);
    printf("Yasi:%d\n\n",ogr4.yas);
    
    printf("5.Ogrenci:\n");
    printf("Adi: %s\n", ogr5.ad);
    printf("Soyadi: %s\n", ogr5.soyad);
    printf("Nosu: %d \n",ogr5.no);
    printf("Memleketi : %s\n",ogr5.memleket);
    printf("Yasi:%d\n",ogr5.yas);
    
   return 0;
}
    
    
    
    
    
    
    
    
    