/* Runtime dump - PLHighFidelityVideoOverlayButton
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLHighFidelityVideoOverlayButton : UIView <PLVideoOverlayButton>
{
    int _style;
    UIButton * _button;
    _UIBackdropView * _backdropView;
    id _target;
    SEL _action;
}

- (void)dealloc;
- (int)style;
- (PLHighFidelityVideoOverlayButton *)initWithStyle:(int)arg0;
- (void)setTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)_playButtonTapped:(id)arg0;
- (void)_playButtonActivate:(id)arg0;
- (void)_playButtonDeactivate:(id)arg0;

@end
