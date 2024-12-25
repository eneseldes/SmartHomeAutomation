#ifndef OVEN_H
#define OVEN_H

#include "HasMode.h"

enum class OvenCookMode { Conventional, Grill, Fan, Defrost };

class Oven : public HasMode {
public:
    // Constructor
    Oven(const std::string &name, int &attr, const std::string &operationType, OvenCookMode cookMode);

    // Getter ve Setter
    OvenCookMode getCookMode() const;
    void setCookMode(OvenCookMode cookMode);

    // Fonksiyonlarý override et
    void setOperationType(std::string operationType) override;
    std::string getOperationType() const override;

    // Ekstra fonksiyonlar
    void display() const;
    double threadLevel();
    double getEnergyConsumption() const;

private:
    OvenCookMode currentCookMode;
};

#endif // OVEN_H
