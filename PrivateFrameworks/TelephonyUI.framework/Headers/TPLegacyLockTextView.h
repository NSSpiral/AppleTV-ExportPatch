/* Runtime dump - TPLegacyLockTextView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyLockTextView : UIView
{
    NSString * _label;
    struct CGImage * _textCache;
    char * _textData;
    NSTimer * _maskTimer;
    double _maskStartTime;
    UIFont * _labelFont;
    float _deltaFromDefaultTrackWidth;
    UIImage * _maskImage;
    float _fps;
}

@property (readonly) float deltaFromDefaultTrackWidth;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)movedFromWindow:(NSObject *)arg0;
- (NSString *)label;
- (void)stopAnimation;
- (char)isAnimating;
- (void)startAnimation;
- (void)_cacheLabel:(NSString *)arg0 size:(struct CGSize)arg1;
- (TPLegacyLockTextView *)initWithLabel:(NSString *)arg0 fontSize:(float)arg1 trackWidthDelta:(float)arg2;
- (void)setFPS:(float)arg0;
- (float)fps;
- (float)deltaFromDefaultTrackWidth;

@end
