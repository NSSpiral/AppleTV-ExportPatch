/* Runtime dump - CKAccountInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAccountInfo : NSObject <NSCopying, NSSecureCoding>
{
    char _isUnitTestingAccount;
    char _accountWantsPushRegistration;
    NSString * _email;
    NSString * _password;
}

@property (readonly, nonatomic) NSString * email;
@property (readonly, nonatomic) NSString * password;
@property (nonatomic) char isUnitTestingAccount;
@property (nonatomic) char accountWantsPushRegistration;

+ (char)supportsSecureCoding;

- (CKAccountInfo *)initWithEmail:(NSString *)arg0 password:(NSString *)arg1;
- (CKAccountInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKAccountInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (char)isUnitTestingAccount;
- (NSString *)password;
- (void)setIsUnitTestingAccount:(char)arg0;
- (char)accountWantsPushRegistration;
- (void)setAccountWantsPushRegistration:(char)arg0;
- (NSString *)CKPropertiesDescription;
- (NSString *)email;

@end
