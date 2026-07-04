/* Runtime dump - RUIPasscodeView
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIPasscodeView : RUIElement <RUITableFooterDelegate, RUIPasscodeFieldDelegate>
{
    UIView * _view;
    UILabel * _label;
    UIView * _footer;
    RUIObjectModel * _objectModel;
    RUIPage * _page;
    RUIPasscodeField * _passcodeField;
    UIColor * _foregroundColor;
    int _keyboardAppearance;
}

@property (weak, nonatomic) RUIObjectModel * objectModel;
@property (weak, nonatomic) RUIPage * page;
@property (readonly, nonatomic) RUIPasscodeField * passcodeField;
@property (retain, nonatomic) UIColor * foregroundColor;
@property (nonatomic) int keyboardAppearance;

- (int)keyboardAppearance;
- (void)setKeyboardAppearance:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (UIColor *)foregroundColor;
- (RUIPage *)page;
- (void)setPage:(RUIPage *)arg0;
- (void)setForegroundColor:(UIColor *)arg0;
- (void).cxx_destruct;
- (RUIPasscodeField *)passcodeField;
- (void)populatePostbackDictionary:(NSDictionary *)arg0;
- (void)passcodeField:(RUIPasscodeField *)arg0 enteredPasscode:(id)arg1;
- (RUIObjectModel *)objectModel;
- (void)setObjectModel:(RUIObjectModel *)arg0;
- (void)viewDidLayout;
- (void)submitPIN;
- (void)footerView:(NSObject *)arg0 activatedLinkWithURL:(NSString *)arg1;
- (TPPasscodeView *)passcodeView;

@end
