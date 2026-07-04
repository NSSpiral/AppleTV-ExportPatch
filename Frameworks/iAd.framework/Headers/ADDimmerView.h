/* Runtime dump - ADDimmerView
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADDimmerView : UIView
{
    <ADDimmerViewDelegate> * _delegate;
    char _dimmed;
    ADTapGestureRecognizer * _gestureRecognizer;
}

@property (weak, nonatomic) <ADDimmerViewDelegate> * delegate;
@property (retain, nonatomic) ADTapGestureRecognizer * gestureRecognizer;
@property (nonatomic) char dimmed;
@property (readonly, nonatomic) char enabled;

- (ADDimmerView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<ADDimmerViewDelegate> *)arg0;
- (<ADDimmerViewDelegate> *)delegate;
- (void)setGestureRecognizer:(ADTapGestureRecognizer *)arg0;
- (ADTapGestureRecognizer *)gestureRecognizer;
- (char)enabled;
- (void)_tapRecognized:(id)arg0;
- (void)setDimmed:(char)arg0;
- (char)dimmed;

@end
