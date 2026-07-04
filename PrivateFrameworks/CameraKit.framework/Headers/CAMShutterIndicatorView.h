/* Runtime dump - CAMShutterIndicatorView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMShutterIndicatorView : UIView
{
    NSAttributedString * __indicatorText;
}

@property (readonly, nonatomic) NSAttributedString * _indicatorText;

- (CAMShutterIndicatorView *)initWithFrame:(struct CGRect)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (CAMShutterIndicatorView *)initWithCoder:(NSCoder *)arg0;
- (struct CGSize)intrinsicContentSize;
- (void).cxx_destruct;
- (void)_commonCAMShutterIndicatorViewInitialization;
- (NSAttributedString *)_indicatorText;

@end
