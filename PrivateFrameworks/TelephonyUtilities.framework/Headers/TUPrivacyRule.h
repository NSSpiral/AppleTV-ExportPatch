/* Runtime dump - TUPrivacyRule
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUPrivacyRule : NSObject <NSCoding>
{
    int _type;
    TUPhoneNumber * _phoneNumber;
    NSString * _email;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) TUPhoneNumber * phoneNumber;
@property (readonly, nonatomic) NSString * email;

+ (NSNumber *)ruleForPhoneNumber:(NSNumber *)arg0;
+ (TUPrivacyRule *)ruleForEmail:(id)arg0;

- (void)dealloc;
- (TUPrivacyRule *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (int)type;
- (TUPhoneNumber *)phoneNumber;
- (NSString *)email;
- (TUPrivacyRule *)initForPhoneNumber:(NSNumber *)arg0;
- (TUPrivacyRule *)initForEmail:(SAPhonePlayVoiceMail *)arg0;

@end
