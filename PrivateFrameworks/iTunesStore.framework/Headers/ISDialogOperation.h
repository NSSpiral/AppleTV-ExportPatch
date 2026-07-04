/* Runtime dump - ISDialogOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDialogOperation : ISOperation
{
    ISDialog * _dialog;
    char _performDefaultActions;
    ISDialogButton * _selectedButton;
    NSArray * _textFieldValues;
    id _userNotification;
}

@property <ISDialogOperationDelegate> * delegate;
@property (retain) ISDialog * dialog;
@property char performDefaultActions;
@property (retain) ISDialogButton * selectedButton;
@property (readonly) NSArray * textFieldValues;
@property (retain) id userNotification;

+ (ISDialogOperation *)operationWithDialog:(ISDialog *)arg0;
+ (NSError *)operationWithError:(NSError *)arg0;

- (void)cancel;
- (void)dealloc;
- (ISDialogOperation *)init;
- (void)_run;
- (void)run;
- (ISDialog *)dialog;
- (void)setDialog:(ISDialog *)arg0;
- (NSArray *)textFieldValues;
- (void)setSelectedButton:(ISDialogButton *)arg0;
- (NSNotification *)userNotification;
- (void)setUserNotification:(NSNotification *)arg0;
- (char)performDefaultActions;
- (void)handleButtonSelected:(int)arg0 withResponseDictionary:(NSDictionary *)arg1;
- (void)_showUserNotification:(NSNotification *)arg0;
- (void)_waitForUserNotificationResponse:(struct __CFUserNotification *)arg0;
- (void)_handleResponseForNotification:(struct __CFUserNotification *)arg0 responseFlags:(unsigned long)arg1;
- (void)setPerformDefaultActions:(char)arg0;
- (ISDialogButton *)selectedButton;

@end
