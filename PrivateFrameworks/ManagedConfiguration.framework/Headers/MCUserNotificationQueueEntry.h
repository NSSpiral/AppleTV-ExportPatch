/* Runtime dump - MCUserNotificationQueueEntry
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCUserNotificationQueueEntry : NSObject
{
    char _displayOnLockScreen;
    char _displayInAppWhitelistModes;
    NSString * _title;
    NSString * _message;
    NSString * _defaultButtonText;
    NSString * _alternateButtonText;
    NSString * _otherButtonText;
    id _completionBlock;
    id _notification;
    double _dismissAfterTimeInterval;
}

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * message;
@property (retain, nonatomic) NSString * defaultButtonText;
@property (retain, nonatomic) NSString * alternateButtonText;
@property (retain, nonatomic) NSString * otherButtonText;
@property (nonatomic) char displayOnLockScreen;
@property (nonatomic) char displayInAppWhitelistModes;
@property (nonatomic) double dismissAfterTimeInterval;
@property (copy, nonatomic) id completionBlock;
@property (retain, nonatomic) id notification;

- (void)setTitle:(NSString *)arg0;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (NSNotification *)notification;
- (NSString *)title;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setNotification:(NSNotification *)arg0;
- (NSString *)defaultButtonText;
- (void)setDefaultButtonText:(NSString *)arg0;
- (NSString *)alternateButtonText;
- (void)setAlternateButtonText:(NSString *)arg0;
- (NSString *)otherButtonText;
- (void)setOtherButtonText:(NSString *)arg0;
- (char)displayOnLockScreen;
- (void)setDisplayOnLockScreen:(char)arg0;
- (char)displayInAppWhitelistModes;
- (void)setDisplayInAppWhitelistModes:(char)arg0;
- (double)dismissAfterTimeInterval;
- (void)setDismissAfterTimeInterval:(double)arg0;

@end
