/*
 *
 *  unknown_gps.hpp
 *  F1Tenth @ UCSD
 *  Created by Kevin Shin on 1/18/25, as part of TritonAI @ UCSD 
 *  Copyright © 2025 Kevin Shin. All rights reserved.
 *
 *
 *
 */

#ifndef UNKNOWN_GPS_HPP
#define UNKNOWN_GPS_HPP

#include "GPSInterface.hpp"

namespace robocar {
	class UnknownGPS : public GPSInterface {
	public:
		UnknownGPS();
		~UnknownGPS() override;
		void publish_gps() override;	
	};
}

#endif // unknown_gps.hpp
