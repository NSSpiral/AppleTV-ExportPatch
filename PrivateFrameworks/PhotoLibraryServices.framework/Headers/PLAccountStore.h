/* Runtime dump - PLAccountStore
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAccountStore : ACAccountStore
{
    NSObject<OS_dispatch_queue> * _queue;
    ACAccount * _cachedPrimaryAppleAccount;
}

@property (readonly) ACAccount * cachedPrimaryAppleAccount;

+ (NSObject *)pl_sharedAccountStore;

- (void)dealloc;
- (PLAccountStore *)init;
- (ACAccount *)cachedPrimaryAppleAccount;
- (void)clearCachedProperties;
- (void)accountDidChange:(NSDictionary *)arg0;

@end
