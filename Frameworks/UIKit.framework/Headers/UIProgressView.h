/* Runtime dump - UIProgressView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIProgressView : UIView <NSCoding>
{
    int _progressViewStyle;
    float _progress;
    int _barStyle;
    UIColor * _progressTintColor;
    UIColor * _trackTintColor;
    UIImageView * _trackView;
    UIImageView * _progressView;
    char _isAnimating;
    NSArray * _trackColors;
    NSArray * _progressColors;
    UIImage * _trackImage;
    UIImage * _progressImage;
}

@property (nonatomic) int progressViewStyle;
@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor * progressTintColor;
@property (retain, nonatomic) UIColor * trackTintColor;
@property (retain, nonatomic) UIImage * progressImage;
@property (retain, nonatomic) UIImage * trackImage;

+ (struct CGSize)defaultSize;
+ (UIProgressView *)_tintedImageForHeight:(float)arg0 andColors:(id)arg1 roundingRectCorners:(unsigned int)arg2;
+ (UIProgressView *)_tintedImageForHeight:(float)arg0 andColors:(id)arg1;
+ (int)_indexForStyle:(int)arg0 barStyle:(int)arg1;
+ (struct ?)_standardImagesForStyle:(int)arg0 barStyle:(int)arg1;

- (UIProgressView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (UIProgressView *)initWithCoder:(NSCoder *)arg0;
- (void)_populateArchivedSubviews:(NSMutableArray *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg0;
- (char)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)tintColorDidChange;
- (void)setProgress:(float)arg0;
- (void)setBarStyle:(int)arg0;
- (int)barStyle;
- (void)_updateImages;
- (void)_setProgress:(float)arg0;
- (void)setProgressViewStyle:(int)arg0;
- (char)_shouldTintTrack;
- (char)_shouldTintProgress;
- (UIColor *)trackTintColor;
- (NSObject *)_defaultTrackColorForCurrentStyle;
- (unsigned int)_roundedCornersForTrackForCurrentStyle;
- (UIColor *)progressTintColor;
- (unsigned int)_roundedCornersForProgressForCurrentStyle;
- (UIImage *)_appropriateProgressImage;
- (UIImage *)_appropriateTrackImage;
- (void)_setProgressAnimated:(float)arg0 duration:(double)arg1 delay:(double)arg2 options:(unsigned int)arg3;
- (void)setProgressTintColor:(UIColor *)arg0;
- (UIProgressView *)initWithProgressViewStyle:(int)arg0;
- (void)setProgress:(float)arg0 animated:(char)arg1;
- (UIColor *)_progressColor;
- (void)_setProgressColor:(UIColor *)arg0;
- (void)setProgressImage:(UIImage *)arg0;
- (void)setTrackTintColor:(UIColor *)arg0;
- (void)setTrackImage:(UIImage *)arg0;
- (int)progressViewStyle;
- (float)progress;
- (UIImage *)trackImage;
- (UIImage *)progressImage;
- (char)isElementAccessibilityExposedToInterfaceBuilder;

@end
