/* Runtime dump - AADeviceInfo
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AADeviceInfo : NSObject
{
    APSConnection * _apsConnection;
    char _tokenDone;
    NSData * _token;
    NSObject<OS_dispatch_semaphore> * _tokenSema;
}

+ (NSDictionary *)infoDictionary;
+ (NSString *)apnsToken;
+ (NSString *)appleIDClientIdentifier;
+ (NSString *)productVersion;
+ (NSString *)userAgentHeader;
+ (NSString *)serialNumber;
+ (NSString *)osVersion;
+ (NSString *)clientInfoHeader;
+ (NSString *)udid;

- (NSString *)buildVersion;
- (void).cxx_destruct;
- (NSString *)apnsToken;
- (NSString *)appleIDClientIdentifier;
- (NSDictionary *)deviceInfoDictionary;
- (NSString *)osName;
- (NSString *)deviceClass;
- (NSString *)wifiMacAddress;
- (UIColor *)deviceEnclosureColor;
- (char)hasCellularCapability;
- (NSString *)mobileEquipmentIdentifier;
- (NSObject *)internationalMobileEquipmentIdentity;
- (id)storageCapacity;
- (NSString *)productType;
- (NSString *)modelNumber;
- (NSString *)deviceName;
- (NSString *)regionCode;
- (NSString *)productVersion;
- (NSString *)userAgentHeader;
- (NSString *)serialNumber;
- (NSString *)osVersion;
- (NSString *)clientInfoHeader;
- (NSString *)udid;
- (NSString *)deviceColor;

@end
