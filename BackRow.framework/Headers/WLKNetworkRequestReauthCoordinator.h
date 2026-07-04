/* Runtime dump - WLKNetworkRequestReauthCoordinator
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol NSLocking;
@interface WLKNetworkRequestReauthCoordinator : NSObject <NSLocking>
{
    NSLock * _lock;
    char _sessionPrompt;
}

@property char sessionPrompt;

+ (NSPersistentStoreCoordinator *)coordinator;

- (char)didPrompt;
- (void)markPrompt;
- (void)setSessionPrompt:(char)arg0;
- (char)sessionPrompt;
- (void)dealloc;
- (WLKNetworkRequestReauthCoordinator *)_init;
- (void)lock;
- (void)unlock;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;

@end
