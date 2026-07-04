/* Runtime dump - ATVFlagstaffPreviewImageCyclerController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedCyclerController.h>

@class BRControl, BRCyclerControl;
@interface ATVFlagstaffPreviewImageCyclerController : ATVFeedCyclerController
{
    NSArray * _controls;
    BRCyclerControl * _cycler;
}

- (BRControl *)cycler:(BRCyclerControl *)arg0 itemAtIndex:(int)arg1;
- (long)cycler:(BRCyclerControl *)arg0 willCycleToItemAtIndex:(long)arg1;
- (void)_firstItemReady:(id)arg0;
- (void)dealloc;
- (void)setItems:(NSArray *)arg0;

@end
