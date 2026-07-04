/* Runtime dump - HMSetupAccessoryDescription
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMSetupAccessoryDescription : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID * _accessoryUUID;
    NSString * _accessoryName;
}

@property (readonly, nonatomic) NSUUID * accessoryUUID;
@property (readonly, nonatomic) NSString * accessoryName;

+ (char)supportsSecureCoding;

- (HMSetupAccessoryDescription *)initWithAccessoryUUID:(NSUUID *)arg0 accessoryName:(NSString *)arg1;
- (HMSetupAccessoryDescription *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMSetupAccessoryDescription *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)accessoryName;
- (NSUUID *)accessoryUUID;

@end
