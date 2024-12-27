#ifndef OVEN_H
#define OVEN_H

#include "HasMode.h"

class Oven : public HasMode {
private: 
    int temperature;
    std::string mode;

public:
    // Constructor
    Oven();

    // Getter ve Setter
    int getTemperature();
    void setTemperature(int temperature);

    // Fonksiyonlarý override et
    void setMode(std::string operationType) override;
    std::string getMode() const override;
    void reset() override;

    // Ekstra fonksiyonlar
    void display() const;
    double threadLevel();
    double getEnergyConsumption() const;
};

#endif // OVEN_H
