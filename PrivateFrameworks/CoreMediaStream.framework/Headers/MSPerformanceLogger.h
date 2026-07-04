/* Runtime dump - MSPerformanceLogger
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSPerformanceLogger : MSASModelBase

+ (MSPerformanceLogger *)sharedLogger;
+ (void)nukeCompletionBlock:(id /* block */)arg0;

- (MSPerformanceLogger *)init;
- (char)dbQueueUpgradeFromDatabaseVersion:(int)arg0 currentVersion:(int)arg1;
- (void)stopOperation:(NSObject *)arg0 itemGUID:(NSString *)arg1;
- (void)discardOperation:(NSObject *)arg0 itemGUID:(NSString *)arg1;
- (void)startOperation:(NSObject *)arg0 itemGUID:(NSString *)arg1;
- (void)summarizeOperation:(NSObject *)arg0 itemGUID:(NSString *)arg1 formatBlock:(id /* block */)arg2;
- (void)_logSqliteErrorLine:(int)arg0;
- (void)dbQueueDiscardOperation:(NSObject *)arg0 itemGUID:(NSString *)arg1;

@end
