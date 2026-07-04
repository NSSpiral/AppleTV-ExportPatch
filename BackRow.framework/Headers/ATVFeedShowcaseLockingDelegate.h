/* Runtime dump - ATVFeedShowcaseLockingDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVCarouselView;
@interface ATVFeedShowcaseLockingDelegate : NSObject
{
    ATVCarouselView * _carouselView;
    int _lockingIndex;
    int _selectedIndex;
}

@property (readonly, weak, nonatomic) ATVCarouselView * carouselView;
@property (readonly, nonatomic) int lockingIndex;
@property (nonatomic) int selectedIndex;

- (ATVCarouselView *)carouselView;
- (int)lockingIndex;
- (ATVFeedShowcaseLockingDelegate *)initWithShocaseCarouselView:(NSObject *)arg0 lockingAtIndex:(int)arg1;
- (int)selectedIndex;
- (void)setSelectedIndex:(int)arg0;
- (void).cxx_destruct;

@end
