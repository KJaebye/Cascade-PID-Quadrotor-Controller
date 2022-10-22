# Introduction
This ROS package is a classical quadcopter cascade PID controller, with position, velocity, attitude, and even accelaration control loop if you like.

***Note: The package relays on glog_catkin, mav_comm, mav_msgs, mavros, planning_msgs.***

# Usage
This controller provides two modes: position control, and velocity control. 

Flight autopilot subscribes info from gps and imu, and publish motor speed command as outputs.
