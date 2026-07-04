/* Runtime dump - ATVRentalPosterControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPosterControl.h>

@class BREvent;
@interface ATVRentalPosterControl : BRPosterControl
{
    NSTimer * _expiryTextTimer;
}

+ (NSObject *)posterForMediaItem:(NSObject *)arg0;

- (char)brEventAction:(BREvent *)arg0;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (void)_updateTitleStrings;
- (void)_itemCacheStateChanged:(NSNotification *)arg0;
- (void)_rentalItemPropertySet:(NSSet *)arg0;
- (void)_startExpiryTextTimer;
- (void)_stopExpiryTextTimer;
- (NSString *)randomNavigationLabel;
- (void)_expiryTextTimerFired:(id)arg0;
- (ATVRentalPosterControl *)initWithMediaItem:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)accessibilityLabel;

@end
