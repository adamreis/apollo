/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "modules/drivers/delphi_esr/protocol/vehicle2_4f1.h"


#include "glog/logging.h"

#include "modules/canbus/common/byte.h"
#include "modules/canbus/common/canbus_consts.h"

namespace apollo {
namespace drivers {
namespace delphi_esr {

Vehicle24f1::Vehicle24f1() {}
const int32_t Vehicle24f1::ID = 0x4F1;

void Vehicle24f1::Parse(const std::uint8_t* bytes, int32_t length,
                         ChassisDetail* chassis) const {
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_volvo_short_track_roc(can_rx_volvo_short_track_roc(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_mr_only_transmit(can_rx_mr_only_transmit(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_lr_only_transmit(can_rx_lr_only_transmit(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_high_yaw_angle(can_rx_high_yaw_angle(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_clear_faults(can_rx_clear_faults(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_use_angle_misalignment(can_rx_use_angle_misalignment(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_turn_signal_status(can_rx_turn_signal_status(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_blockage_disable(can_rx_blockage_disable(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_vehicle_speed_validity(can_rx_vehicle_speed_validity(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_mmr_upside_down(can_rx_mmr_upside_down(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_wiper_status(can_rx_wiper_status(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_raw_data_enable(can_rx_raw_data_enable(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_radar_cmd_radiate(can_rx_radar_cmd_radiate(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_grouping_mode(can_rx_grouping_mode(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_maximum_tracks(can_rx_maximum_tracks(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_lateral_mounting_offset(can_rx_lateral_mounting_offset(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_angle_misalignment(can_rx_angle_misalignment(bytes, length));
  chassis->mutable_esr()->mutable_vehicle2_4f1()->set_can_rx_scan_index_ack(can_rx_scan_index_ack(bytes, length));
}

// config detail: {'name': 'can_rx_volvo_short_track_roc', 'offset': 0.0, 'precision': 500.0, 'len': 4, 'is_signed_var': True, 'physical_range': '[-4000|3500]', 'bit': 31, 'type': 'double', 'order': 'motorola', 'physical_unit': 'm'}
double Vehicle24f1::can_rx_volvo_short_track_roc(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int32_t x = t0.get_byte(4, 4);

  x <<= 28;
  x >>= 28;

  double ret = x * 500.000000;
  return ret;
}

// config detail: {'name': 'can_rx_mr_only_transmit', 'enum': {0: 'CAN_RX_MR_ONLY_TRANSMIT_OFF', 1: 'CAN_RX_MR_ONLY_TRANSMIT_ON'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|0]', 'bit': 25, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
Vehicle2_4f1::Can_rx_mr_only_transmitType Vehicle24f1::can_rx_mr_only_transmit(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int32_t x = t0.get_byte(1, 1);

  Vehicle2_4f1::Can_rx_mr_only_transmitType ret =  static_cast<Vehicle2_4f1::Can_rx_mr_only_transmitType>(x);
  return ret;
}

// config detail: {'name': 'can_rx_lr_only_transmit', 'enum': {0: 'CAN_RX_LR_ONLY_TRANSMIT_OFF', 1: 'CAN_RX_LR_ONLY_TRANSMIT_ON'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|0]', 'bit': 24, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
Vehicle2_4f1::Can_rx_lr_only_transmitType Vehicle24f1::can_rx_lr_only_transmit(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 3);
  int32_t x = t0.get_byte(0, 1);

  Vehicle2_4f1::Can_rx_lr_only_transmitType ret =  static_cast<Vehicle2_4f1::Can_rx_lr_only_transmitType>(x);
  return ret;
}

// config detail: {'name': 'can_rx_high_yaw_angle', 'offset': 0.0, 'precision': 1.0, 'len': 6, 'is_signed_var': True, 'physical_range': '[-32|31]', 'bit': 21, 'type': 'int', 'order': 'motorola', 'physical_unit': 'deg'}
int Vehicle24f1::can_rx_high_yaw_angle(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(0, 6);

  x <<= 26;
  x >>= 26;

  int ret = x;
  return ret;
}

// config detail: {'name': 'can_rx_clear_faults', 'enum': {0: 'CAN_RX_CLEAR_FAULTS_OFF', 1: 'CAN_RX_CLEAR_FAULTS_ON'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|0]', 'bit': 22, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
Vehicle2_4f1::Can_rx_clear_faultsType Vehicle24f1::can_rx_clear_faults(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(6, 1);

  Vehicle2_4f1::Can_rx_clear_faultsType ret =  static_cast<Vehicle2_4f1::Can_rx_clear_faultsType>(x);
  return ret;
}

// config detail: {'name': 'can_rx_use_angle_misalignment', 'enum': {0: 'CAN_RX_USE_ANGLE_MISALIGNMENT_OFF', 1: 'CAN_RX_USE_ANGLE_MISALIGNMENT_ON'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|0]', 'bit': 23, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
Vehicle2_4f1::Can_rx_use_angle_misalignmentType Vehicle24f1::can_rx_use_angle_misalignment(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 2);
  int32_t x = t0.get_byte(7, 1);

  Vehicle2_4f1::Can_rx_use_angle_misalignmentType ret =  static_cast<Vehicle2_4f1::Can_rx_use_angle_misalignmentType>(x);
  return ret;
}

// config detail: {'name': 'can_rx_turn_signal_status', 'enum': {0: 'CAN_RX_TURN_SIGNAL_STATUS_OFF', 1: 'CAN_RX_TURN_SIGNAL_STATUS_LEFT', 2: 'CAN_RX_TURN_SIGNAL_STATUS_RIGHT', 3: 'CAN_RX_TURN_SIGNAL_STATUS_INVALID_3'}, 'precision': 1.0, 'len': 2, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|0]', 'bit': 63, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
Vehicle2_4f1::Can_rx_turn_signal_statusType Vehicle24f1::can_rx_turn_signal_status(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int32_t x = t0.get_byte(6, 2);

  Vehicle2_4f1::Can_rx_turn_signal_statusType ret =  static_cast<Vehicle2_4f1::Can_rx_turn_signal_statusType>(x);
  return ret;
}

// config detail: {'name': 'can_rx_blockage_disable', 'enum': {0: 'CAN_RX_BLOCKAGE_DISABLE_ENABLED', 1: 'CAN_RX_BLOCKAGE_DISABLE_DISABLED'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|0]', 'bit': 54, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
Vehicle2_4f1::Can_rx_blockage_disableType Vehicle24f1::can_rx_blockage_disable(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(6, 1);

  Vehicle2_4f1::Can_rx_blockage_disableType ret =  static_cast<Vehicle2_4f1::Can_rx_blockage_disableType>(x);
  return ret;
}

// config detail: {'name': 'can_rx_vehicle_speed_validity', 'enum': {0: 'CAN_RX_VEHICLE_SPEED_VALIDITY_INVALID', 1: 'CAN_RX_VEHICLE_SPEED_VALIDITY_VALID'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|0]', 'bit': 61, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
Vehicle2_4f1::Can_rx_vehicle_speed_validityType Vehicle24f1::can_rx_vehicle_speed_validity(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int32_t x = t0.get_byte(5, 1);

  Vehicle2_4f1::Can_rx_vehicle_speed_validityType ret =  static_cast<Vehicle2_4f1::Can_rx_vehicle_speed_validityType>(x);
  return ret;
}

// config detail: {'name': 'can_rx_mmr_upside_down', 'enum': {0: 'CAN_RX_MMR_UPSIDE_DOWN_RIGHT_SIDE_UP', 1: 'CAN_RX_MMR_UPSIDE_DOWN_UPSIDE_DOWN'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|1]', 'bit': 60, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
Vehicle2_4f1::Can_rx_mmr_upside_downType Vehicle24f1::can_rx_mmr_upside_down(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int32_t x = t0.get_byte(4, 1);

  Vehicle2_4f1::Can_rx_mmr_upside_downType ret =  static_cast<Vehicle2_4f1::Can_rx_mmr_upside_downType>(x);
  return ret;
}

// config detail: {'name': 'can_rx_wiper_status', 'enum': {0: 'CAN_RX_WIPER_STATUS_OFF', 1: 'CAN_RX_WIPER_STATUS_ON'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|0]', 'bit': 57, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
Vehicle2_4f1::Can_rx_wiper_statusType Vehicle24f1::can_rx_wiper_status(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int32_t x = t0.get_byte(1, 1);

  Vehicle2_4f1::Can_rx_wiper_statusType ret =  static_cast<Vehicle2_4f1::Can_rx_wiper_statusType>(x);
  return ret;
}

// config detail: {'name': 'can_rx_raw_data_enable', 'enum': {0: 'CAN_RX_RAW_DATA_ENABLE_FILTERED', 1: 'CAN_RX_RAW_DATA_ENABLE_RAW'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|0]', 'bit': 56, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
Vehicle2_4f1::Can_rx_raw_data_enableType Vehicle24f1::can_rx_raw_data_enable(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int32_t x = t0.get_byte(0, 1);

  Vehicle2_4f1::Can_rx_raw_data_enableType ret =  static_cast<Vehicle2_4f1::Can_rx_raw_data_enableType>(x);
  return ret;
}

// config detail: {'name': 'can_rx_radar_cmd_radiate', 'enum': {0: 'CAN_RX_RADAR_CMD_RADIATE_OFF', 1: 'CAN_RX_RADAR_CMD_RADIATE_ON'}, 'precision': 1.0, 'len': 1, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|0]', 'bit': 55, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
Vehicle2_4f1::Can_rx_radar_cmd_radiateType Vehicle24f1::can_rx_radar_cmd_radiate(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(7, 1);

  Vehicle2_4f1::Can_rx_radar_cmd_radiateType ret =  static_cast<Vehicle2_4f1::Can_rx_radar_cmd_radiateType>(x);
  return ret;
}

// config detail: {'name': 'can_rx_grouping_mode', 'enum': {0: 'CAN_RX_GROUPING_MODE_NO_GROUPING', 1: 'CAN_RX_GROUPING_MODE_GROUP_MOVING_ONLY', 2: 'CAN_RX_GROUPING_MODE_GROUP_STATIONARY_ONLY', 3: 'CAN_RX_GROUPING_MODE_GROUP_MOVING_STATIONARY'}, 'precision': 1.0, 'len': 2, 'is_signed_var': False, 'offset': 0.0, 'physical_range': '[0|3]', 'bit': 59, 'type': 'enum', 'order': 'motorola', 'physical_unit': ''}
Vehicle2_4f1::Can_rx_grouping_modeType Vehicle24f1::can_rx_grouping_mode(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 7);
  int32_t x = t0.get_byte(2, 2);

  Vehicle2_4f1::Can_rx_grouping_modeType ret =  static_cast<Vehicle2_4f1::Can_rx_grouping_modeType>(x);
  return ret;
}

// config detail: {'name': 'can_rx_maximum_tracks', 'offset': 1.0, 'precision': 1.0, 'len': 6, 'is_signed_var': False, 'physical_range': '[1|64]', 'bit': 53, 'type': 'int', 'order': 'motorola', 'physical_unit': ''}
int Vehicle24f1::can_rx_maximum_tracks(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 6);
  int32_t x = t0.get_byte(0, 6);

  int ret = x + 1.000000;
  return ret;
}

// config detail: {'description': "(+) = to the right from driver's perspective", 'offset': 0.0, 'precision': 0.015625, 'len': 8, 'name': 'can_rx_lateral_mounting_offset', 'is_signed_var': True, 'physical_range': '[-2|1.984375]', 'bit': 47, 'type': 'double', 'order': 'motorola', 'physical_unit': 'm'}
double Vehicle24f1::can_rx_lateral_mounting_offset(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 5);
  int32_t x = t0.get_byte(0, 8);

  x <<= 24;
  x >>= 24;

  double ret = x * 0.015625;
  return ret;
}

// config detail: {'description': '(+) = clockwise', 'offset': 0.0, 'precision': 0.0625, 'len': 8, 'name': 'can_rx_angle_misalignment', 'is_signed_var': True, 'physical_range': '[-8|7.9375]', 'bit': 39, 'type': 'double', 'order': 'motorola', 'physical_unit': 'deg'}
double Vehicle24f1::can_rx_angle_misalignment(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 4);
  int32_t x = t0.get_byte(0, 8);

  x <<= 24;
  x >>= 24;

  double ret = x * 0.062500;
  return ret;
}

// config detail: {'name': 'can_rx_scan_index_ack', 'offset': 0.0, 'precision': 1.0, 'len': 16, 'is_signed_var': False, 'physical_range': '[0|65535]', 'bit': 7, 'type': 'int', 'order': 'motorola', 'physical_unit': ''}
int Vehicle24f1::can_rx_scan_index_ack(const std::uint8_t* bytes, int32_t length) const {
  Byte t0(bytes + 0);
  int32_t x = t0.get_byte(0, 8);

  Byte t1(bytes + 1);
  int32_t t = t1.get_byte(0, 8);
  x <<= 8;
  x |= t;

  int ret = x;
  return ret;
}
}  // namespace delphi_esr
}  // namespace drivers
}  // namespace apollo
