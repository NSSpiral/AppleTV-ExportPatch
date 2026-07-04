/* Runtime dump - ATVFeedShelfListController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedController.h>

@class ATVFeedElement, ATVFeedInitialSelectionElement, ATVFeedRootElement, BRListControl, BRMenuItem;
@interface ATVFeedShelfListController : ATVFeedController

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (ATVFeedInitialSelectionElement *)_initialSelection;
- (ATVFeedShelfListController *)initWithFeedElement:(ATVFeedElement *)arg0;
- (char)_canHandleUpdateWithFeedElement:(ATVFeedRootElement *)arg0 loadType:(int)arg1;
- (NSString *)_elementAtIndexPath:(NSIndexPath *)arg0;
- (void)_handleUpdateWithFeedElement:(ATVFeedRootElement *)arg0 loadType:(int)arg1;
- (ATVFeedShelfListController *)initWithDictionary:(NSDictionary *)arg0;

@end
