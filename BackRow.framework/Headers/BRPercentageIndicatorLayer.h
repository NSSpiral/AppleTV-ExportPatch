/* Runtime dump - BRPercentageIndicatorLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRHorizontalSegmentedWidget.h>

@class BRImageControl;
@interface BRPercentageIndicatorLayer : BRHorizontalSegmentedWidget
{
    BRImageControl * _centerOnLayer;
    ATVImage * _leftOnImage;
    ATVImage * _leftOffImage;
    ATVImage * _rightOnImage;
    ATVImage * _rightOffImage;
    ATVImage * _centerOnImage;
    ATVImage * _centerOffImage;
    float _percentage;
}

- (void)layoutSubcontrols;
- (void)setPercentage:(float)arg0;
- (BRPercentageIndicatorLayer *)initWithLeftOnPath:(NSString *)arg0 leftOffPath:(NSString *)arg1 centerOnPath:(NSString *)arg2 centerOffPath:(NSString *)arg3 rightOnPath:(NSString *)arg4 rightOffPath:(NSString *)arg5;
- (void)_updateProgressToPercentage:(float)arg0;
- (void)dealloc;
- (NSString *)accessibilityLabel;
- (float)percentage;

@end
