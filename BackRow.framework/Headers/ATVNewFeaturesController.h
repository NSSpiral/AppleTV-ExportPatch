/* Runtime dump - ATVNewFeaturesController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class BRWaitPromptControl;
@interface ATVNewFeaturesController : BRController
{
    BRWaitPromptControl * _prompt;
    NSTimer * _storeWaitTimer;
    NSString * _urlString;
    int _retryCount;
    NSString * _storeLocaleID;
    NSArray * _enabledMerchantIDs;
}

@property (retain, nonatomic) NSString * storeLocaleID;
@property (copy, nonatomic) NSArray * enabledMerchantIDs;

- (void)wasPushed;
- (void)_getStoreID;
- (void)_getMerchantIDs;
- (char)_canLaunch;
- (void)_launchApp;
- (void)_retryTimerExpired:(id)arg0;
- (NSDictionary *)iTMSMerchantMetadata;
- (NSString *)storeLocaleID;
- (NSArray *)enabledMerchantIDs;
- (void)setStoreLocaleID:(NSString *)arg0;
- (void)setEnabledMerchantIDs:(NSArray *)arg0;
- (NSDictionary *)_whatsNewConfiguration;
- (NSURL *)_whatsNewURL;
- (void)dealloc;
- (ATVNewFeaturesController *)init;
- (char)isAccessibilityElement;
- (void).cxx_destruct;
- (void)_cancel;
- (ATVNewFeaturesController *)initWithURLString:(NSString *)arg0;

@end
