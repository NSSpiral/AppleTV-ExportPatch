/* Runtime dump - BRUserPasswordAccount
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRAccount.h>
@interface BRUserPasswordAccount : BRAccount
{
    NSString * _password;
}

- (void)_writeProtectedInfo:(NSDictionary *)arg0;
- (void)_readProtectedInfo:(NSDictionary *)arg0;
- (void)dealloc;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;

@end
