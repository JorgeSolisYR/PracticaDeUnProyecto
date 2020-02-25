#include<iostream>
#include<stdlib.h>
using namespace std;
//Comentario editado
class Rectangulo{
 private:
  float largo;
  float ancho;
 public:
  Rectangulo(float,float);
  void Perimetro();
  void Area();
};

Rectangulo::Rectangulo(float L,float A){
 largo=L;
 ancho=A;
}

void Rectangulo::Perimetro(){
 cout<<"El Perimetro es:"<<(2*largo+2*ancho)<<endl;
}

void Rectangulo::Area(){
 cout<<"El Area Del Rectangulo Es De:"<<(largo*ancho)<<endl;
}

int main(){
 Rectangulo R1(7,6);
 R1.Perimetro();
 R1.Area();
 cout<<"\nHola";
}
