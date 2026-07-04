/* Runtime dump - ATVHighSecurityAccountVerifyCodeResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface ATVHighSecurityAccountVerifyCodeResponse : AAResponse

@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) NSString * errorTitle;
@property (readonly, nonatomic) NSString * errorMessage;
@property (readonly, nonatomic) int errorCode;

- (char)success;
- (NSString *)errorTitle;
- (NSString *)errorMessage;
- (int)errorCode;

@end
