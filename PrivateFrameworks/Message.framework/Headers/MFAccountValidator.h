/* Runtime dump - MFAccountValidator
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAccountValidator : NSObject
{
    MFAccount * _account;
    MFActivityMonitor * _accountValidationActivity;
    MFMonitoredInvocation * _validationInvocation;
    id _completionBlock;
    struct ? _flags;
    MFError * _incomingServerValidationError;
    MFError * _smtpServerValidationError;
    NSArray * _incomingServerAuthSchemes;
    NSArray * _smtpServerAuthSchemes;
    id _delegate;
}

@property (nonatomic) id delegate;
@property (readonly, nonatomic) char accountIsValid;
@property (readonly, nonatomic) char accountSupportsSSL;
@property (readonly, nonatomic) MFError * error;
@property (readonly, nonatomic) MFAccount * account;
@property (readonly, nonatomic) char performsValidationInBackground;
@property (readonly, nonatomic) MFMonitoredInvocation * validationInvocation;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (MFAccountValidator *)init;
- (NSObject *)delegate;
- (void)stop;
- (MFError *)error;
- (MFAccount *)account;
- (MFAccountValidator *)initWithPerformsValidationInBackground:(char)arg0;
- (void)validateAccount:(NSObject *)arg0 useSSL:(char)arg1 withCompletion:(id /* block */)arg2;
- (void)_validateAccount:(NSObject *)arg0 withFallbacks:(char)arg1;
- (void)validateAccountWithoutFallbacks:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)_backgroundValidateAccountFinished:(id)arg0 authSchemes:(id)arg1;
- (void)_validateAccount:(NSObject *)arg0;
- (void)_validateAccountWithoutFallbacks:(id)arg0;
- (char)performsValidationInBackground;
- (char)_outgoingServerValid;
- (char)_incomingServerValid;
- (void)validateAccount:(NSObject *)arg0 useSSL:(char)arg1;
- (void)validateAccountWithoutFallbacks:(id)arg0;
- (void)cancelValidation;
- (NSDictionary *)_ispAccountInfo;
- (char)accountValidationCanceled;
- (MFMonitoredInvocation *)validationInvocation;
- (char)accountIsValid;
- (char)accountSupportsSSL;

@end
