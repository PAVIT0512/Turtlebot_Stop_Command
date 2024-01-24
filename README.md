Hello There,
The ROS2 Workspace has been shared with you via this repository which consist of all the related files
According to the prompt given I have used turtlebot3 that is running with the help of gazebo simulator and also
rviz2 with the map that is being synced with the gazebo simulator.
The bot is using lidars to sense the environment and gives the feedback so that it is easily synced with the 
maps in rviz2. To stop the bot I have made an action client node which when running the bot with rviz2 can stop the bot.
The link of the video is given below:-
https://drive.google.com/drive/folders/1DtLIZLG5zajBnCfT7hbjRxpgr54F1Dmw?usp=sharing

The map has also been setup with rviz2 with the environment.
To run the rviz2 with map please run this command
  ros2 launch turtlebot3_navigation2 navigation2.launch.py use_sim_time:=True map:=maps/my_maps.yaml
Please do check with the paths and directories of the files.

To start with the turtlebot3 waffle in the turtlebot3_world environment inside gazebo simulator use this command
  ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py

To run the node please run the command 
  ros2 run action_tutorials_cpp navigate_to_pose_action_client
The executable has been build in the build folder with the name navigate_to_pose_action_client.

The major Links used during the prompt are:-
 1.https://docs.ros.org/en/humble/Tutorials/Intermediate/Writing-an-Action-Server-Client/Cpp.html
 2.https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Cpp-Service-And-Client.html
 3.https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Cpp-Publisher-And-Subscriber.html
 4.https://navigation.ros.org/
 5.https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html



   

  
