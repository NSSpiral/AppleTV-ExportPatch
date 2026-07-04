/* Runtime dump - ISSSURLBag
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISSSURLBag : SSURLBag
{
    ISURLBag * _bag;
    NSMutableArray * _completionBlocks;
    char _forceInvalidationForNextLoad;
    ISLoadURLBagOperation * _operation;
}

+ (NSString *)URLBagForContext:(NSObject *)arg0;

- (NSString *)storeFrontIdentifier;
- (void)loadWithCompletionBlock:(id /* block */)arg0;
- (void)loadValueForKey:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)invalidate;
- (void).cxx_destruct;
- (NSString *)valueForKey:(NSString *)arg0 error:(id *)arg1;
- (void)getTrustForURL:(NSURL *)arg0 completionBlock:(id /* block */)arg1;
- (NSDictionary *)existingBagDictionary;
- (void)_enqueueOperationWithContext:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (void)_finishOperationWithURLBag:(NSString *)arg0 error:(NSError *)arg1;

@end
