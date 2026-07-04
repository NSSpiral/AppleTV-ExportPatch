/* Runtime dump - NRFrameworkDevice
 * Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRFrameworkDevice : NRDevice
{
    NSUUID * _deviceID;
}

@property (retain, nonatomic) NSUUID * deviceID;

- (char)_setValue:(NSValue *)arg0 forProperty:(NSString *)arg1;
- (void).cxx_destruct;
- (NSUUID *)deviceID;
- (void)setDeviceID:(NSUUID *)arg0;
- (NRFrameworkDevice *)initWithDevice:(NSObject *)arg0 deviceID:(NSUUID *)arg1 queue:(NSObject *)arg2;

@end
