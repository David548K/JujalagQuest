#include <iostream>

int main(){
    std::string preguntas[] = {"Cual es el nombre de juja?", "Cual es el cantante favorito de juja?", "Cual es el animal favorito de juja?"};
    std::string respuestas[][3] = {{"A- Juan Javier", "B- Miguel Alfonso", "C- Javier Miguel"},
                                  {"A- Pitbull", "B- Jovany Vasquez", "C- C418"},
                                  {"A- Raton", "B- Joao", "C- Perro"}};
    char real[] = {'A', 'B', 'B'};
    int size = sizeof(preguntas)/sizeof(std::string);
    char algo;

    std::cout << "----------\n";
    std::cout << "JUJALAG QUEST\n";
    std::cout << "----------\n\n";

    for(int i=0; i<size; i++){
        std::cout << "----------\n";
        std::cout << preguntas[i] << '\n';

        for(int k=0; k<sizeof(respuestas[i])/sizeof(respuestas[i][k]); k++){
            std::cout << respuestas[i][k] << '\n';
        }
        do{
            std::cout << '\n' << "Respuesta: ";
            std::cin >> algo;
            algo = toupper(algo);
        }while(algo != 'A' && algo != 'B' && algo != 'C');
        if(algo == real[i]){
            std::cout << "CORRECTO!\n\n";
        }else{
            std::cout << "INCORRECTO!\n\n";
        }
    }

    return 0;
}