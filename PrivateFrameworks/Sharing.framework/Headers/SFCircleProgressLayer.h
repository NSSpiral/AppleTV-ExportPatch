/* Runtime dump - SFCircleProgressLayer
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCircleProgressLayer : CALayer
{
    float _progressLineWidth;
    float _oneFullRotation;
    char _showProgressTray;
    int _progressStartPoint;
    UIColor * _progressColor;
    UIColor * _progressBackgroundColor;
}

@property (nonatomic) int progressStartPoint;
@property (retain, nonatomic) UIColor * progressColor;
@property (retain, nonatomic) UIColor * progressBackgroundColor;
@property (nonatomic) float progressLineWidth;
@property (nonatomic) char showProgressTray;
@property (nonatomic) float progress;

+ (char)needsDisplayForKey:(NSString *)arg0;

- (SFCircleProgressLayer *)init;
- (SFCircleProgressLayer *)initWithLayer:(CALayer *)arg0;
- (void)drawInContext:(struct CGContext *)arg0;
- (void).cxx_destruct;
- (void)setProgressStartPoint:(int)arg0;
- (void)setProgressColor:(UIColor *)arg0;
- (void)setProgressBackgroundColor:(UIColor *)arg0;
- (void)setProgressLineWidth:(float)arg0;
- (void)setShowProgressTray:(char)arg0;
- (int)progressStartPoint;
- (UIColor *)progressColor;
- (UIColor *)progressBackgroundColor;
- (float)progressLineWidth;
- (char)showProgressTray;

@end
