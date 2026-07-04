/* Runtime dump - ATV2StepVerificationOperation
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATV2StepVerificationOperation : ATV2SVerificationOperation
{
    NSString * _selectedDeviceLabel;
    NSString * _submitButtonTitle;
    NSString * _sendNewCodeButtonTitle;
    id _requestNewCodeHandler;
}

@property (copy, nonatomic) NSString * selectedDeviceLabel;
@property (copy, nonatomic) NSString * submitButtonTitle;
@property (copy, nonatomic) NSString * sendNewCodeButtonTitle;
@property (copy, nonatomic) id requestNewCodeHandler;

- (void)setSelectedDeviceLabel:(NSString *)arg0;
- (NSString *)selectedDeviceLabel;
- (void)setSubmitButtonTitle:(NSString *)arg0;
- (void)setSendNewCodeButtonTitle:(NSString *)arg0;
- (void)setRequestNewCodeHandler:(id /* block */)arg0;
- (NSString *)sendNewCodeButtonTitle;
- (NSString *)submitButtonTitle;
- (id /* block */)requestNewCodeHandler;
- (id)textEntry:(VKPShieldIndexTextEntry *)arg0 titleForButton:(int)arg1;
- (char)textEntry:(VKPShieldIndexTextEntry *)arg0 shouldDismissOnButton:(int)arg1;
- (void)textEntry:(VKPShieldIndexTextEntry *)arg0 didSelectButton:(int)arg1;
- (void).cxx_destruct;
- (void)presentFailureAlertWithTitle:(NSString *)arg0 message:(NSString *)arg1 completion:(id /* block */)arg2;
- (void)presentCodeEntryAlertWithTitle:(NSString *)arg0 message:(NSString *)arg1 newCodeLabel:(NSString *)arg2 submitLabel:(NSString *)arg3 newCodeRequestHandler:(id /* block */)arg4 completion:(/* block */ id)arg5;
- (void)presentDevicesAlertWithTitle:(NSString *)arg0 message:(NSString *)arg1 deviceList:(NSArray *)arg2 completion:(id /* block */)arg3;

@end
