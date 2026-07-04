/* Runtime dump - MCProfileInfo
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCProfileInfo : NSObject <NSSecureCoding>
{
    NSString * _friendlyName;
    NSString * _profileDescription;
    NSString * _identifier;
    NSString * _UUID;
    NSString * _organization;
    NSDate * _expiryDate;
}

@property (retain, nonatomic) NSString * friendlyName;
@property (retain, nonatomic) NSString * profileDescription;
@property (retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSString * UUID;
@property (retain, nonatomic) NSString * organization;
@property (retain, nonatomic) NSDate * expiryDate;

+ (char)supportsSecureCoding;

- (MCProfileInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (NSString *)UUID;
- (void).cxx_destruct;
- (NSString *)friendlyName;
- (NSString *)profileDescription;
- (NSString *)organization;
- (NSDate *)expiryDate;
- (MCProfileInfo *)initWithProfile:(MCProfile *)arg0;
- (void)setFriendlyName:(NSString *)arg0;
- (void)setProfileDescription:(NSString *)arg0;
- (void)setOrganization:(NSString *)arg0;
- (void)setExpiryDate:(NSDate *)arg0;
- (void)setUUID:(NSSet *)arg0;

@end
