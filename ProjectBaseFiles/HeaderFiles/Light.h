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

    // A�a��daki metotlar� ekleyin
    void display() const override;  // Display metodu
    double getEnergyConsumption() const override;  // Enerji t�ketimi metodu
    double threadLevel() override;  // ��lem seviyesi metodu

    void setOperationType(std::string operationType) override;
    std::string getOperationType() const override;
};

#endif
