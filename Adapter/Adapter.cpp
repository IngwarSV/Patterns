#include <iostream>
#include <map>
#include <ctime>

class Sensor {
    public:
        Sensor() {
            std::cout << "creating Sensor" << std::endl;
        }
        virtual ~Sensor() {
            std::cout << "deleting Sensor" << std::endl;
        }

        virtual const std::string& getParameter() const = 0;

        virtual std::string getValue() const = 0;
};

class Display {
    private:
        std::map<std::string, std::string>* vehicleData;
    public:
        Display() {
            this->vehicleData = new std::map<std::string, std::string>();
            vehicleData->insert(std::pair<std::string, std::string>("Speed", "0"));
            vehicleData->insert(std::pair<std::string, std::string>("Fuel", "0"));
            std::cout << "creating Display" << std::endl;
            
        }
        ~Display() {
            delete(this->vehicleData);
            std::cout << "deleting Display" << std::endl;
        }

        void getData(Sensor& sensor) {
            std::string parameter = sensor.getParameter();
            std::string value = sensor.getValue();
            
            if ( vehicleData->find(parameter) == vehicleData->end() ) {
                std::cout << "Invalid parameter\n";
                return;
            }
            vehicleData->at(parameter) = value;
        }

        void displayParameters() {
            for ( std::map<std::string, std::string>::iterator it = vehicleData->begin(); it != vehicleData->end(); ++it) {
                std::cout << "\t" << it->first << " : ";
                std::cout << it->second << std::endl;
            }
        }
};

class Speedometer {
    public:
        Speedometer() {
            std::cout << "creating Speedometer" << std::endl;
        }
        virtual ~Speedometer() {
            std::cout << "deleting Speedometer" << std::endl;
        }
        
        int getValue() const {
            srand(time(NULL));
            
            return rand()%100;
        }
};

class Speedsensor : public Sensor {
    private:
        std::string parameter = "Speed";
        Speedometer* speedometer;
        
    public:
        Speedsensor() {
            this->speedometer = new Speedometer();
            std::cout << "creating Speedsensor" << std::endl;
        }
        virtual ~Speedsensor() {
            delete(this->speedometer);
            std::cout << "deleting Speedsensor" << std::endl;
        };

        const std::string& getParameter() const {
            return this->parameter;
        }
        
        std::string getValue() const {
            return std::to_string(speedometer->getValue());
        }
};



int main() {
    Display* display = new Display();
    Speedsensor* speedSensor = new Speedsensor();
    
    display->getData(*speedSensor);
    
    display->displayParameters();
    display->displayParameters();
    
    delete(speedSensor);
    delete(display);

    
    return 0;
}

