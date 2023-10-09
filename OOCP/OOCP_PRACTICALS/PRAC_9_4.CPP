#include <iostream>

using namespace std;

class Fahrenheit;

class Celsius
{
private:
    double celsius;

public:
    Celsius() : celsius(0.0) {}
    Celsius(double value) : celsius(value) {}

    void set(double value)
    {
        celsius = value;
    }

    double get() const
    {
        return celsius;
    }

    Fahrenheit toFahrenheit(); 

    void display()
    {
        cout << "Temperature in Celsius: " << celsius << "C" << endl;
    }
};

class Fahrenheit
{
private:
    double fahrenheit;

public:
    Fahrenheit() : fahrenheit(0.0) {}
    Fahrenheit(double value) : fahrenheit(value) {}

    void set(double value)
    {
        fahrenheit = value;
    }

    double get() const
    {
        return fahrenheit;
    }

    Celsius toCelsius(); 

    void display()
    {
        cout << "Temperature in Fahrenheit: " << fahrenheit << "F" << endl;
    }
};


Fahrenheit Celsius::toFahrenheit()
{
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    return Fahrenheit(fahrenheit);
}


Celsius Fahrenheit::toCelsius()
{
    double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    return Celsius(celsius);
}

int main()
{
    double tempCelsius, tempFahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> tempCelsius;

    Celsius c(tempCelsius);
    Fahrenheit f = c.toFahrenheit();

    c.display();
    f.display();

    cout << endl;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> tempFahrenheit;

    Fahrenheit f2(tempFahrenheit);
    Celsius c2 = f2.toCelsius();

    f2.display();
    c2.display();

    return 0;
}