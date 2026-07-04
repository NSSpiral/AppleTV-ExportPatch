/* Runtime dump - IKJSDevice
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSDevice : IKJSObject <IKJSDevice>
{
    id _isNetworkTypeChangedToken;
    <IKAppDeviceConfig> * _deviceConfig;
}

@property (weak, nonatomic) <IKAppDeviceConfig> * deviceConfig;
@property (readonly, nonatomic) NSString * vendorID;
@property (readonly, nonatomic) NSString * appVersion;
@property (readonly, nonatomic) NSString * appIdentifier;
@property (readonly, nonatomic) NSString * systemVersion;
@property (readonly, nonatomic) NSString * model;
@property (readonly, nonatomic) NSString * productType;
@property (readonly, nonatomic) NSNumber * pixelRatio;
@property (readonly, nonatomic) char isInRetailDemoMode;

+ (NSString *)getMobileGestaltString:(struct __CFString *)arg0;

- (void)_networkTypeDidChangeNotification:(NSNotification *)arg0;
- (void)dealloc;
- (NSString *)systemVersion;
- (NSString *)model;
- (void).cxx_destruct;
- (NSString *)productType;
- (NSString *)appIdentifier;
- (IKJSDevice *)initWithAppContext:(<IKApplication> *)arg0 deviceConfig:(<IKAppDeviceConfig> *)arg1;
- (<IKAppDeviceConfig> *)deviceConfig;
- (void)setDeviceConfig:(<IKAppDeviceConfig> *)arg0;
- (id)capacity:(id)arg0;
- (char)isInRetailDemoMode;
- (NSString *)vendorID;
- (NSString *)appVersion;
- (NSNumber *)pixelRatio;

@end
