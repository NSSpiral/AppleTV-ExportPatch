/* Runtime dump - BRNetworkAlertController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRAlertController.h>
@interface BRNetworkAlertController : BRAlertController
{
    NSTimer * _recheckTimer;
    id _networkRecoveryBlock;
}

+ (NSObject *)networkAvailabilityAlertController;
+ (NSObject *)internetAvailabilityAlertController;
+ (NSString *)_availabilityAlertControllerWithErrorMessage:(NSString *)arg0;

- (void)wasPushed;
- (void)registerNetworkRecoveryBlock:(id /* block */)arg0;
- (BRNetworkAlertController *)initWithType:(int)arg0 titled:(id)arg1 primaryText:(NSString *)arg2 secondaryText:(NSString *)arg3;
- (void)dealloc;
- (void)_networkStatusChanged:(NSNotification *)arg0;

@end
