/* Runtime dump - ATVNativeMerchant
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedMerchant.h>

@class BRAccountType, BRController;
@interface ATVNativeMerchant : ATVFeedMerchant

+ (ATVNativeMerchant *)nativeMerchantIdentifiers;

- (NSObject *)_radioViewController;
- (BRAccountType *)accountType;
- (BRController *)rootController;

@end
