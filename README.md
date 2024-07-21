# ROS2 Workspace with TurtleBot3 and Gazebo 🏎️📊

Hello Viewers,

Welcome to the ROS2 Workspace repository! This repository contains all the related files for the project, where I utilized TurtleBot3 running with the Gazebo simulator 🏎️ and RViz2 📊, synchronized with a map in RViz2.

## 📡 Project Overview

The robot employs **LiDAR sensors** 📡 to perceive the environment, providing feedback that ensures synchronization with the maps in RViz2. To stop the robot 🛑, an action client node was created, allowing for halting the robot when running with RViz2.

### Demonstration

You can view the demonstration in the provided video link 🎥:
[Demonstration Video](https://drive.google.com/drive/folders/1DtLIZLG5zajBnCfT7hbjRxpgr54F1Dmw?usp=sharing)

The map has been configured in RViz2 to accurately represent the environment 🗺️.

## 🚀 Running the Project

### Launching RViz2 with Map

To run RViz2 with the map, please use the following command:
```sh
ros2 launch turtlebot3_navigation2 navigation2.launch.py use_sim_time:=True map:=maps/my_maps.yaml
```

Ensure to check the paths and directories of the files 🗂️.

### Starting TurtleBot3 in Gazebo

To start the TurtleBot3 Waffle in the turtlebot3_world environment inside the Gazebo simulator, use this command:
```sh
ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py
```

### Running the Action Client Node

To run the node, use the command:
```sh
ros2 run action_tutorials_cpp navigate_to_pose_action_client
```

The executable has been built in the **build** folder with the name **navigate_to_pose_action_client** ⚙️.

## 📚 Resources

The primary resources consulted for this creation are:

1. [Writing an Action Server/Client in C++](https://docs.ros.org/en/humble/Tutorials/Intermediate/Writing-an-Action-Server-Client/Cpp.html)<br>
2. [Writing a Simple C++ Service and Client](https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Cpp-Service-And-Client.html)<br>
3. [Writing a Simple C++ Publisher and Subscriber](https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Cpp-Publisher-And-Subscriber.html)<br>
4. [ROS Navigation](https://navigation.ros.org/)<br>
5. [Writing a Simple Python Publisher and Subscriber](https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html)<br>

Feel free to explore the repository and enjoy the experience!





   

  
