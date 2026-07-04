/* Runtime dump - SSURLBag
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLBag : NSObject
{
    SSXPCConnection * _connection;
    SSURLBagContext * _context;
    NSDictionary * _dictionary;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double _expirationTime;
    char _ignoreCacheForNextLookup;
    NSMutableArray * _pendingLookups;
    NSString * _storeFrontIdentifier;
}

@property (readonly) SSURLBagContext * URLBagContext;

+ (NSString *)URLBagForContext:(NSObject *)arg0;
+ (void)setURLBag:(ATVStoreURLBag *)arg0 forContext:(NSObject *)arg1;

- (void)loadWithCompletionBlock:(id /* block */)arg0;
- (SSURLBag *)initWithURLBagContext:(NSObject *)arg0;
- (void)loadValueForKey:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)dealloc;
- (SSURLBag *)init;
- (void)invalidate;
- (NSURLConnection *)_connection;
- (void)dispatchAsync:(id)arg0;
- (void)dispatchSync:(id)arg0;
- (SSURLBagContext *)URLBagContext;
- (NSString *)valueForKey:(NSString *)arg0 error:(id *)arg1;
- (void)_loadWithCompletionBlock:(id /* block */)arg0;
- (void)_drainPendingLookupsWithError:(NSError *)arg0;
- (void)_loadURLBag;
- (void)getTrustForURL:(NSURL *)arg0 completionBlock:(id /* block */)arg1;
- (NSDictionary *)existingBagDictionary;

@end
