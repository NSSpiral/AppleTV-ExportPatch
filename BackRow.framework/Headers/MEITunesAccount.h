/* Runtime dump - MEITunesAccount
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRUserPasswordAccount.h>
@interface MEITunesAccount : BRUserPasswordAccount

+ (void)initialize;

- (NSString *)_encryptPassword:(NSString *)arg0;
- (NSString *)_decryptPassword:(NSString *)arg0;

@end
