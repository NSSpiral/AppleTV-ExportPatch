/* Runtime dump - ATVMusicStoreTVEpisodeItemController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreItemDetailController.h>

@class BREvent;
@interface ATVMusicStoreTVEpisodeItemController : ATVMusicStoreItemDetailController
{
    char _showingExpandedSummary;
}

@property (nonatomic) char showingExpandedSummary;

- (char)brEventAction:(BREvent *)arg0;
- (NSArray *)accessibilityScreenContent;
- (void)_setupDetailedControl;
- (NSURL *)_fallbackRefreshURL;
- (char)isShowingExpandedSummary;
- (void)setShowingExpandedSummary:(char)arg0;
- (ATVMusicStoreTVEpisodeItemController *)initWithItemDictionary:(NSDictionary *)arg0;

@end
