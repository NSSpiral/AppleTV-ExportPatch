/* Runtime dump - SSMetricsController
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsController : NSObject
{
    SSXPCConnection * _connection;
    SSMetricsConfiguration * _configuration;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSObject<OS_dispatch_queue> * _flushSerialQueue;
    char _flushTimerEnabled;
    char _flushOnForeground;
    NSTimer * _flushEventsTimer;
}

@property (nonatomic) char flushTimerEnabled;

- (void)dealloc;
- (SSMetricsController *)init;
- (NSURLConnection *)_connection;
- (SSMetricsConfiguration *)configuration;
- (NSObject<OS_dispatch_queue> *)serialQueue;
- (void)setGlobalConfiguration:(SSMetricsConfiguration *)arg0;
- (char)isDisabled;
- (NSArray *)pingURLs;
- (void)_applicationWillEnterForeground;
- (NSObject *)_userType;
- (NSDictionary *)_cookieValuesForConfiguration:(NSDictionary *)arg0;
- (void)_flushUnreportedEventsIfEnabled;
- (void)flushUnreportedEventsWithCompletionHandler:(id /* block */)arg0;
- (void)_handleFlushTimer;
- (void)_setupFlushTimer;
- (void)insertEvents:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)_serialQueueInsertEvents:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)_enumerateFieldValuesWithMap:(NSObject *)arg0 fieldData:(NSData *)arg1 block:(id /* block */)arg2;
- (id)_valueForField:(id)arg0 withFieldData:(NSData *)arg1;
- (void)setFlushTimerEnabled:(char)arg0;
- (void)insertEvent:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (NSObject *)locationWithPosition:(int)arg0 type:(NSObject *)arg1 fieldData:(NSData *)arg2;
- (void)setPageConfiguration:(NSDictionary *)arg0;
- (char)isFlushTimerEnabled;

@end
