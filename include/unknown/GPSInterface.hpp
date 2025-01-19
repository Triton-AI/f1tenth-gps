/*
 *
 *  GPSInterface.hpp
 *  F1Tenth @ UCSD
 *  Created by Kevin Shin on 1/18/25, as part of TritonAI @ UCSD 
 *  Copyright © 2025 Kevin Shin. All rights reserved.
 *
 *
 *
 */

#ifndef GPS_INTERFACE_HPP
#define GPS_INTERFACE_HPP

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
// #include "GPS.hpp"

namespace robocar {
  class GPSInterface : public rclcpp::Node{
          public:
                  GPSInterface(const std::string &aName) : Node(aName) {}
                  virtual ~GPSInterface() {}
                  virtual void publish_gps() = 0;
          protected:
        // rclcpp::Publisher<MSGTYPE>::SharedPtr publisher;
  };
}


#endif // GPSInterface.hpp
~                                                                                                     
~                                                                                                     
~                                                                                                     
~                                                                                                     
~                                                                                                     
~                         
