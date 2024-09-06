# Setting Value Without Keypad on Arduino

This project demonstrates how to set a value using an analog input without the need for a keypad. It uses an LCD to display the current value, and a button is used to set the value step by step.

## Components Used

- Arduino Uno
- 16x2 LCD Display
- Potentiometer (or any analog sensor)
- Push button (connected to pin 8)
- Resistors
- Wires
- Breadboard

## How It Works

- The analog value from a sensor (like a potentiometer) is read and converted into a single-digit number (0-9) based on the input range.
- The digit is displayed on the LCD at the current position.
- When the **SET** button is pressed, the digit is added to the `setpoint` variable.
- The position of the cursor moves after each press of the **SET** button, allowing you to build a multi-digit number.

## Pin Configuration

- **LCD**:
  - RS: Pin 2
  - EN: Pin 3
  - D4: Pin 4
  - D5: Pin 5
  - D6: Pin 6
  - D7: Pin 7
- **Analog Input**: Pin A0 (connected to the potentiometer)
- **Button**: Pin 8 (for setting values)

## Code Explanation

- The analog input from the potentiometer (or any sensor) is divided into 10 ranges, each corresponding to a digit from 0 to 9.
- The value is shown on the LCD, and when the button is pressed, the current digit is added to the `setpoint`.
- The cursor position shifts to allow the next digit to be entered, building a larger number.
- The **SET** button sets the value at each step.

## How to Use

1. Connect the components according to the pin configuration.
2. Upload the provided code to your Arduino board.
3. Turn the potentiometer to select a value (0-9), which will be displayed on the LCD.
4. Press the **SET** button to confirm the value and move to the next digit.
5. The final setpoint will be displayed on the LCD.

## Features

- Allows setting a multi-digit number using only a potentiometer and a button.
- Eliminates the need for a numeric keypad.
- Simple and intuitive interface with an LCD display.

## License

This project is open-source and can be modified or distributed freely.