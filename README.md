Hello Viewers,<br><br>
I have shared the ROS2 Workspace repository with you, containing all the related files. According to the prompt, I utilized TurtleBot3 running with the Gazebo simulator 🏎️ and RViz2 📊, with a synchronized map in RViz2.
<br><br>
The robot employs LiDAR sensors 📡 to perceive the environment, providing feedback that ensures synchronization with the maps in RViz2. To stop the robot 🛑, I created an action client node, which allows for stopping the robot when running with RViz2.
<br><br>
You can view the demonstration in the provided video link 🎥:
<br>
https://drive.google.com/drive/folders/1DtLIZLG5zajBnCfT7hbjRxpgr54F1Dmw?usp=sharing
<br><br>
The map has also been configured in RViz2 to accurately represent the environment🗺️.
<br><br>
To run the rviz2 with map please run this command
<br>
&nbsp; &nbsp;&nbsp;**ros2 launch turtlebot3_navigation2 navigation2.launch.py use_sim_time:=True map:=maps/my_maps.yaml**
<br><br>
Please do check with the paths and directories of the files🗂️.
<br><br>
To start with the turtlebot3 waffle in the turtlebot3_world environment inside gazebo simulator use this command
<br>
 &nbsp; &nbsp;&nbsp; **ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py**
<br><br>
To run the node please run the command 
<br>
  &nbsp; &nbsp;&nbsp; **ros2 run action_tutorials_cpp navigate_to_pose_action_client**
<br><br>
The executable has been built in the **build** folder with the name **navigate_to_pose_action_client** ⚙️..
<br><br>
The major Links used during the prompt are:-
<br>
 1.https://docs.ros.org/en/humble/Tutorials/Intermediate/Writing-an-Action-Server-Client/Cpp.html<br>
 2.https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Cpp-Service-And-Client.html<br>
 3.https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Cpp-Publisher-And-Subscriber.html<br>
 4.https://navigation.ros.org/<br>
 5.https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html<br>



   

  
