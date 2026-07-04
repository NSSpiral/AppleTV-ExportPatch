/* Runtime dump - UIRemoveControl
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoveControl : UIView
{
    UIView * _target;
    id _delegate;
    UIView * _removeConfirmationButton;
    UIRemoveControlMinusButton * _minusButton;
    NSString * _label;
    struct ? _removeControlFlags;
}

+ (void)hideAllRemoveConfirmationsInView:(NSObject *)arg0;
+ (float)removeButtonWidth;
+ (char)removeConfirmationsVisibleInView:(NSObject *)arg0;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (void)setAlpha:(float)arg0;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (NSObject *)delegate;
- (void)setTarget:(UIView *)arg0;
- (NSObject *)_interceptEvent:(NSObject *)arg0;
- (NSObject *)_interceptMouseEvent:(struct __GSEvent *)arg0;
- (void)_setInterceptMouseEvent:(char)arg0;
- (NSDictionary *)_scriptingInfo;
- (UIRemoveControl *)initWithTarget:(UIView *)arg0;
- (void)setHighlighted:(char)arg0;
- (void)isHighlighted;
- (void)setSelected:(char)arg0;
- (void)animator:(UIDynamicAnimator *)arg0 stopAnimation:(NSObject *)arg1;
- (char)_isInsertControl;
- (void)_showDeleteConfirmation:(id)arg0;
- (float)_verticalOffsetFromTarget;
- (void)_doInsert:(id)arg0;
- (void)_doRemove:(id)arg0;
- (void)addConfirmationButtonSubview:(id)arg0 withWidth:(float)arg1 target:(UIView *)arg2;
- (char)isRemoveConfirmationVisible;
- (void)_hideRemoveConfirmation;
- (struct CGRect)_removeConfirmationEndingFrame;
- (char)removedFromTargetWhenHidden;
- (void)minusButtonDidHide:(id)arg0;
- (struct CGRect)defaultRemoveButtonStartingFrame;
- (struct CGRect)defaultRemoveButtonEndingFrame;
- (UIView *)removeConfirmationButton;
- (struct CGRect)removeButtonStartingFrame;
- (struct CGRect)removeButtonEndingFrame;
- (void)_minusButtonFadeAnimationStopped;
- (struct CGRect)targetContentBounds;
- (struct CGRect)_removeConfirmationStartingFrame;
- (float)removeButtonAnimationDuration;
- (void)_confirmationAnimationDidEnd;
- (void)setRemoveConfirmationVisible:(char)arg0 animated:(char)arg1;
- (void)_setRemoveConfirmationShowing:(char)arg0 animated:(char)arg1;
- (void)_hideRemoveAnimationDone;
- (void)setRemoveConfirmationLabel:(NSString *)arg0;
- (void)setRemoveConfirmationVisible:(char)arg0;
- (void)hideControlsUsingRemoveAnimation;
- (void)_shouldRemoveTarget;
- (void)setRemovedFromTargetWhenHidden:(char)arg0;
- (void)setAlwaysHideRemoveButton:(char)arg0;
- (void)showRemoveButton:(char)arg0 animated:(char)arg1;
- (char)isRemoveButtonVisible;
- (NSObject *)removeConfirmationView;
- (void)setLabel:(NSString *)arg0;
- (void)_setInsertControl:(char)arg0;
- (void)_setTableViewCellEditingStyle:(int)arg0;

@end
