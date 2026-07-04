/* Runtime dump - BLEMIDIAccessor
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface BLEMIDIAccessor : NSObject

+ (NSObject *)uuidForMIDIDevice:(struct OpaqueMIDIDevice *)arg0;
+ (struct OpaqueMIDIDevice *)midiDeviceForUUID:(id)arg0;
+ (char)deviceIsLocalPeripheral:(struct OpaqueMIDIDevice *)arg0;
+ (char)deviceIsRemotePeripheral:(struct OpaqueMIDIDevice *)arg0;
+ (struct OpaqueMIDIDevice *)localPeripheral;
+ (NSObject *)nameForMIDIDevice:(struct OpaqueMIDIDevice *)arg0;
+ (struct OpaqueMIDIDevice *)midiDeviceForUUID:(id)arg0 isLocalPeripheral:(char)arg1 isRemotePeripheral:(char)arg2;
+ (char)deviceIsOnline:(struct OpaqueMIDIDevice *)arg0;
+ (struct OpaqueMIDIDevice *)nullDevice;
+ (NSString *)localPeripheralName;
+ (char)deviceIsNullDevice:(struct OpaqueMIDIDevice *)arg0;
+ (char)uuidIsForgettable:(id)arg0;
+ (unsigned short)timeStampOffset:(unsigned long long)arg0;
+ (unsigned short)reconstructWithHighByte:(unsigned char)arg0 lowByte:(unsigned char)arg1 overflow:(char)arg2;
+ (unsigned long long)timeStampWithEpoch:(unsigned long long)arg0 offset:(unsigned short)arg1;
+ (void)splitOffset:(unsigned short)arg0 intoHeaderByte:(char *)arg1 timeStampByte:(char *)arg2;
+ (void)logEvent:(char *)arg0 length:(unsigned short)arg1 timeStamp:(unsigned long long)arg2;

@end
