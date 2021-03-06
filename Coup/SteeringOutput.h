#pragma once
#include <SFML/System.hpp>

// Struct to hold the output of a SteeringBehavior
struct SteeringOutput
{

	// A 2D Vector for the position of the kinematic
	sf::Vector2f position;

	// A single floating point value for the direction in which this kinematic is facing
	float orientaion;

	// A 2D Vector for the linear velocity of this kinematic
	sf::Vector2f velocity;

	// The angular velocity of this kinematic (the radians per second the orientation is changing)
	float rotation;

	// A 3D Vector for linear acceleration
	sf::Vector2f linear;

	// A single floating point value for angular acceleration
	float angular;

	// Constructors / Destructors
	SteeringOutput();
	~SteeringOutput();

	// Operator overload to add two SteeringOutputs together
	SteeringOutput operator+(const SteeringOutput other);
};

