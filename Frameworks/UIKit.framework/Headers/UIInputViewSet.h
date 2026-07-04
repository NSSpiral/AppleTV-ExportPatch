/* Runtime dump - UIInputViewSet
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSet : NSObject
{
    UIView * _inputView;
    UIView * _inputAccessoryView;
    char _isSplit;
    float _splitHeightDelta;
    UIResponder * _restorableResponder;
    char _restoreUsingBecomeFirstResponder;
    UIInputViewController * _inputViewController;
    UIInputViewController * _accessoryViewController;
}

@property (readonly, nonatomic) UIKeyboard * keyboard;
@property (retain, nonatomic) UIView * inputView;
@property (retain, nonatomic) UIView * inputAccessoryView;
@property (retain, nonatomic) UIInputViewController * inputViewController;
@property (retain, nonatomic) UIInputViewController * accessoryViewController;
@property (readonly, nonatomic) struct CGRect inputAccessoryViewBounds;
@property (readonly, nonatomic) struct CGRect inputViewBounds;
@property (readonly, nonatomic) char empty;
@property (readonly, nonatomic) char supportsSplit;
@property (readonly, nonatomic) char isSplit;
@property (readonly, nonatomic) char inputViewKeyboardCanSplit;
@property (nonatomic) UIResponder * restorableResponder;
@property (readonly, nonatomic) char isInputViewPlaceholder;
@property (readonly, nonatomic) char isInputAccessoryViewPlaceholder;
@property (readonly, nonatomic) char _inputViewIsSplit;
@property (nonatomic) float splitHeightDelta;
@property (readonly, nonatomic) UIView * splitExemptSubview;
@property (nonatomic) char restoreUsingBecomeFirstResponder;
@property (readonly, nonatomic) UIView * layeringView;

+ (NSSet *)emptyInputSet;
+ (NSObject *)inputSetWithKeyboardAndAccessoryView:(NSObject *)arg0;
+ (NSObject *)inputSetWithInputView:(UIView *)arg0 accessoryView:(NSObject *)arg1;
+ (NSObject *)inputSetWithPlaceholderAndAccessoryView:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (char)isSplit;
- (char)isEmpty;
- (char)containsView:(NSObject *)arg0;
- (UIInputViewController *)accessoryViewController;
- (UIView *)inputView;
- (UIView *)inputAccessoryView;
- (UIInputViewController *)inputViewController;
- (void)setInputView:(UIView *)arg0;
- (void)setInputAccessoryView:(UIView *)arg0;
- (void)_setRenderConfig:(NSObject *)arg0;
- (struct CGRect)inputViewBounds;
- (struct CGRect)inputAccessoryViewBounds;
- (char)supportsSplit;
- (void)refreshPresentation;
- (UIKeyboard *)keyboard;
- (char)visible;
- (NSObject *)_themableInputAccessoryView;
- (int)keyboardOrientation:(id)arg0;
- (char)inputViewKeyboardCanSplit;
- (char)_inputViewIsSplit;
- (char)_accessorySuppressesShadow;
- (UIView *)layeringView;
- (struct CGRect)_leftInputViewSetFrame;
- (struct CGRect)_rightInputViewSetFrame;
- (void)setSplitHeightDelta:(float)arg0;
- (char)setAccessoryViewVisible:(char)arg0 delay:(float)arg1;
- (void)_beginSplitTransitionIfNeeded;
- (void)_setSplitProgress:(float)arg0;
- (void)_endSplitTransitionIfNeeded;
- (float)splitHeightDelta;
- (char)isStrictSupersetOfViewSet:(NSSet *)arg0;
- (char)isInputViewPlaceholder;
- (char)containsResponder:(NSObject *)arg0;
- (NSObject *)_splittableInputAccessoryView;
- (char)canAnimateToInputViewSet:(NSSet *)arg0;
- (void)setInputViewController:(UIInputViewController *)arg0;
- (void)setAccessoryViewController:(UIInputViewController *)arg0;
- (char)usesKeyClicks;
- (void)setRestorableResponder:(UIResponder *)arg0;
- (void)setRestoreUsingBecomeFirstResponder:(char)arg0;
- (UIResponder *)restorableResponder;
- (char)restoreUsingBecomeFirstResponder;
- (char)_inputViewSetSupportsSplit;
- (UIInputViewSet *)initWithInputView:(UIView *)arg0 accessoryView:(NSObject *)arg1 isKeyboard:(char)arg2;
- (char)_inputViewIsVisible;
- (char)_isKeyboard;
- (char)_inputViewSupportsSplit;
- (char)_inputAccessoryViewSupportsSplit;
- (char)__isCKAccessoryView;
- (id)inputSetWithInputAccessoryViewOnly;
- (UIView *)splitExemptSubview;
- (char)inSyncWithOrientation:(int)arg0 forKeyboard:(UIKeyboard *)arg1;
- (char)isInputAccessoryViewPlaceholder;

@end
