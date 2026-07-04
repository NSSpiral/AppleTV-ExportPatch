/* Runtime dump - FMFDevice
 * Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding>
{
    char _isActiveDevice;
    char _isThisDevice;
    NSString * _deviceId;
    NSString * _deviceName;
}

@property (copy, nonatomic) NSString * deviceId;
@property (copy, nonatomic) NSString * deviceName;
@property (nonatomic) char isActiveDevice;
@property (nonatomic) char isThisDevice;

+ (char)supportsSecureCoding;
+ (NSObject *)deviceWithId:(NSObject *)arg0 name:(NSString *)arg1 isActive:(char)arg2 isThisDevice:(char)arg3;

- (FMFDevice *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)debugDescription;
- (FMFDevice *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)deviceName;
- (char)isThisDevice;
- (char)isActiveDevice;
- (void)setDeviceId:(NSString *)arg0;
- (void)setIsActiveDevice:(char)arg0;
- (void)setIsThisDevice:(char)arg0;
- (NSString *)deviceId;
- (void)updateIsActive:(char)arg0 isThisDevice:(char)arg1;
- (void)setDeviceName:(NSString *)arg0;

@end
