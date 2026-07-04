/* Runtime dump - ATVOptionListController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedController.h>

@class ATVFeedElement, BREvent;
@interface ATVOptionListController : ATVFeedController
{
    char _eventHandled;
    char _shouldDismissAfterEvent;
}

- (char)brEventAction:(BREvent *)arg0;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (ATVOptionListController *)initWithFeedElement:(ATVFeedElement *)arg0;
- (ATVOptionListController *)initWithDictionary:(NSDictionary *)arg0;

@end
