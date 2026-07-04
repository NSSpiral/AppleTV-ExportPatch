/* Runtime dump - UIDimmingView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDimmingView : UIView <UIGestureRecognizerDelegate>
{
    id _delegate;
    UIBarButtonItem * _highlightedBarButtonItem;
    UIImageView * _highlightedImageView;
    UIImageView * _backgroundGlow;
    NSArray * _passthroughViews;
    char _ignoresTouches;
    char _displayed;
    char _inPassthroughHitTest;
    UIColor * _dimmingColor;
    UITapGestureRecognizer * _singleFingerTapRecognizer;
    char _suppressesBackdrops;
}

@property (nonatomic) id delegate;
@property (retain, nonatomic) UIBarButtonItem * highlightedBarButtonItem;
@property (retain, nonatomic) NSArray * passthroughViews;
@property (nonatomic) char ignoresTouches;
@property (nonatomic) char displayed;
@property (retain, nonatomic) UIColor * dimmingColor;
@property (nonatomic) char suppressesBackdrops;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (UIDimmingView *)defaultDimmingColor;

- (UIDimmingView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (NSObject *)delegate;
- (char)gestureRecognizer:(ADTapGestureRecognizer *)arg0 shouldReceiveTouch:(UITouch *)arg1;
- (void)setDimmingColor:(UIColor *)arg0;
- (UIColor *)dimmingColor;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (NSObject *)hitTest:(struct CGPoint)arg0 forEvent:(struct __GSEvent *)arg1;
- (char)displayed;
- (void)setIgnoresTouches:(char)arg0;
- (void)setSuppressesBackdrops:(char)arg0;
- (void)display:(char)arg0 withAnimationDuration:(float)arg1 afterDelay:(float)arg2;
- (void)mouseUp:(struct __GSEvent *)arg0;
- (NSArray *)passthroughViews;
- (void)setPassthroughViews:(NSArray *)arg0;
- (void)display:(char)arg0;
- (void)handleSingleTap:(id)arg0;
- (char)suppressesBackdrops;
- (id)_backdropViewsToAnimate;
- (void)dimmingRemovalAnimationDidStop;
- (void)setHighlightedBarButtonItem:(UIBarButtonItem *)arg0;
- (UIBarButtonItem *)highlightedBarButtonItem;
- (void)_simulateTap;
- (char)ignoresTouches;
- (void)setDisplayed:(char)arg0;

@end
