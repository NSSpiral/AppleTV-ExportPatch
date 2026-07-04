/* Runtime dump - UIBookViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBookViewController : UIViewController
{
    <UIBookViewControllerDelegate> * _delegate;
    UIView * _contentView;
    UIViewController * _evenPage;
    UIViewController * _oddPage;
    UIViewController * _newEvenPage;
    UIViewController * _newOddPage;
    int _turnCount;
    int _animatedPageTurns;
    float _turnMargin;
    struct UIEdgeInsets _contentInset;
    double _turnDuration;
}

@property (nonatomic) <UIBookViewControllerDelegate> * delegate;
@property (retain, nonatomic) UIViewController * oddPage;
@property (retain, nonatomic) UIViewController * evenPage;
@property (nonatomic) float turnMargin;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic) double turnDuration;

- (void)dealloc;
- (UIBookViewController *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<UIBookViewControllerDelegate> *)arg0;
- (<UIBookViewControllerDelegate> *)delegate;
- (BRControl *)view;
- (struct UIEdgeInsets)contentInset;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg0;
- (UIBookViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)_setupContentViewIfNecessary;
- (void)_setNewPage:(RUIPage *)arg0 isLeft:(char)arg1;
- (void)_positionPage:(id)arg0 isLeft:(char)arg1;
- (void)_turnSinglePageAnimated;
- (void)_turnAllPagesNonAnimated;
- (void)setEvenPage:(UIViewController *)arg0;
- (void)setOddPage:(UIViewController *)arg0;
- (void)turnPages:(int)arg0 animated:(char)arg1;
- (UIViewController *)oddPage;
- (UIViewController *)evenPage;
- (float)turnMargin;
- (void)setTurnMargin:(float)arg0;
- (double)turnDuration;
- (void)setTurnDuration:(double)arg0;
- (void)_setupCurlFilters;
- (void)_startCurlAnimation;

@end
