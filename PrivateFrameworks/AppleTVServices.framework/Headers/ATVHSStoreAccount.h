/* Runtime dump - ATVHSStoreAccount
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSStoreAccount : NSObject
{
    NSString * _accountName;
    NSString * _password;
}

@property (copy, nonatomic) NSString * accountName;
@property (copy, nonatomic) NSString * password;

- (void).cxx_destruct;
- (void)setAccountName:(NSString *)arg0;
- (NSString *)accountName;
- (ATVHSStoreAccount *)initWithAccountName:(NSString *)arg0 andPassword:(NSString *)arg1;
- (void)homeSharingGroupIDWithCompletion:(id /* block */)arg0;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;

@end
