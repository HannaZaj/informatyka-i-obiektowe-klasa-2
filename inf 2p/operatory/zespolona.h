#include <string>


class Zespolona{
    private:
        std::string nazwa;
        float rzecz;
        float urojo;
    public:
        Zespolona();
        Zespolona(std::string nazwa, float rzecz, float urojo);
        std::string toString();
        Zespolona operator + (const Zespolona &argP);
    friend Zespolona operator +(const float argL, const Zespolona & argP);
        Zespolona &operator++(); // ++zesp
        Zespolona &operator++(int); // zesp++
    friend std::ostream & operator << (std::ostream &str, const Zespolona &argP);
    bool operator== (const Zespolona &argP);
};