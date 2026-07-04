/* Runtime dump - BRProgressBarWidget
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPercentageIndicatorLayer.h>

@class BRImageControl;
@interface BRProgressBarWidget : BRPercentageIndicatorLayer
{
    BRImageControl * _centerEndCapLayer;
}

- (void)layoutSubcontrols;
- (void)dealloc;
- (BRProgressBarWidget *)init;

@end
