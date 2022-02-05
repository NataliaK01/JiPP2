#ifndef UNTITLED2_AUTA_H
#define UNTITLED2_AUTA_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

//stan silnika
enum State {
    Off,
    On
};

//klasa wyjatków
class Exception {
public:
    Exception(const std::string m = "Blad");

    //funkcja wyswietlająca błąd
    void show_error() const;

private:
    std::string error_msg;
};

//klasa silnik
class Engine {
public:
    Engine(State s = Off, int g = 1);
    //funkcja włącz/wyłącz silnik
    void change_engine_state(State new_state) {
        engine_state = new_state;
    }

    //funkcja zmień bieg
    void change_gear(int new_gear);

    //uzyskujemy informacje o stanie silnika
    State get_state();

    //uzyskujemy informacje o stanie biegów
    int get_gear();

private:
    State engine_state; //stan silnika
    int gear; //bieg

};

//klasa pojazd
class Vehicle {
public:
    virtual void turn_on(); //metoda wirtualna włącz

    virtual void turn_off(); //metoda wirtualna wyłącz

    virtual void change_gear(int g);//metoda wirtualna zmień bieg

    virtual void drive(int n) = 0; //metoda wirtualna jedź
    virtual void wyswietl() = 0;
    friend std::ostream &operator<<(std::ostream &out, Vehicle &car);
    friend void picked_vehicle_menu(Vehicle * vehicle);
protected:
    Engine engine;
    std::string model;
    int year;
    int total_mileage;
    char type;
};

class Car : public Vehicle {
public:
    Car(char t, State state, int gear, const std::string m, int y, double fl,
        double ftc, double fu, int tm);


    void drive(int n) override;

    void refuel(double fuel); //funkcja tankowanie
    void wyswietl()override;
    friend std::ostream &operator<<(std::ostream &out, Car &car);

private:
    double fuel_lvl;
    double fuel_tank_capacity;
    double fuel_usage;

};

//klasa auto elektryczne
class ElectricCar : public Vehicle {
public:
    ElectricCar(char t,State state, int gear, const std::string m, int y,
                int bl, int mr, int tm);
    void wyswietl()override;
    void drive(int n) override;
    void recharge();    //funkcja ładowania

    friend std::ostream &operator<<(std::ostream &out, ElectricCar &car);
private:
    int battery_lvl;    //stan baterii
    int max_range;  //maxymalny zasięg
};

//kontener
class Container{
    std::vector<Vehicle *> cars;    //wektor
public:
    void add_car(Vehicle *car);
    size_t get_lenght();
    void show();
    void remove_car(int index); //funkcja usuwanie auta
    Vehicle * get_car(int index);

    ~Container();   //destruktor
};

//helpers
void dodaj(Container * container);
void pomoc();
#endif //UNTITLED2_AUTA_H
