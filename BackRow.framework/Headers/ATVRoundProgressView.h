/* Runtime dump - ATVRoundProgressView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl;
@interface ATVRoundProgressView : BRControl
{
    id whiteColorComponents;
    float _animatedStartValue;
    float _animatedValue;
    char _animating;
    char _progressInitialized;
    double _animationEndTime;
    double _animationStartTime;
    CADisplayLink * _displayLink;
    unsigned int _style;
    float _progress;
    BRControl * _spinnerLayer;
    BRControl * _spinnerFillLayer;
    ATVImage * _bgImage;
    ATVImage * _fillImage;
    ATVImage * _spinnerImage;
    ATVImage * _spinnerOverlayImage;
    NSTimer * _spinnerTimer;
}

@property (nonatomic) unsigned int style;
@property (nonatomic) float progress;
@property (retain, nonatomic) BRControl * spinnerLayer;
@property (retain, nonatomic) BRControl * spinnerFillLayer;
@property (retain, nonatomic) ATVImage * bgImage;
@property (retain, nonatomic) ATVImage * fillImage;
@property (retain, nonatomic) ATVImage * spinnerImage;
@property (retain, nonatomic) ATVImage * spinnerOverlayImage;
@property (retain, nonatomic) NSTimer * spinnerTimer;

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (NSTimer *)spinnerTimer;
- (void)setSpinnerTimer:(NSTimer *)arg0;
- (void)_spinnerTimerHandler:(id /* block */)arg0;
- (void)_setSpinnerAnimating:(char)arg0;
- (ATVImage *)bgImage;
- (BRControl *)spinnerLayer;
- (BRControl *)spinnerFillLayer;
- (void)setSpinnerLayer:(BRControl *)arg0;
- (void)setSpinnerFillLayer:(BRControl *)arg0;
- (void)setBgImage:(ATVImage *)arg0;
- (ATVImage *)spinnerImage;
- (void)setSpinnerImage:(ATVImage *)arg0;
- (ATVImage *)spinnerOverlayImage;
- (void)setSpinnerOverlayImage:(ATVImage *)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (ATVRoundProgressView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (unsigned int)style;
- (void)setProgress:(float)arg0;
- (void)setStyle:(unsigned int)arg0;
- (ATVRoundProgressView *)initWithStyle:(unsigned int)arg0;
- (float)progress;
- (void)_animateValueOnDisplayLink:(id)arg0;
- (void)setFillImage:(ATVImage *)arg0;
- (ATVImage *)fillImage;
- (void).cxx_destruct;

@end
