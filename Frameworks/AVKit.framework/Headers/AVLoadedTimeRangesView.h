/* Runtime dump - AVLoadedTimeRangesView
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVLoadedTimeRangesView : UIView
{
    NSArray * _loadedTimeRanges;
    struct CGRect _clipRect;
    UIColor * _fillColor;
}

@property (retain, nonatomic) UIColor * fillColor;
@property (retain, nonatomic) NSArray * loadedTimeRanges;
@property (nonatomic) struct CGRect clipRect;

- (struct CGRect)clipRect;
- (void)setClipRect:(struct CGRect)arg0;
- (AVLoadedTimeRangesView *)initWithFrame:(struct CGRect)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (void)setFillColor:(UIColor *)arg0;
- (UIColor *)fillColor;
- (void).cxx_destruct;
- (void)setLoadedTimeRanges:(NSArray *)arg0;
- (NSArray *)loadedTimeRanges;

@end
