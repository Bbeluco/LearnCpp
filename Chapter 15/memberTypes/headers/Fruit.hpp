#ifndef FRUIT_H
#define FRUIT_H

class Fruit {
public:
    bool isApple() const;

    enum Type {
        apple,
        banana,
        pear
    };

    Fruit(Type f)
    : m_fruit{f}
    {}

    Type getFruit() const { return m_fruit; }
    int getPercentageEaten() const { return m_percentageEaten; }

private:
    Type m_fruit{};
    int m_percentageEaten;
};

#endif