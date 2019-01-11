// Copyright (c) 2018 tencent, Inc. All Rights Reserved
// @author lukexuzhang@tencent.com
// @date 2018/12/120
// @encode and decode caffe model.

#ifndef TX_LIDAR_ENCODE_DECODE_MODEL_
#define TX_LIDAR_ENCODE_DECODE_MODEL_

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <algorithm>

namespace tx_encode_decode_model {

//@ description    decode caffemodel
//@ note:          model_path is a filename 
//                 
bool loadModel( std::string model_path, long size1, long size2 );

} // tx_encode_decode_model

#endif
