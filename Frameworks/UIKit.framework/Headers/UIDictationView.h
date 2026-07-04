/* Runtime dump - UIDictationView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationView : UIView <_UISiriWaveyViewDelegate>
{
    UIKeyboardDicationBackground * _background;
    UIButton * _endpointButton;
    UIButton * _endpointButtonLandscape;
    UIButton * _waveTapEndpointButton;
    int _state;
    char _keyboardInTransition;
    char _automaticAppearanceWasEnabled;
    _UISiriWaveyView * _waveyView;
    UIDictationMeterView * _meterView;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (UIDictationView *)sharedInstance;
+ (UIDictationView *)activeInstance;
+ (struct CGSize)layoutSize;
+ (Class)dictationViewClass;
+ (struct CGSize)viewSize;

- (void)show;
- (UIDictationView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (struct CGPoint)contentOffset;
- (void)setState:(int)arg0;
- (void)keyboardDidShow:(id)arg0;
- (char)visible;
- (void)applicationWillResignActive;
- (void)highlightEndpointButton;
- (void)finishReturnToKeyboard;
- (void)prepareForReturnToKeyboard;
- (char)isShowing;
- (void)returnToKeyboard;
- (char)drawsOwnBackground;
- (float)audioLevelForWaveyView:(NSObject *)arg0;
- (UIButton *)endpointButton;
- (struct CGSize)currentScreenSize;
- (void)applicationEnteredBackground;
- (struct CGPoint)positionForShow;
- (struct CGPoint)backgroundOffset;
- (void)endpointButtonPressed;

@end
