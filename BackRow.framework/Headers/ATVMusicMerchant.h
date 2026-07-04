/* Runtime dump - ATVMusicMerchant
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMerchant_ITMS.h>

@class BRController;
@interface ATVMusicMerchant : ATVMerchant_ITMS

- (void)decorateRequestProperties:(NSDictionary *)arg0;
- (char)hasAffinityToURL:(NSURL *)arg0;
- (char)enabled;
- (BRController *)rootController;

@end
