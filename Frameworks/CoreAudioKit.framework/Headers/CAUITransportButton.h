/* Runtime dump - CAUITransportButton
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CAUITransportButton : UIButton
{
    int drawingStyle;
    struct CGColor * fillColor;
    struct CGRect imageRect;
}

@property int drawingStyle;
@property struct CGColor * fillColor;

+ (Class)layerClass;

- (void)setDrawingStyle:(int)arg0;
- (int)drawingStyle;
- (struct CGPath *)newPathRefForStyle:(int)arg0;
- (CAUITransportButton *)initWithFrame:(struct CGRect)arg0;
- (CAUITransportButton *)initWithCoder:(NSCoder *)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setFillColor:(struct CGColor *)arg0;
- (struct CGColor *)fillColor;
- (void)flash;

@end
