/* Runtime dump - SFCompanionService
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionService : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _deviceName;
    NSString * _deviceID;
    NSString * _serviceType;
    NSString * _managerID;
    NSString * _ipAddress;
    NSString * _identifier;
    NSNumber * _nsxpcVersion;
}

@property (copy) NSString * deviceName;
@property (copy) NSString * deviceID;
@property (copy) NSString * serviceType;
@property (copy) NSString * managerID;
@property (copy) NSString * ipAddress;
@property (copy) NSString * identifier;
@property (copy) NSNumber * nsxpcVersion;

+ (char)supportsSecureCoding;
+ (NSDictionary *)serviceFromDictionary:(NSDictionary *)arg0;
+ (NSData *)serviceFromAuthorData:(NSData *)arg0;

- (NSString *)managerID;
- (void)dealloc;
- (SFCompanionService *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (SFCompanionService *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (SFCompanionService *)initWithServiceName:(NSString *)arg0;
- (NSString *)ipAddress;
- (NSString *)deviceID;
- (NSString *)deviceName;
- (void)setDeviceID:(NSString *)arg0;
- (char)isEqualToService:(NSObject *)arg0;
- (NSString *)serviceType;
- (void)setServiceType:(NSString *)arg0;
- (NSData *)messageData;
- (void)setIpAddress:(NSString *)arg0;
- (void)setManagerID:(NSString *)arg0;
- (NSNumber *)nsxpcVersion;
- (void)setNsxpcVersion:(NSNumber *)arg0;
- (void)setDeviceName:(NSString *)arg0;

@end
