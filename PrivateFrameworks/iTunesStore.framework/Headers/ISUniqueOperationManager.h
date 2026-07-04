/* Runtime dump - ISUniqueOperationManager
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISUniqueOperationManager : NSObject <ISSingleton>
{
    ISUniqueOperationContext * _activeContext;
    NSMutableArray * _contexts;
    NSLock * _lock;
    NSMutableDictionary * _lockPool;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ISUniqueOperationManager *)sharedInstance;
+ (void)setSharedInstance:(id)arg0;

- (void)dealloc;
- (ISUniqueOperationManager *)init;
- (void)checkInOperation:(NSObject *)arg0;
- (void)checkOutOperation:(NSObject *)arg0;
- (NSString *)lockWithIdentifier:(NSString *)arg0;
- (NSString *)_activeContext;
- (NSObject *)_contextForOperation:(NSObject *)arg0;
- (NSString *)predecessorForKey:(NSString *)arg0 operation:(ISURLOperation *)arg1;
- (void)setPredecessorIfNeeded:(id)arg0 forKey:(NSString *)arg1;
- (void)uniqueOperationFinished:(id)arg0 forKey:(NSString *)arg1;

@end
