/* Runtime dump - MCAirPlayDestination
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAirPlayDestination : NSObject
{
    NSString * _deviceID;
    NSString * _deviceName;
    NSString * _password;
}

@property (retain, nonatomic) NSString * deviceID;
@property (retain, nonatomic) NSString * deviceName;
@property (retain, nonatomic) NSString * password;

- (void).cxx_destruct;
- (NSString *)deviceID;
- (NSString *)password;
- (NSString *)deviceName;
- (void)setDeviceID:(NSString *)arg0;
- (void)setPassword:(NSString *)arg0;
- (void)setDeviceName:(NSString *)arg0;

@end
