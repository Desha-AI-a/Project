
 Human Following Robot
📌 Overview
This project implements a Human Following Robot using Arduino. The robot is designed to automatically detect and follow a human target using sensors, making it suitable for applications like smart assistants, delivery robots, and interactive robotics systems.

 Features
 Detects human presence using sensors
  Follows the target automatically

 Adjusts direction (left/right) based on movement

 Stops when no target is detected

Real-time response

  Components Used
Arduino Uno

Ultrasonic Sensor (HC-SR04) (optional for distance)

IR Sensors (Left & Right)

Motor Driver (L298N)

DC Motors + Wheels

Chassis

Battery (Li-ion 3.7V or external power supply)

Jumper wires

 How It Works
The robot uses IR sensors to detect the position of a human.

If the human is:

In front → robot moves forward

On the right → robot turns right

On the left → robot turns left

If no human is detected → robot stops

(Optional) Ultrasonic sensor ensures safe distance

