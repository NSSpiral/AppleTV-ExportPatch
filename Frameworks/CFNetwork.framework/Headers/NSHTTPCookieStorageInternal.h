/* Runtime dump - NSHTTPCookieStorageInternal
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPCookieStorageInternal : NSObject
{
    struct OpaqueCFHTTPCookieStorage * storage;
    struct OpaqueCFHTTPCookieStorage * privateStorage;
    NSRecursiveLock * dataLock;
    char privateBrowsing;
}

- (NSString *)_initWithIdentifier:(NSString *)arg0 private:(BOOL)arg1;
- (void)_syncCookies;
- (void)registerForPostingNotifications;
- (NSHTTPCookieStorageInternal *)initInternalWithCFStorage:(struct OpaqueCFHTTPCookieStorage *)arg0;
- (void)dealloc;

@end
