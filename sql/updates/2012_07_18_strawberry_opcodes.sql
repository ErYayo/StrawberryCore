DELETE FROM `opcodes` WHERE `OpcodeValue` IN (6310, 1335, 9233, 21920);
INSERT INTO `opcodes` VALUES
('SMSG_TRANSFER_PENDING', '6310', '15595', '15595'),
('SMSG_TRANSFER_ABORTED', '1335', '15595', '15595'),
('MSG_MOVE_WORLDPORT_ACK', '9233', '15595', '15595'),
('MSG_MOVE_TELEPORT', '21920', '15595', '15595');