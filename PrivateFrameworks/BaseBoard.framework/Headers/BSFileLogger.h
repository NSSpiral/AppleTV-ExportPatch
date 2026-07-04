/* Runtime dump - BSFileLogger
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSFileLogger : NSObject <BSLogging>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _logPath;
    NSMutableArray * _recentLogs;
    NSMutableSet * _enabledCategories;
    NSDateFormatter * _memoryLogDateFormatter;
    char _enabledByPreference;
    <BSFileLoggerDelegate> * _delegate;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) char enabled;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (readonly, nonatomic) NSString * logPath;
@property (readonly, nonatomic) unsigned int logDestinations;
@property (readonly, nonatomic) int maxLogCount;
@property (readonly, nonatomic) int maxLogSize;
@property (readonly, nonatomic) unsigned int maxLogLinesInMemory;
@property (readonly, nonatomic) NSString * logPreferenceDomain;
@property (readonly, nonatomic) NSString * logPreferenceName;
@property (readonly, nonatomic) char shouldEnableOnInternalBuilds;
@property (nonatomic) <BSFileLoggerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<BSFileLoggerDelegate> *)arg0;
- (BSFileLogger *)init;
- (<BSFileLoggerDelegate> *)delegate;
- (NSString *)name;
- (char)isEnabled;
- (void)_setEnabled:(char)arg0;
- (void)logWithFormat:(NSString *)arg0 arguments:(void *)arg1;
- (void)logWithFormat:(NSString *)arg0;
- (char)_queue_isEnabledForCategory:(NSString *)arg0;
- (void)_setEnabled:(char)arg0 fromDefaults:(char)arg1;
- (void)_queue_appendLogForCategory:(NSString *)arg0 withFormat:(NSString *)arg1 arguments:(void *)arg2;
- (NSString *)composedLogForCategory:(NSString *)arg0 destination:(unsigned int)arg1 format:(NSString *)arg2 arguments:(void *)arg3;
- (unsigned int)maxLogLinesInMemory;
- (void)_appendLogForCategory:(NSString *)arg0 withFormat:(NSString *)arg1 arguments:(void *)arg2;
- (char)isEnabledForCategory:(NSString *)arg0;
- (void)reloadFromDefaults;
- (void)_enableLogCategory:(NSString *)arg0;
- (void)_disableLogCategory:(NSString *)arg0;
- (NSString *)logPreferenceDomain;
- (NSString *)logPreferenceName;
- (NSString *)logPath;
- (unsigned int)logDestinations;
- (NSObject<OS_dispatch_queue> *)queue;
- (id)loggerForCatagory:(id)arg0;
- (int)maxLogCount;
- (int)maxLogSize;
- (NSString *)logPrefixForCategory:(NSString *)arg0 destination:(unsigned int)arg1;
- (void)willBeginLoggingToPath:(NSString *)arg0;
- (char)shouldEnableOnInternalBuilds;
- (NSMutableArray *)recentLogs;
- (char)saveRecentLogsToTemporaryPath:(id *)arg0;

@end
