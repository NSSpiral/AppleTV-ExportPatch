/* Runtime dump - ATVDataQueryRecord
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataQueryRecord : NSObject
{
    NSObject<OS_dispatch_queue> * _completionQueue;
    id _completionHandler;
    char _processAsync;
    ATVDataQuery * _query;
    int _priority;
}

@property (retain, nonatomic) ATVDataQuery * query;
@property (nonatomic) int priority;
@property (nonatomic) char processAsync;

- (void)dealloc;
- (ATVDataQuery *)query;
- (void)setQuery:(ATVDataQuery *)arg0;
- (void)setPriority:(int)arg0;
- (int)priority;
- (void)setProcessAsync:(char)arg0;
- (ATVDataQueryRecord *)initWithQuery:(ATVDataQuery *)arg0 priority:(int)arg1 processAsync:(char)arg2 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(id /* block */)arg4;
- (void)sendCallBack;
- (char)processAsync;

@end
