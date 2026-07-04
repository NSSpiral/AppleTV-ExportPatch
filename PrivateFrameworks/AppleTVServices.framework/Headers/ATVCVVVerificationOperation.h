/* Runtime dump - ATVCVVVerificationOperation
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVCVVVerificationOperation : ISOperation
{
    NSString * _customerTitle;
    NSString * _customerMessage;
    NSURL * _verifyURL;
}

@property (retain, nonatomic) NSString * customerTitle;
@property (retain, nonatomic) NSString * customerMessage;
@property (retain, nonatomic) NSURL * verifyURL;

- (void)run;
- (void).cxx_destruct;
- (void)setCustomerTitle:(NSString *)arg0;
- (void)setCustomerMessage:(NSString *)arg0;
- (void)setVerifyURL:(NSURL *)arg0;
- (NSURL *)verifyURL;
- (id)_copyCVVCodeFromUser;
- (char)_verifyCVVCode:(id)arg0 error:(id *)arg1;
- (NSString *)customerTitle;
- (NSString *)customerMessage;
- (void)presentAlertWithTitle:(NSString *)arg0 message:(NSString *)arg1 completion:(id /* block */)arg2;
- (id)_copyResponseWithCode:(NSString *)arg0 error:(id *)arg1;
- (void)presentFailureAlertWithTitle:(NSString *)arg0 message:(NSString *)arg1 completion:(id /* block */)arg2;

@end
