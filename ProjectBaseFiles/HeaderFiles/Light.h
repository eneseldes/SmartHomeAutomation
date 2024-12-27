#ifndef LIGHT_H
#define LIGHT_H

#include "HasMode.h"
#include <string>

enum class LightColor {
    White,
    DarkYellow,
    Yellow,
    Red,
    Purple,
    Green,
    Blue
};

class Light : public HasMode {
private:
    LightColor currentColor;

public:
    Light(const std::string &name, int attr, const std::string &operationType, LightColor color);

    void setColor(LightColor color);
    LightColor getColor() const;

    // Aþaðýdaki metotlarý ekleyin
    void display() const override;  // Display metodu
    double getEnergyConsumption() const override;  // Enerji tüketimi metodu
    double threadLevel() override;  // Ýþlem seviyesi metodu

    void setOperationType(std::string operationType) override;
    std::string getOperationType() const override;
};

#endif
