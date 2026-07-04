/* Runtime dump - CHSynchronizedLoggable
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHSynchronizedLoggable : NSObject <CHLoggerProtocol, CHSynchronizableProtocol>
{
    CHLogger * _logger;
    CHSynchronizable * _synchronizable;
}

- (void).cxx_destruct;
- (CHSynchronizedLoggable *)initWithName:(NSString *)arg0;
- (void)executeSync:(id)arg0;
- (NSObject *)executeSyncWithResult:(NSObject *)arg0;
- (char)executeSyncWithBOOL:(id)arg0;
- (char)shouldLogForLevel:(unsigned int)arg0;
- (void)logWithLevel:(unsigned int)arg0 withFormat:(NSString *)arg1;
- (CHSynchronizedLoggable *)initWithName:(NSString *)arg0 queue:(NSObject *)arg1;
- (NSOperationQueue *)queue;
- (void)execute:(id)arg0;

@end
