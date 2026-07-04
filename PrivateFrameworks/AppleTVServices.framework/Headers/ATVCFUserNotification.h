/* Runtime dump - ATVCFUserNotification
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVCFUserNotification : NSObject
{
    char _responseSent;
    NSString * _notificationSource;
    int _token;
    int _timeout;
    NSString * _alertHeader;
    NSString * _alertMessage;
    NSString * _defaultButtonTitle;
    NSString * _alternateButtonTitle;
    NSString * _otherButtonTitle;
    int _defaultButtonIndex;
    int _alternateButtonIndex;
    int _otherButtonIndex;
    int _dialogDefaultButtonIndex;
    NSArray * _selectableItemTitles;
    id _textFieldTitles;
    id _textFieldInitialValues;
    NSArray * _textFieldEnteredValues;
    NSString * _accountName;
    unsigned int _attemptNumber;
    unsigned int _replyPort;
    int _requestFlags;
    unsigned int _replyFlags;
}

@property (copy, nonatomic) NSString * notificationSource;
@property (readonly, nonatomic) int notificationType;
@property (nonatomic) int token;
@property (nonatomic) int timeout;
@property (copy, nonatomic) NSString * alertHeader;
@property (copy, nonatomic) NSString * alertMessage;
@property (copy, nonatomic) NSString * defaultButtonTitle;
@property (copy, nonatomic) NSString * alternateButtonTitle;
@property (copy, nonatomic) NSString * otherButtonTitle;
@property (nonatomic) int defaultButtonIndex;
@property (nonatomic) int alternateButtonIndex;
@property (nonatomic) int otherButtonIndex;
@property (nonatomic) int dialogDefaultButtonIndex;
@property (copy, nonatomic) NSArray * selectableItemTitles;
@property (copy, nonatomic) id textFieldTitles;
@property (copy, nonatomic) id textFieldInitialValues;
@property (copy, nonatomic) NSArray * textFieldEnteredValues;
@property (copy, nonatomic) NSString * accountName;
@property (nonatomic) unsigned int attemptNumber;
@property (nonatomic) unsigned int replyPort;
@property (nonatomic) int requestFlags;
@property (nonatomic) unsigned int replyFlags;
@property (nonatomic) char responseSent;

- (void)cancel;
- (int)defaultButtonIndex;
- (void)setDefaultButtonIndex:(int)arg0;
- (void).cxx_destruct;
- (int)token;
- (void)setToken:(int)arg0;
- (void)updateWithMessage:(NSString *)arg0 requestFlags:(int)arg1;
- (ATVCFUserNotification *)initWithMessage:(NSString *)arg0 replyPort:(unsigned int)arg1 requestFlags:(int)arg2;
- (void)setRequestFlags:(int)arg0;
- (void)setNotificationSource:(NSString *)arg0;
- (id)_safeLocalizedValue:(id)arg0 withBundle:(NSObject *)arg1;
- (void)setAlertHeader:(NSString *)arg0;
- (void)setAlertMessage:(NSString *)arg0;
- (NSString *)alertMessage;
- (void)setDefaultButtonTitle:(NSString *)arg0;
- (void)setAlternateButtonTitle:(NSString *)arg0;
- (void)setOtherButtonTitle:(NSString *)arg0;
- (void)setSelectableItemTitles:(NSArray *)arg0;
- (void)setTextFieldTitles:(id)arg0;
- (void)setTextFieldInitialValues:(NSArray *)arg0;
- (void)setAlternateButtonIndex:(int)arg0;
- (void)setOtherButtonIndex:(int)arg0;
- (int)requestFlags;
- (NSString *)alternateButtonTitle;
- (NSString *)otherButtonTitle;
- (int)alternateButtonIndex;
- (void)setDialogDefaultButtonIndex:(int)arg0;
- (int)otherButtonIndex;
- (NSString *)defaultButtonTitle;
- (void)setAccountName:(NSString *)arg0;
- (void)setAttemptNumber:(unsigned int)arg0;
- (NSArray *)selectableItemTitles;
- (id)textFieldTitles;
- (char)responseSent;
- (void)setResponseSent:(char)arg0;
- (int)notificationType;
- (void)setReplyFlags:(unsigned int)arg0;
- (NSArray *)textFieldEnteredValues;
- (unsigned int)replyFlags;
- (char)isSecureTextField:(int)arg0;
- (unsigned int)replyPort;
- (void)setReplyPort:(unsigned int)arg0;
- (void)didSelectButtonAtIndex:(int)arg0;
- (char)isAlive;
- (NSString *)notificationSource;
- (NSString *)alertHeader;
- (int)dialogDefaultButtonIndex;
- (NSArray *)textFieldInitialValues;
- (void)setTextFieldEnteredValues:(NSArray *)arg0;
- (NSString *)accountName;
- (unsigned int)attemptNumber;
- (void)setTimeout:(int)arg0;
- (int)timeout;

@end
