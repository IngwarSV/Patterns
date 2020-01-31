#include <iostream>

int main() {
    Observer* batman = new Observer("Batman");
    Observer* thor = new Observer("Thor");

    Observable* robin = new Observable("Robin");
    Observable* joker = new Observable("Joker");

    batman->addObservable(robin);
    thor->addObservable(robin);
    batman->addObservable(joker);
    
    thor->reportObservables();
    std::cout << std::endl;

    batman->reportObservables();
    std::cout << std::endl;

    robin->reportObservers();
    std::cout << std::endl;

    joker->reportObservers();
    std::cout << std::endl;

    batman->notify();
    thor->notify();

    std::cout << std::endl << thor->getName() << " has gone...";
    delete(thor);
    std::cout << std::endl;

    robin->reportObservers();
    std::cout << std::endl;

    joker->reportObservers();
    std::cout << std::endl;

    std::cout << std::endl << robin->getName() << " has gone...";
    delete(robin);
    std::cout << std::endl;

    batman->reportObservables();
    std::cout << std::endl;

    return 0;
}
