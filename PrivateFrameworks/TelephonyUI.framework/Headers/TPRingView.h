/* Runtime dump - TPRingView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPRingView : UIView
{
    CALayer * _luminanceRingLayer;
    CALayer * _dodgeRingLayer;
    CALayer * _highlightDodgeLayer;
    CALayer * _highlightLuminanceLayer;
    CALayer * _selectionLayer;
}

@property (retain) CALayer * luminanceRingLayer;
@property (retain) CALayer * dodgeRingLayer;
@property (retain) CALayer * highlightDodgeLayer;
@property (retain) CALayer * highlightLuminanceLayer;
@property (retain) CALayer * selectionLayer;

+ (struct CGSize)ringSize;
+ (float)ringStroke;
+ (TPRingView *)colorForLuminance;
+ (NSObject *)createRingImageWithSize:(struct CGSize)arg0 strokeWidth:(float)arg1 color:(UIColor *)arg2;
+ (TPRingView *)colorForDodge;
+ (float)ringCornerRadius;
+ (TPRingView *)ringImageForLuminance;
+ (TPRingView *)ringImageForDodge;

- (TPRingView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setEnabled:(char)arg0;
- (struct CGSize)intrinsicContentSize;
- (void)setHighlighted:(char)arg0;
- (void)setSelected:(char)arg0;
- (CALayer *)luminanceRingLayer;
- (void)setLuminanceRingLayer:(CALayer *)arg0;
- (CALayer *)dodgeRingLayer;
- (void)setDodgeRingLayer:(CALayer *)arg0;
- (CALayer *)highlightDodgeLayer;
- (void)setHighlightDodgeLayer:(CALayer *)arg0;
- (CALayer *)highlightLuminanceLayer;
- (void)setHighlightLuminanceLayer:(CALayer *)arg0;
- (CALayer *)selectionLayer;
- (void)setSelectionLayer:(CALayer *)arg0;

@end
