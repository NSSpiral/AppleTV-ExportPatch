/* Runtime dump - UISystemInputViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISystemInputViewController : UIInputViewController
{
    NSMutableDictionary * _accessoryViews;
    NSMutableDictionary * _accessoryConstraints;
    UIResponder<UITextInput> * _persistentDelegate;
    UIKeyboard * _keyboard;
    NSArray * _keyboardConstraits;
}

@property (retain, nonatomic) UIResponder<UITextInput> * persistentDelegate;
@property (retain, nonatomic) UIKeyboard * keyboard;
@property (retain, nonatomic) NSArray * keyboardConstraits;

+ (char)_requiresProxyInterface;

- (void)dealloc;
- (UISystemInputViewController *)init;
- (char)_disableAutomaticKeyboardBehavior;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)updateViewConstraints;
- (UIKeyboard *)keyboard;
- (UIKeyboard *)_keyboard;
- (void)setKeyboard:(UIKeyboard *)arg0;
- (id)accessoryViewForEdge:(int)arg0;
- (NSArray *)keyboardConstraits;
- (NSObject *)constraintFromView:(NSObject *)arg0 attribute:(int)arg1 toView:(UIView *)arg2 attribute:(int)arg3;
- (void)setKeyboardConstraits:(NSArray *)arg0;
- (void)setConstraits:(id)arg0 forEdge:(int)arg1;
- (id)constraitsForEdge:(int)arg0;
- (UIResponder<UITextInput> *)persistentDelegate;
- (void)setAccessoryView:(UIView *)arg0 forEdge:(int)arg1;
- (void)setPersistentDelegate:(UIResponder<UITextInput> *)arg0;

@end
