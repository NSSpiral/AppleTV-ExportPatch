/* Runtime dump - BSFileLogManager
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSFileLogManager : NSObject <BSFileLoggerDelegate>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _loggersByName;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BSFileLogManager *)sharedInstance;

- (void)dealloc;
- (BSFileLogManager *)init;
- (void)flush;
- (void)_queue_enableOrDisableLoggerIfNecessary:(id)arg0;
- (void)registerLoggersFromURL:(NSURL *)arg0;
- (void)_queue_addFileLoggersFromPlistAtURL:(NSURL *)arg0;
- (void)_queue_registerLogger:(id)arg0;
- (void)_queue_addLogger:(id)arg0;
- (char)_queue_isClass:(Class)arg0 aKindOfClass:(Class)arg1;
- (void)loggerEnabledStateChanged:(NSNotification *)arg0;
- (void)registerLogger:(id)arg0;
- (void)reloadFromDefaults;
- (NSString *)loggerForName:(NSString *)arg0;
- (void)registerLoggersFromBundle:(NSObject *)arg0;
- (void)registerLoggers;

@end
