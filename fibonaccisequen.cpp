#include <iostream>

int main(){

  int first = 0;
  int second = 1;
  int n = 0;
  
  std::cout << "Digite o número de termos para a sequência de Fibonacci\n";
  std::cin >> n;

  std::cout << "Sequência de Fibonacci\n";
  std::cout << first << " " << second << " ";

  for(int i = 1; i < n; i++ ){ //Inicialização, condição e incremento.
    int next = first + second;
    std::cout << next << " "; 

    first = second; //Atribuo o valor segundo ao primeiro.
    second = next; //Em seguida, atribuo o valor do próximo ao segundo.
  }
}
