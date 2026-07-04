/* Runtime dump - CHSynchronizable
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHSynchronizable : NSObject <CHSynchronizableProtocol>
{
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) NSObject<OS_dispatch_queue> * queue;

- (CHSynchronizable *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void).cxx_destruct;
- (CHSynchronizable *)initWithName:(NSString *)arg0;
- (void)executeSync:(id)arg0;
- (NSObject *)executeSyncWithResult:(NSObject *)arg0;
- (char)executeSyncWithBOOL:(id)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)execute:(id)arg0;

@end
