/* Runtime dump - BRHiddenSelectionMenuItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuItem.h>

@class BREvent;
@interface BRHiddenSelectionMenuItem : BRMenuItem
{
    NSArray * _events;
    int _eventCount;
}

- (char)brEventAction:(BREvent *)arg0;
- (void)setHiddenSelectionHandler:(id /* block */)arg0;
- (id /* block */)hiddenSelectionHandler;
- (NSArray *)events;
- (void)dealloc;
- (void)setEvents:(NSArray *)arg0;

@end
