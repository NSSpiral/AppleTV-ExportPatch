/* Runtime dump - SSTermsAndConditions
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSTermsAndConditions : NSObject <NSCopying>
{
    char _requiresAuthentication;
    NSString * _text;
    char _userAccepted;
    long long _versionID;
}

@property (nonatomic) char userAccepted;
@property (nonatomic) NSString * currentText;
@property (nonatomic) long long currentVersionIdentifier;
@property (readonly, nonatomic) char requiresAuthentication;

- (char)requiresAuthentication;
- (SSTermsAndConditions *)initWithResponseData:(NSData *)arg0 error:(id *)arg1;
- (char)isUserAccepted;
- (void)dealloc;
- (SSTermsAndConditions *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)currentText;
- (void)setCurrentText:(NSString *)arg0;
- (long long)currentVersionIdentifier;
- (void)setCurrentVersionIdentifier:(long long)arg0;
- (void)setUserAccepted:(char)arg0;

@end
