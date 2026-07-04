/* Runtime dump - ATVCupidDataQueryContext
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVCupidDataQueryContext : NSObject
{
    ATVDataQuery * _query;
    NSObject<OS_dispatch_queue> * _queue;
    id _completionHandler;
}

@property (readonly, retain, nonatomic) ATVDataQuery * query;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (readonly, copy, nonatomic) id completionHandler;

- (ATVCupidDataQueryContext *)initWithQuery:(ATVDataQuery *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
- (void)performCompletion;
- (char)isQueryStillValid;
- (id)subcontextWithCompletionHandler:(id /* block */)arg0;
- (ATVDataQuery *)query;
- (id /* block */)completionHandler;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;

@end
