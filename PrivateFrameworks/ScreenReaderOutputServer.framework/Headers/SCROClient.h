/* Runtime dump - SCROClient
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROClient : NSObject
{
    NSLock * _lock;
    unsigned int _identifier;
    unsigned int _port;
    int _pid;
    struct __CFArray * _queue;
    struct __CFSet * _callbackSet;
}

+ (void)initialize;
+ (NSString *)addClientGetIdentifier:(unsigned int *)arg0 token:(struct ?)arg1 getPort:(unsigned int *)arg2;
+ (long)removeClientWithPort:(unsigned int)arg0;
+ (char)isClientTrustedWithPortToken:(struct ?)arg0;
+ (void)sendCallback:(id /* block */)arg0;
+ (NSString *)callbacksForClientIdentifier:(unsigned int)arg0;
+ (void)registerCallbackWithKey:(int)arg0 forClientIdentifier:(unsigned int)arg1;

- (void)dealloc;
- (SCROClient *)init;
- (void)_invalidate;
- (void)_lock;
- (char)_wantsCallback:(id /* block */)arg0;
- (void)_sendCallback:(id /* block */)arg0;
- (id)_dequeueCallbacks;
- (void)_registerCallbackWithKey:(int)arg0;
- (void)_unlock;

@end
