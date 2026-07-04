/* Runtime dump - ASRuntimeFixMailAccount
 * Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol>
{
    char _shouldNotifyMobileMail;
    NSSet * _supportedMailClasses;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (ASRuntimeFixMailAccount *)init;
- (int)fixBasicAccountIfNeeded:(id)arg0 loggingMessage:(NSString *)arg1;
- (void)accountsHaveBeenSaved:(char)arg0;
- (NSArray *)supportedAccountTypes;
- (char)_cleanupAccountClass:(NSObject *)arg0;

@end
