#pragma once

/**
* Abstract base class for most things on screen.
*/
class Entity
{
public:
    Entity() = default;
    ~Entity() = default;

    virtual void update(double dt) = 0;

    virtual void render() = 0;

private:
    
};

