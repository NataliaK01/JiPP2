#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "auta.h"

int main(int argc, char *argv[]) {
    std::ifstream file;
    Container container;
    Vehicle * picked_wehicle;
    file.open("../data.csv");

    if(argc == 1)
    {
        std::cout<<"Za malo parametrow"<<std::endl;
        pomoc();
        exit(-1);
    }else if((std::string(argv[1]) == "pomoc") && argc == 2){

       pomoc();
        exit(-1);
    }else if(argc == 2 && std::string(argv[1])=="program"){

    if(file.is_open()){
        while(true){
        char znak;
        int bieg;
        std::string nazwa;
        int rok;
        double paliwo;
        double bak;
        double spalanie;
        int przebieg;

        int bateria;
        int mr;

        file >> znak;
        if(!file.fail()){
            if(znak == 'S') {
                file >> bieg >> nazwa >> rok >> paliwo >> bak >> spalanie >> przebieg;
                Car *car = new Car(znak,Off, bieg, nazwa, rok, paliwo, bak, spalanie, przebieg);
                container.add_car(car);
            }

            if(znak == 'E') {
                file >> bieg >> nazwa >> rok >> bateria >> mr >> przebieg;
                ElectricCar *care = new ElectricCar(znak,Off, bieg, nazwa, rok, bateria, mr, przebieg);
                container.add_car(care);
            }
        }else{
            break;
        }
        }
    }

    int option= 0;
    while(option != 5){
        std::cout << "Wybierz co chcesz zrobic:" << std::endl;
        std::cout << "1. Baza dostepnych aut." << std::endl;
        std::cout << "2. Dodaj auto." << std::endl;
        std::cout << "3. Usun auto." << std::endl;
        std::cout << "4. Wybierz auto do jazdy." << std::endl;
        std::cout << "5. Wyjdz." << std::endl;
        std::cout << "Wybierz: ";
        std::cin >> option;

        switch (option) {
            case 1:
                container.show();
                break;
            case 2:
                dodaj(&container);
                break;
            case 3:
                int index;
                std::cout << "Podaj index auta ktore chcesz usunac: ";
                std::cin >> index;
                if(index > (container.get_lenght()+1)|| index < 0){
                    std::cout << "Podaj poprawny index" << std::endl;
                    break;
                }
                container.remove_car(index);
                break;
            case 4:
                int i;
                std::cout << "Podaj index auta do ktorego chcesz wsiasc: ";
                std::cin >> i;
                if(i > (container.get_lenght()+1)|| i < 0){
                    std::cout << "Podaj poprawny index" << std::endl;
                    break;
                }
                picked_wehicle = container.get_car(i);

                picked_vehicle_menu(picked_wehicle);
                break;
            case 5:
                std::cout << "Koniec"<< std::endl;
                break;
            default:
                break;
        }

    }

    return 0;
    }else {
        std::cout<<"Blad parametrow programu!"<<std::endl;
        pomoc();
        exit(-1);
    }
}
