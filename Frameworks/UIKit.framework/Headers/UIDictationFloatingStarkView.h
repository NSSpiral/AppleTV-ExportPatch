/* Runtime dump - UIDictationFloatingStarkView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationFloatingStarkView : UIDictationView <UIGestureRecognizerDelegate>
{
    UIDimmingView * _dimmingView;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)show;
- (UIDictationFloatingStarkView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setState:(int)arg0;
- (void)dimmingViewWasTapped:(id)arg0;
- (void)finishReturnToKeyboard;
- (void)prepareForReturnToKeyboard;
- (void)returnToKeyboard;
- (struct CGPoint)positionForShow;
- (void)endpointButtonPressed;
- (void)setInputViewsHiddenForDictation:(char)arg0;

@end
