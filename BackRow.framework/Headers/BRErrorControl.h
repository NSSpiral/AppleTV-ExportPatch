/* Runtime dump - BRErrorControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRAlertControl.h>
@interface BRErrorControl : BRAlertControl
{
    NSError * _error;
}

- (void)controlWasDeactivated;
- (void)dealloc;
- (BRErrorControl *)initWithError:(NSError *)arg0;

@end
