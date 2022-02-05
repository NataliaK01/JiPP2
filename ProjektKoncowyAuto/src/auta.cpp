#include "auta.h"

//kontruktor wyjątków
Exception::Exception(const std::string m) : error_msg(m) {}

//funkcja wyświetlająca błedy
void Exception::show_error() const {
    std::cout << "---Blad---" << std::endl;
    std::cout << error_msg << std::endl;
}

//konstruktor silnika
Engine::Engine(State s, int g) : gear(g), engine_state(s) {}

//funkcja zmieniająca biegi
void Engine::change_gear(int new_gear)  {
    if (new_gear < 1 || new_gear > 5) {
        throw Exception("Brak takiego biegu");
    }
    std::cout << "Zmiana biegu na " << new_gear << std::endl;
    gear = new_gear;
}

//pobieranie stanu silnika
State Engine::get_state()  {
    return engine_state;
}

//pobieranie stanku biegu
int Engine::get_gear()  {
    return gear;
}

//funkcja wylacz samochód
void Vehicle::turn_off() {
    std::cout << "Wylaczono samochod" << std::endl;
    engine.change_engine_state(Off);
}

//funkcja wlacz samochód
void Vehicle::turn_on()  {
    std::cout << "Wlaczono samochod" << std::endl;
    engine.change_engine_state(On);
}

//funkcja zmien bieg
void Vehicle::change_gear(int g)  {
    //jesli chcemi zmienic bieg najpierw musimy wlaczyc silnik
    if (engine.get_state() == Off) {
        throw Exception("Najpierw wlacz silnik");
    }
    //zmiana biegu
    engine.change_gear(g);
}
//konstruktor samochod
Car::Car(char t, State state, int gear, const std::string m, int y, double fl,
         double ftc, double fu, int tm) : fuel_lvl(fl), //poziom paliwa
                                          fuel_tank_capacity(ftc), //pojemnosc zbiornika paliwa
                                          fuel_usage(fu) //zuzycie paliwa
                                          {
    type =t;
    engine = Engine(state, gear);
    model = m;
    year = y;
    total_mileage = tm;
}

//funkcja jedz
void Car::drive(int n) {
    //obsluha bledu jesli silnik jest wylaczony
    if (engine.get_state() == Off) {
        throw Exception("Najpierw wlacz silnik");
    }
    double total_fuel_usage = fuel_usage * n; //całkowite zużycie paliwa
    double new_fuel_lvl = fuel_lvl - total_fuel_usage;
    //obsluga bledu jesli jest za malo paliwa
    if (new_fuel_lvl < 0) {
        throw Exception("Za malo paliwa by dojechac do celu");
    }
    fuel_lvl = new_fuel_lvl;
    total_mileage += n; //całkowity przebieg
}

//funkcja tankowanie
void Car::refuel(double fuel)  {
    //obsluga bledu jesli samochow jest wlaczony to nalezy go wylaczyc
    if (engine.get_state() == On) {
        throw Exception("Najpierw wylacz silnik");
    }
    //obsluga bledow dotyczaca pojemnosci baku
    if (fuel > fuel_tank_capacity) {
        throw Exception("Za mala pojemnosc baku");
    }

    double fuel_quantity = fuel + fuel_lvl;
    if (fuel_quantity > fuel_tank_capacity) {
        throw Exception("Za mala pojemnosc baku");
    }

    //aktualizowanie ilosci paliwa
    fuel_lvl = fuel_quantity;
}


void Car::wyswietl() {
    std::cout << *this;
}

//konstruktor samochod elektryczny
ElectricCar::ElectricCar(char t,State state, int gear, const std::string m, int y,
                          int bl, int mr, int tm) : battery_lvl(bl), //satn baterii
                                                    max_range(mr) //maksymalny zasięg
                                                    {
    type = t;
    engine = Engine(state, gear);
    model = m;
    year = y;
    total_mileage = tm;
}

void ElectricCar::wyswietl() {
    std::cout << *this;
}

//funkcja jedz dla elektrycznego auta
void ElectricCar::drive(int n)  {
    //oblsuga bledów jesli silnik jest wylaczony
    if (engine.get_state() == Off) {
        throw Exception("Najpierw wlacz silnik");
    }
    //obsluga bledow dotyczaca zakresu trasy, sprawdzamy max zasięg
    if (n > max_range) {
        throw Exception("Za daleko");
    }
    //sprawdzamy stan baterii
    if (n > battery_lvl) {
        throw Exception("Za daleko");
    }

    //aktualizowanie stanu baterii i zasięgu
    battery_lvl -= n;
    total_mileage += n;
}

//funkcja ladowania elektrucznegi auta
void ElectricCar::recharge()  {
    //obsluga bledow
    if (engine.get_state() == On) {
        throw Exception("Najpierw wylacz silnik");
    }
    battery_lvl = max_range;
}

//dodawanie auta
void Container::add_car(Vehicle *car) {
    cars.push_back(car);
}

Vehicle *Container::get_car(int index) {
    return  cars[index-1];
}

//odczytywanie rozmiaru
size_t Container::get_lenght() {
    return cars.size();
}

//wyswietlanie
void Container::show() {
    int i = 1;
    for(auto car : cars){
        std::cout <<i++ << *car;
    }
}

//usuwanie
void Container::remove_car(int index) {
    cars.erase(cars.begin() + (index - 1));
}

//destruktor
Container::~Container() {
    if(!cars.empty()){
        for(auto car : cars){
            delete car;
        }
    }
}

//menu pojazdu
void picked_vehicle_menu(Vehicle * vehicle){
    Car* car;
    ElectricCar* electric_car;
    int option = 0;
    if(vehicle->type == 'S') {
        car = static_cast<Car *>(vehicle);
        std::cout << "Wybrano samochod: " << std::endl;
        std::cout << *car;
        while(option != 7){
            std::cout << "Wybierz co chcesz zrobic:" << std::endl;
            std::cout << "1. Wlacz." << std::endl;
            std::cout << "2. Jedz." << std::endl;
            std::cout << "3. Zatankuj." << std::endl;
            std::cout << "4. Informacje." << std::endl;
            std::cout << "5. Zmien bieg." << std::endl;
            std::cout << "6. Wylacz" << std::endl;
            std::cout << "7. Wyjdz." << std::endl;
            std::cout << "Wybierz: ";
            std::cin >> option;
            switch (option) {
                case 1:
                    try{
                        car->turn_on();
                    } catch (Exception & err){
                        err.show_error();

                    }
                    break;
                case 2:
                    int n;
                    std::cout<<"Podaj ilosc km do przejechania: ";
                    std::cin>>n;
                    try {
                        car->drive(n);
                    } catch  (Exception & err){
                        err.show_error();

                    }
                    break;
                case 3:
                    double ilosc;
                    std::cout<<"Podaj ile chcesz zatankowac: ";
                    std::cin>>ilosc;
                    try{
                        car->refuel(ilosc);
                    }catch (Exception & err){
                        err.show_error();
                    }

                    break;
                case 4:
                    std::cout << *car;
                    break;
                case 5:
                    int bieg;
                    std::cout<<"Podaj bieg: ";
                    std::cin>>bieg;
                    try{
                        car->change_gear(bieg);
                    }catch (Exception & err){
                        err.show_error();
                    }
                    break;
                case 6:
                    try{
                        car->turn_off();
                    }catch (Exception & err){
                        err.show_error();
                    }
                    break;
                case 7:
                    break;
                default:
                    break;
            }

        }
    }else if(vehicle->type == 'E'){
        electric_car = static_cast<ElectricCar *>(vehicle);
        std::cout << "Wybrano samochod: " << std::endl;
        std::cout << *electric_car;

        while(option != 7){
            std::cout << "Wybierz co chcesz zrobic:" << std::endl;
            std::cout << "1. Wlacz/Wylacz." << std::endl;
            std::cout << "2. Jedz." << std::endl;
            std::cout << "3. Naladuj." << std::endl;
            std::cout << "4. Informacje." << std::endl;
            std::cout << "5. Zmien bieg." << std::endl;
            std::cout << "6. Wylacz." << std::endl;
            std::cout << "7. Wyjdz." << std::endl;
            std::cout << "Wybierz: ";
            std::cin >> option;
            switch (option) {
                case 1:
                    try{
                        electric_car->turn_on();
                    } catch (Exception & err){
                        err.show_error();

                    }
                    break;
                case 2:
                    int n;
                    std::cout<<"Podaj ilosc km do przejechania: ";
                    std::cin>>n;
                    try {
                        electric_car->drive(n);
                    } catch  (Exception & err){
                        err.show_error();

                    }
                    break;
                case 3:
                    try{
                        electric_car->recharge();
                    }catch (Exception & err){
                        err.show_error();
                    }

                    break;
                case 4:
                    std::cout << *electric_car;
                    break;
                case 5:
                    int bieg;
                    std::cout<<"Podaj bieg: ";
                    std::cin>>bieg;
                    try{
                        electric_car->change_gear(bieg);
                    }catch (Exception & err){
                        err.show_error();
                    }
                    break;
                case 6:
                    try{
                        electric_car->turn_off();
                    }catch (Exception & err){
                        err.show_error();
                    }
                    break;
                case 7:
                    break;
                default:
                    break;
            }

        }
    }



}

//operators

std::ostream &operator<<(std::ostream &out, ElectricCar &car) {
    out << "Samochod Elektryczny" << std::endl;
    out << "Model: " << car.model << "(rok: " << car.year << ", przebieg: " << car.total_mileage << ")" << std::endl;
    out << "Maksymalny zasieg: " << car.max_range << "km" << std::endl;
    out << "Poziom baterii: " << car.battery_lvl << "km" << std::endl;
    out << "Informacje o silniku: " << std::endl;
    std::string state = (car.engine.get_state() == On) ? "Wlaczony" : "Wylaczony";
    out << "Stan silnika: " << state << std::endl;
    out << "Bieg: " << car.engine.get_gear() << std::endl;
    out << std::endl;
    return out;
}
std::ostream &operator<<(std::ostream &out, Vehicle &car) {
    out << std::endl;
    car.wyswietl();

    return out;
}


std::ostream &operator<<(std::ostream &out, Car &car) {
    out << "Samochod Spalinowy" << std::endl;
    out << "Model: " << car.model << "(rok: " << car.year << ", przebieg: " << car.total_mileage << ")" << std::endl;
    out << "Pojemnosc baku: " << car.fuel_tank_capacity << "L" << std::endl;
    out << "Obecnie paliwa w baku: " << car.fuel_lvl << "L" << std::endl;
    out << "Spalanie: " << car.fuel_usage << " l/km" << std::endl;
    out << "Informacje o silniku: " << std::endl;
    std::string state = (car.engine.get_state() == On) ? "Wlaczony" : "Wylaczony";
    out << "Stan silnika: " << state << std::endl;
    out << "Bieg: " << car.engine.get_gear() << std::endl;
    out << std::endl;
    return out;
}
//helpers

void dodaj(Container * container){
    std::cout << "Jaki samochod?" << std::endl;
    std::cout << "1. Spalinowy" << std::endl;
    std::cout << "2. Elektryczny" << std::endl;

    int option;
    std::cout << "Wybierz: ";
    std::cin >> option;
    int bieg;
    std::string nazwa;
    int rok;
    int przebieg;

    if (option == 1) {
        double paliwo;
        double bak;
        double spalanie;
        std::cout << "Podaj nazwe: ";
        std::cin >> nazwa;
        std::cout << "Podaj rozmiar baku: ";
        std::cin >> bak;
        std::cout << "Podaj spalanie: ";
        std::cin >> spalanie;
        std::cout << "Podaj przebieg: ";
        std::cin >> przebieg;
        std::cout << "Podaj rok: ";
        std::cin >> rok;
        auto car = new Car('S',Off,1,nazwa,rok,bak,bak,spalanie,przebieg);
        container->add_car(car);
    } else if (option == 2) {
        int battery;
        int mr;
        std::cout << "Podaj nazwe: ";
        std::cin >> nazwa;
        std::cout << "Podaj pojemnosc baterii: ";
        std::cin >> battery;
        std::cout << "Podaj maxymalny zasieg: ";
        std::cin >> mr;
        std::cout << "Podaj przebieg: ";
        std::cin >> przebieg;
        std::cout << "Podaj rok: ";
        std::cin >> rok;
        auto car = new ElectricCar('E',Off,1,nazwa,rok,battery,mr,przebieg);
        container->add_car(car);
    }else{
        std::cout << "Wybierz poprawna opcje" << std::endl;
    }
}

// funkcja pomocy
void pomoc(){
    std::cout << "Aby uruchomic program potrzebne sa 2 parametry nazwa i opcja" << std::endl;
    std::cout << "Dostepne opcje to: " << std::endl;
    std::cout << "1. pomoc - otwiera menu pomocy."<< std::endl;
    std::cout << "2. program - otwiera program."<< std::endl;
}