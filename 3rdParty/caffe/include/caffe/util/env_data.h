// Copyright (c) 2018 Tencent, Inc. All Rights Reserved
// @author: brbchen@tencent.com
// @date 2018/05/08
// @brief environment variables for global prediction service 

#ifndef TX_LIDAR_PERCEPTION_ENV_DATA_H
#define TX_LIDAR_PERCEPTION_ENV_DATA_H

#include <vector>

namespace tx_lidar {

  struct PolygonConfig {
    int input_height;
    int input_width;
    float overlap_threshold;
    float det_score_threshold;
    PolygonConfig() : input_height(768), input_width(768), 
                      overlap_threshold(0.2), det_score_threshold(0.2) {
    }
  };

  extern PolygonConfig g_polygon_config;
} // tx_lidar

#endif

