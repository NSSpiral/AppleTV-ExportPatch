/* Runtime dump - ATVHighSecurityAccountSendCodeResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface ATVHighSecurityAccountSendCodeResponse : AAResponse

@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) NSDictionary * userDisplayStrings;
@property (readonly, nonatomic) NSString * errorTitle;
@property (readonly, nonatomic) NSString * errorMessage;
@property (readonly, nonatomic) int errorCode;

- (char)success;
- (NSDictionary *)userDisplayStrings;
- (NSString *)errorTitle;
- (NSString *)errorMessage;
- (int)errorCode;

@end
