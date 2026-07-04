/* Runtime dump - BluetoothDevice
 * Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

@interface BluetoothDevice : NSObject
{
    NSString * _name;
    NSString * _address;
    struct BTDeviceImpl * _device;
}

- (char)isServiceSupported:(unsigned int)arg0;
- (char)paired;
- (void)setDevice:(struct BTDeviceImpl *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (int)compare:(NSObject *)arg0;
- (int)type;
- (BluetoothDevice *)copyWithZone:(struct _NSZone *)arg0;
- (int)batteryLevel;
- (void)connect;
- (void)disconnect;
- (char)isAccessory;
- (BluetoothDevice *)initWithDevice:(struct BTDeviceImpl *)arg0 address:(NSString *)arg1;
- (void)_clearName;
- (char)_isNameCached;
- (unsigned int)majorClass;
- (unsigned int)minorClass;
- (id)scoUID;
- (char)cloudPaired;
- (unsigned int)connectedServices;
- (unsigned int)connectedServicesCount;
- (char)supportsBatteryLevel;
- (id)getServiceSetting:(unsigned int)arg0 key:(NSString *)arg1;
- (void)setServiceSetting:(unsigned int)arg0 key:(NSString *)arg1 value:(NSObject *)arg2;
- (void)connectWithServices:(unsigned int)arg0;
- (void)acceptSSP:(int)arg0;
- (void)unpair;
- (void)startVoiceCommand;
- (void)endVoiceCommand;
- (struct ?)syncSettings;
- (void)setSyncSettings:(struct ?)arg0;
- (id)syncGroups;
- (void)setSyncGroup:(int)arg0 enabled:(char)arg1;
- (NSString *)address;
- (void)setPIN:(NSSet *)arg0;
- (struct BTDeviceImpl *)device;
- (char)connected;

@end
