/* Runtime dump - UIWebPDFLabelView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPDFLabelView : UIView
{
    UILabel * _label;
    _UIBackdropView * _backdropView;
    NSTimer * _timer;
    unsigned int currentPageIndex;
}

@property (readonly, nonatomic) char timerInstalled;
@property (nonatomic) unsigned int currentPageIndex;

- (UIWebPDFLabelView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setText:(NSString *)arg0;
- (void)sizeToFit;
- (void)fadeOut;
- (void)clearTimer;
- (char)isTimerInstalled;
- (unsigned int)currentPageIndex;
- (void)setCurrentPageIndex:(unsigned int)arg0;
- (void)showNowInSuperView:(NSObject *)arg0 atOrigin:(struct CGPoint)arg1 withText:(NSString *)arg2 animated:(char)arg3;
- (double)_fadeOutDuration;
- (void)_makeRoundedCorners;
- (double)_fadeOutDelay;
- (void)_fadeOutAnimationDidStop:(id)arg0 finished:(id /* block */)arg1;

@end
