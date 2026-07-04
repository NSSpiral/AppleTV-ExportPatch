/* Runtime dump - UICalloutView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICalloutView : UIControl
{
    UIImageView * _leftCap;
    UIImageView * _rightCap;
    UIImageView * _topAnchor;
    UIImageView * _bottomAnchor;
    UIImageView * _leftBackground;
    UIImageView * _rightBackground;
    UILabel * _title;
    UILabel * _subtitle;
    UILabel * _temporary;
    UIView * _leftView;
    UIView * _rightView;
    struct ? _anchor;
    struct CGRect _frame;
    id _delegate;
    struct ? _flags;
    NSMutableArray * _fadeInViews;
    NSMutableArray * _fadeOutViews;
    NSTimer * _layoutAnimationTimer;
    float _maximumWidth;
}

@property (readonly, nonatomic) float UICalloutViewCapHeight;
@property (readonly, nonatomic) float UICalloutViewCapPaddingTop;
@property (readonly, nonatomic) double UICalloutViewLayoutDuration;
@property (readonly, nonatomic) float UICalloutViewButtonPadding;
@property (readonly, nonatomic) float UICalloutViewHorizontalMargin;
@property (readonly, nonatomic) float UICalloutViewHorizontalPadding;
@property (readonly, nonatomic) float UICalloutViewVerticalMargin;
@property (readonly, nonatomic) float UICalloutViewMinimumWidth;
@property (nonatomic) float maximumWidth;
@property (nonatomic) int titleLineBreakMode;
@property (nonatomic) int subtitleLineBreakMode;
@property (nonatomic) int titleTextAlignment;
@property (nonatomic) int subtitleTextAlignment;
@property (retain, nonatomic) UIView * leftView;
@property (retain, nonatomic) UIView * rightView;
@property (nonatomic) char canAnchorFromBottom;

+ (float)defaultHeight;
+ (UIImage *)_backgroundImage;
+ (UIImage *)_bottomAnchorImage;
+ (UIImage *)_leftCapImage;
+ (UIImage *)_rightCapImage;
+ (UIImage *)_topAnchorImage;
+ (UICalloutView *)sharedCalloutView;

- (char)isExpanded;
- (UICalloutView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setTitle:(UILabel *)arg0;
- (NSObject *)delegate;
- (UILabel *)title;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(id /* block */)arg1 context:(NSObject *)arg2;
- (NSObject *)hitTest:(struct CGPoint)arg0 forEvent:(struct __GSEvent *)arg1;
- (struct CGPoint)anchorPoint;
- (void)_fadeViewsIn:(char)arg0;
- (void)setMaximumWidth:(float)arg0;
- (float)maximumWidth;
- (void)addTarget:(NSObject *)arg0 action:(SEL)arg1;
- (UILabel *)subtitle;
- (void)setOffset:(struct CGPoint)arg0;
- (struct CGPoint)offset;
- (void)_setLeftView:(NSObject *)arg0;
- (void)_layoutSubviews:(char)arg0;
- (void)_scheduleViewToFadeOut:(id)arg0;
- (void)_scheduleLayoutAnimation;
- (void)_scheduleViewToFadeIn:(id)arg0;
- (void)_setRightView:(NSObject *)arg0;
- (void)completeBounceAnimation;
- (void)_setLayoutAnimationTimer:(NSObject *)arg0;
- (void)_layoutAnimation;
- (void)setLeftView:(UIView *)arg0 animated:(char)arg1;
- (void)setRightView:(UIView *)arg0 animated:(char)arg1;
- (void)setSubtitle:(UILabel *)arg0 animated:(char)arg1;
- (void)getActualAnchorPoint:(struct CGPoint *)arg0 frame:(struct CGRect *)arg1 position:(struct CGSize)arg2 forDesiredAnchorPoint:(NSObject *)arg3 boundaryRect:(int *)arg4;
- (void)_setOriginForScale:(float)arg0;
- (void)_markDidMoveCalled;
- (float)UICalloutViewCapHeight;
- (float)UICalloutViewCapPaddingTop;
- (double)UICalloutViewLayoutDuration;
- (float)UICalloutViewButtonPadding;
- (float)UICalloutViewHorizontalMargin;
- (float)UICalloutViewHorizontalPadding;
- (float)UICalloutViewVerticalMargin;
- (float)UICalloutViewMinimumWidth;
- (void)setLeftView:(UIView *)arg0;
- (void)setRightView:(UIView *)arg0;
- (void)setSubtitle:(UILabel *)arg0;
- (void)setTemporaryTitle:(NSString *)arg0;
- (NSString *)temporaryTitle;
- (int)titleLineBreakMode;
- (void)setTitleLineBreakMode:(int)arg0;
- (int)subtitleLineBreakMode;
- (void)setSubtitleLineBreakMode:(int)arg0;
- (int)titleTextAlignment;
- (void)setTitleTextAlignment:(int)arg0;
- (int)subtitleTextAlignment;
- (void)setSubtitleTextAlignment:(int)arg0;
- (void)setCanAnchorFromBottom:(char)arg0;
- (char)canAnchorFromBottom;
- (void)setAnchorPoint:(struct CGPoint)arg0 boundaryRect:(struct CGRect)arg1 animate:(struct CGSize)arg2;
- (void)fadeOutWithDuration:(double)arg0;
- (void)removeTarget:(NSObject *)arg0;
- (UIView *)leftView;
- (UIView *)rightView;

@end
