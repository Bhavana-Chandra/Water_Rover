# Water_Rover
Our water rovers address ocean plastic waste by collecting debris from water surfaces. Equipped with cameras and controlled via a mobile app, they use Raspberry Pi for intelligent operation. Lightweight, durable, and driven by servo motors, they navigate efficiently, promoting environmental conservation.
Certainly! Here's a README file template for your water rover project to upload on GitHub:

---

# Water Rover Project

This project showcases an innovative water rover designed to address the challenge of ocean plastic waste by efficiently collecting debris from water surfaces. The rover is powered by NodeMCU and controlled via Blynk IoT, featuring an escalator mechanism for collecting debris and a net mechanism for storage. Additionally, it offers live streaming capabilities through a Raspberry Pi camera.

## Features

- **NodeMCU Controlled Rover**: The rover is powered by NodeMCU and a motor controller connected to 4 motors, allowing smooth navigation and control via the Blynk IoT platform.
- **Debris Collection Mechanism**: The rover is equipped with an escalator mechanism to collect debris and a net mechanism to store the collected waste.
- **Live Streaming**: The rover includes a Raspberry Pi Zero 2W connected to a Raspberry Pi camera, providing live streaming via the Raspberry Pi's IP address through an HTTP link.

## Components

- **NodeMCU**: Microcontroller for running the rover.
- **Motor Controller**: Drives the 4 motors for movement.
- **Blynk IoT**: Platform for controlling the rover.
- **Raspberry Pi Zero 2W**: Microcontroller for live streaming.
- **Raspberry Pi Camera**: Captures live video.
- **Escalator Mechanism**: Collects debris.
- **Net Mechanism**: Stores collected debris.

## Installation and Setup

### Hardware Setup

1. **Assemble the Rover**:
   - Connect the NodeMCU to the motor controller.
   - Attach the motor controller to the 4 motors.
   - Set up the escalator and net mechanisms for debris collection and storage.

2. **Raspberry Pi Setup**:
   - Connect the Raspberry Pi camera to the Raspberry Pi Zero 2W.
   - Ensure the Raspberry Pi is connected to your network.

### Software Setup

1. **NodeMCU Setup**:
   - Install the Arduino IDE.
   - Install the ESP8266 board package in the Arduino IDE.
   - Install the Blynk library in the Arduino IDE.
   - Upload the NodeMCU control code to the NodeMCU using the Arduino IDE.

2. **Raspberry Pi Setup**:
   - Install Raspbian OS on the Raspberry Pi Zero 2W.
   - Enable the camera module in the Raspberry Pi configuration settings.
   - Install and configure the necessary software for live streaming (e.g., `motion`, `flask`, or other HTTP streaming solutions).

### Running the Project

1. **Start the Rover**:
   - Power up the NodeMCU and ensure it is connected to the Blynk IoT platform.
   - Use the Blynk app to control the rover's movements.

2. **Access Live Stream**:
   - Power up the Raspberry Pi Zero 2W.
   - Access the live stream via the Raspberry Pi's IP address using an HTTP link (e.g., `http://<raspberry_pi_ip>:<port>`).

## Usage

- **Control the Rover**: Use the Blynk app to navigate the rover on the water surface.
- **Collect Debris**: The escalator mechanism will collect debris, and the net mechanism will store it.
- **View Live Stream**: Access the live video feed from the Raspberry Pi camera through the provided HTTP link.

## Contributing

Contributions are welcome! Please fork this repository and submit pull requests for any improvements or bug fixes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contact

For any inquiries or support, please contact [your_email@example.com].

---

Please mind this was our first hackathon participating and we created this project within .we welcome all inputs from everyone.
