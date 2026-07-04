/* Runtime dump - BRHorizontalSegmentedWidget
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRTextControl;
@interface BRHorizontalSegmentedWidget : BRControl
{
    BRTextControl * _textControl;
    ATVImage * _leftImage;
    ATVImage * _centerImage;
    ATVImage * _rightImage;
    BRImageControl * _leftEndLayer;
    NSMutableArray * _centerLayers;
    BRImageControl * _rightEndLayer;
    float _animationDuration;
    char _animationEnabled;
    int _numSegments;
}

- (void)setText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)layoutSubcontrols;
- (ATVImage *)rightImage;
- (void)setLeftImage:(ATVImage *)arg0 centerImage:(ATVImage *)arg1 rightImage:(ATVImage *)arg2;
- (void)setLeftFile:(NSString *)arg0 centerFile:(NSString *)arg1 rightFile:(NSString *)arg2;
- (ATVImage *)centerImage;
- (void)setNumSegments:(int)arg0;
- (void)_reloadSegments;
- (id)additionalActions;
- (void)setSublayerAnimationEnabled:(char)arg0;
- (char)sublayerAnimationEnabled;
- (float)verticalTextDisplacementFactor;
- (BRImageControl *)leftEndLayer;
- (NSMutableArray *)centerLayers;
- (CALayer *)centerLayer;
- (BRImageControl *)rightEndLayer;
- (ATVImage *)leftImage;
- (void)dealloc;
- (BRHorizontalSegmentedWidget *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setAnimationDuration:(float)arg0;
- (NSString *)accessibilityLabel;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (float)animationDuration;
- (NSString *)attributedString;

@end
