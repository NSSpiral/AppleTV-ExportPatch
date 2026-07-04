/* Runtime dump - GKDispatchGroup
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKDispatchGroup : NSObject
{
    NSString * _name;
    NSObject<OS_dispatch_group> * _group;
    GKThreadsafeDictionary * _values;
    NSError * _error;
    id result;
    int _sequence;
    char _loggingEnabled;
    id _result;
}

@property (retain) NSError * error;
@property (retain) id result;
@property (nonatomic) char loggingEnabled;
@property NSObject<OS_dispatch_group> * group;

+ (NSOperationQueue *)mainQueue;
+ (GKDispatchGroup *)dispatchGroupWithName:(NSString *)arg0;
+ (GKDispatchGroup *)dispatchGroup;
+ (GKDispatchGroup *)defaultConcurrentQueue;
+ (NSOperationQueue *)backgroundConcurrentQueue;

- (GKThreadsafeDictionary *)_values;
- (void)dealloc;
- (GKDispatchGroup *)init;
- (NSString *)description;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (void)setObject:(NSObject *)arg0 forKeyedSubscript:(id)arg1;
- (void)perform:(id)arg0;
- (NSArray *)allValues;
- (void)setGroup:(NSObject<OS_dispatch_group> *)arg0;
- (NSObject<OS_dispatch_group> *)group;
- (CKDPResponseOperationResult *)result;
- (GKDispatchGroup *)initWithName:(NSString *)arg0;
- (NSError *)error;
- (void)setResult:(NSObject *)arg0;
- (void)notifyOnMainQueueWithBlock:(id /* block */)arg0;
- (void)notifyOnQueue:(NSObject *)arg0 block:(id /* block */)arg1;
- (void)_waitWithDispatchTimeout:(unsigned long long)arg0;
- (void)enter;
- (void)leave;
- (void)waitWithTimeout:(double)arg0;
- (void)join:(int)arg0 queue:(NSObject *)arg1 block:(id /* block */)arg2;
- (char)isLoggingEnabled;
- (void)setLoggingEnabled:(char)arg0;
- (void)setError:(NSError *)arg0;
- (void)wait;

@end
