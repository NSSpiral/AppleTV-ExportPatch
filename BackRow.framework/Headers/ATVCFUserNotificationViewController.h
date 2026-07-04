/* Runtime dump - ATVCFUserNotificationViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRTextFieldDelegate;
@interface ATVCFUserNotificationViewController : NSObject <BRTextFieldDelegate>
{
    char _passwordAutofillRequiresOneClick;
    char _shouldCancel;
    char _activated;
    ATVCFUserNotification * _notification;
    double _creationTime;
}

@property (retain, nonatomic) ATVCFUserNotification * notification;
@property (nonatomic) char passwordAutofillRequiresOneClick;
@property (nonatomic) char shouldCancel;
@property (nonatomic) char activated;
@property (nonatomic) double creationTime;

- (void)setPasswordAutofillRequiresOneClick:(char)arg0;
- (void)wakeup;
- (void)_sendResponse:(int)arg0;
- (void)_configureUsernameTextEntryDialog:(id)arg0;
- (char)_configurePasswordTextEntryDialog:(id)arg0;
- (NSNumber *)_passwordForAccount:(NSObject *)arg0;
- (char)passwordAutofillRequiresOneClick;
- (void)textDidEndEditing:(id /* <BRTextField> */)arg0;
- (void)_activate;
- (void)cancel;
- (ATVCFUserNotification *)notification;
- (void)textDidChange:(id /* <BRTextField> */)arg0;
- (void)update;
- (ATVCFUserNotificationViewController *)initWithNotification:(ATVCFUserNotification *)arg0;
- (void)setActivated:(char)arg0;
- (void).cxx_destruct;
- (void)_dismiss;
- (char)isActivated;
- (void)setNotification:(ATVCFUserNotification *)arg0;
- (double)creationTime;
- (void)setCreationTime:(double)arg0;
- (char)shouldCancel;
- (void)setShouldCancel:(char)arg0;

@end
