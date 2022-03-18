#include <iostream>
class converter{
  public:
    float cels;
    float farn;
    float convert_temp(float farn){
     cels = (farn-32)/1.8;
      return cels;
  }
};
int main() {
  converter temp;
  std::cout<<"Yo, how hot is it? ";
  std::cin>>temp.farn;
  float converted = temp.convert_temp(temp.farn);
  std::cout<< "Bruh, thats like ... "<< converted << " degrees celcius!";

}