/*
 *
 *  unknown_gps.cpp
 *  F1Tenth @ UCSD
 *  Created by Kevin Shin on 1/18/25, as part of TritonAI @ UCSD 
 *  Copyright © 2025 Kevin Shin. All rights reserved.
 *
 *
 */

#include "unknown_gps.hpp"

namespace robocar{
	UnknownGPS::UnknownGPS() : GPSInterface("unknown_gps_node") {}
        UnknownGPS::~UnknownGPS() {}
	void UnknownGPS::publish_gps() {}
}	

