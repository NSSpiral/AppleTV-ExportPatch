/* Runtime dump - SCROServer
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROServer : NSObject
{
    NSLock * _contentLock;
    <SCROServerDelegate> * _delegate;
    struct __CFRunLoopSource * _serverSource;
    struct __CFRunLoopSource * _deathSource;
    struct __CFRunLoopTimer * _deathTimer;
    unsigned int _serverPort;
    unsigned int _deathPort;
    long _clientCount;
    char _isRegisteredWithMach;
}

+ (void)initialize;
+ (SCROServer *)allocWithZone:(struct _NSZone *)arg0;
+ (SCROServer *)sharedServer;

- (SCROServer *)retain;
- (void)release;
- (void)dealloc;
- (void)setDelegate:(<SCROServerDelegate> *)arg0;
- (SCROServer *)init;
- (SCROServer *)autorelease;
- (unsigned int)retainCount;
- (<SCROServerDelegate> *)delegate;
- (SCROServer *)copyWithZone:(struct _NSZone *)arg0;
- (struct __CFRunLoopSource *)serverSource;
- (void)unregisterWithMach;
- (long)_clientCount;
- (long)_incrementClientCount;
- (void)_setClientCount:(long)arg0;
- (struct __CFRunLoopTimer *)_deathTimer;
- (int)_registerForNotificationOnDeathPort:(unsigned int)arg0;
- (char)isRegisteredWithMach;
- (char)registerWithMach;

@end
