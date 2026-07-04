/* Runtime dump - ATV2SVerificationOperation
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATV2SVerificationOperation : ISOperation
{
    NSString * _customerTitle;
    NSString * _customerMessage;
    NSArray * _devices;
    NSDictionary * _URLs;
    NSDictionary * _selectedDevice;
    NSDictionary * _sendCodeLocalization;
}

@property (retain, nonatomic) NSString * customerTitle;
@property (retain, nonatomic) NSString * customerMessage;
@property (retain, nonatomic) NSArray * devices;
@property (retain, nonatomic) NSDictionary * URLs;
@property (retain, nonatomic) NSDictionary * selectedDevice;
@property (retain, nonatomic) NSDictionary * sendCodeLocalization;

- (void)run;
- (void)setURLs:(id)arg0;
- (NSDictionary *)URLs;
- (void).cxx_destruct;
- (void)setCustomerTitle:(NSString *)arg0;
- (void)setCustomerMessage:(NSString *)arg0;
- (void)setSerializedURLs:(id)arg0;
- (NSString *)customerTitle;
- (NSString *)customerMessage;
- (void)presentFailureAlertWithTitle:(NSString *)arg0 message:(NSString *)arg1 completion:(id /* block */)arg2;
- (NSDictionary *)selectedDevice;
- (id)_copy2SVCodeFromUser;
- (char)_verify2SVCode:(id)arg0 error:(id *)arg1;
- (void)setSelectedDevice:(NSDictionary *)arg0;
- (id)_copyDeviceFromUser;
- (char)_sendCodeToSelectedDevice;
- (void)_displayDeviceListWithCompletionHandler:(id /* block */)arg0;
- (NSDictionary *)sendCodeLocalization;
- (char)_sendCodeToDevice:(NSObject *)arg0 error:(id *)arg1 showDialogs:(char)arg2;
- (void)presentCodeEntryAlertWithTitle:(NSString *)arg0 message:(NSString *)arg1 newCodeLabel:(NSString *)arg2 submitLabel:(NSString *)arg3 newCodeRequestHandler:(id /* block */)arg4 completion:(/* block */ id)arg5;
- (NSError *)_copyDevicesResponseWithError:(id *)arg0;
- (void)presentDevicesAlertWithTitle:(NSString *)arg0 message:(NSString *)arg1 deviceList:(NSArray *)arg2 completion:(id /* block */)arg3;
- (void)setSendCodeLocalization:(NSDictionary *)arg0;
- (NSObject *)_copySendCodeResponseForDevice:(NSObject *)arg0 error:(id *)arg1;
- (id)_copyVerifyResponseWithCode:(NSString *)arg0 fromDevice:(NSObject *)arg1 error:(id *)arg2;
- (void)setDevices:(NSArray *)arg0;
- (NSArray *)devices;

@end
