/* Runtime dump - ATVSedonaController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootController.h>

@class BRMerchant;
@interface ATVSedonaController : ATVFeedRootController

+ (QLPreviewViewController *)controller;

- (void)wasPushed;
- (ATVSedonaController *)initWithMerchant:(BRMerchant *)arg0;

@end
