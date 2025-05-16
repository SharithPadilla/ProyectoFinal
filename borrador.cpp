#include <iostream> 
using namespace std; 

int main (){
int diashospedaje = ; 
float noche = 10.0; // precio por noche sin descuento// 
int cuenta = ;
float Descuento = ; 
float montoconDescuento=;  
float montosinDescuento = ;

cout:: << "Dijite número de días a hospedar:" << std::endl;
cin >> diashospedaje; 

if (diashospedaje <= 5) {
    Descuento =  0.0 ;
    cout << "Descuento igual a 0%" << std::endl; 

} 
else if (diashospedaje >=5 && diashospedaje <10) {
    Descuento =  0.10 << std::endl;
    cout << "Descuento igual a 10%" << std::endl;
}  
else if (diashospedaje >=10) {
    Descuento =  0.15 << std::endl;
    cout << "Descuento igual a 15%" << std::endl;
}
montosinDescuento = (diashospedaje * noche);
montoconDescuento = (montosinDescuento* Descuento);
cuenta= (montoconDescuento-montosinDescuento);
cout:: "su cuenta es" << cuenta << endl; 
return 0; 
}