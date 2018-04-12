// %Tag(FULLTEXT)%
#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>
#include <iostream>
#include <string> // To use string
#include <termios.h>
using namespace std;

int main(int argc, char **argv){

// %Tag(INIT)%
  ros::init(argc, argv, "handlerhw1");
// %EndTag(INIT)%

// %Tag(NODEHANDLE)%
  ros::NodeHandle n;
// %EndTag(NODEHANDLE)%

// %Tag(PUBLISHER)%
  ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatterHand", 1000);
// %EndTag(PUBLISHER)%

// %Tag(ROS_OK)%
  //int count = 0;
 	while (ros::ok())
	{

// %Tag(FILL_MESSAGE)%
		std_msgs::String msg;
		char choice;
    std::stringstream c;

		do{
			cout << "Menu:\n";
			cout << "a - stampa tutto il messaggio\n";
			cout << "n - nome\n";
			cout << "e - età\n";
			cout << "c - corso di laurea\n";
			cout << "Inserire scelta\n";

			cin	>> choice;
			//cin.clear();
		}
		while(choice != 'a' && choice != 'n' && choice != 'e' && choice != 'c');

		switch(choice){
			case 'a':
				c << "a";
				break;
			case 'n':
				c << "n";
				break;
			case 'e':
				c << "e";
				break;
			case 'c':
				c << "c";
				break;
		}

    msg.data = c.str();

    // %Tag(PUBLISH)%
	    chatter_pub.publish(msg);
	// %EndTag(PUBLISH)%

	// %Tag(SPINONCE)%
	    ros::spinOnce();
	// %EndTag(SPINONCE)%

	}

	return 0;
}
// %EndTag(FULLTEXT)%
