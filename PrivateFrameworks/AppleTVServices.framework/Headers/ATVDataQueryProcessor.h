/* Runtime dump - ATVDataQueryProcessor
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataQueryProcessor : NSObject
{
    NSObject<OS_dispatch_queue> * _serialProcessingQueue;
    NSMutableDictionary * _dataClientQueryRecords;
}

+ (void)initialize;

- (ATVDataQueryProcessor *)initWithQueueName:(NSString *)arg0;
- (void)executeFirstQuery:(NSObject *)arg0 dataClient:(ATVDataClient *)arg1;
- (void)executeQuery:(NSObject *)arg0 andProcessNextWithDataClient:(NSObject *)arg1;
- (void)processQuery:(NSObject *)arg0 concurrentCount:(int)arg1 dataClient:(ATVDataClient *)arg2 priority:(int)arg3 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg4 completionHandler:(id /* block */)arg5;
- (void)shutdownClient:(NSObject *)arg0;

@end
