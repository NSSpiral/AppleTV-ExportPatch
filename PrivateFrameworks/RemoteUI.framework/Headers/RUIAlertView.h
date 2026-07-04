/* Runtime dump - RUIAlertView
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIAlertView : RUIElement
{
    UIAlertController * _alertController;
    RUIObjectModel<RUIAlertViewDelegate> * _objectModel;
    NSString * _title;
    NSString * _message;
    int _buttonIndex;
    id _completion;
}

@property (weak, nonatomic) RUIObjectModel<RUIAlertViewDelegate> * objectModel;
@property (retain, nonatomic) NSDictionary * attributes;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * message;
@property (readonly, nonatomic) int buttonIndex;
@property (copy, nonatomic) id completion;

- (void)dealloc;
- (RUIAlertView *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (UIAlertController *)alertController;
- (void).cxx_destruct;
- (void)setCancelButtonTitle:(NSString *)arg0;
- (RUIObjectModel<RUIAlertViewDelegate> *)objectModel;
- (void)setObjectModel:(RUIObjectModel<RUIAlertViewDelegate> *)arg0;
- (void)runAlertInController:(BRController *)arg0 completion:(id /* block */)arg1;
- (void)addButtonWithTitle:(NSString *)arg0 URL:(NSString *)arg1 destructive:(char)arg2 attributes:(NSDictionary *)arg3;
- (int)buttonIndex;

@end
