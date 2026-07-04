/* Runtime dump - MSAMNotificationInfo
 * Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSAMNotificationInfo : NSObject
{
    MSAlertManager * _owner;
    NSString * _personID;
    struct __CFUserNotification * _userNotification;
    struct __CFRunLoopSource * _runLoopSource;
    id _completionBlock;
}

@property (weak, nonatomic) MSAlertManager * owner;
@property (retain, nonatomic) NSString * personID;
@property (nonatomic) struct __CFRunLoopSource * runLoopSource;
@property (nonatomic) struct __CFUserNotification * userNotification;
@property (copy, nonatomic) id completionBlock;

+ (NSDictionary *)info;

- (void)dealloc;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (MSAlertManager *)owner;
- (struct __CFRunLoopSource *)runLoopSource;
- (void)setRunLoopSource:(struct __CFRunLoopSource *)arg0;
- (NSString *)personID;
- (void)setPersonID:(NSString *)arg0;
- (void)setOwner:(MSAlertManager *)arg0;
- (struct __CFUserNotification *)userNotification;
- (void)setUserNotification:(struct __CFUserNotification *)arg0;

@end
