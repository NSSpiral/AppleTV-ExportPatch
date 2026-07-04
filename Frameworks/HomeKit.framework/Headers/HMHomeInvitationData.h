/* Runtime dump - HMHomeInvitationData
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHomeInvitationData : NSObject <NSSecureCoding>
{
    NSUUID * _identifier;
    NSDate * _startDate;
    NSDate * _endDate;
    int _invitationState;
}

@property (readonly, copy, nonatomic) NSUUID * identifier;
@property (readonly, copy, nonatomic) NSDate * startDate;
@property (readonly, copy, nonatomic) NSDate * endDate;
@property (nonatomic) int invitationState;

+ (char)supportsSecureCoding;
+ (NSString *)homeInvitationStateDescription:(int)arg0;

- (HMHomeInvitationData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSUUID *)identifier;
- (void).cxx_destruct;
- (HMHomeInvitationData *)initWithInvitationState:(int)arg0 invitationIdentifier:(NSString *)arg1 expiryDate:(NSDate *)arg2;
- (void)setInvitationState:(int)arg0;
- (int)invitationState;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
