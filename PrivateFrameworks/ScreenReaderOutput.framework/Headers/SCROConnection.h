/* Runtime dump - SCROConnection
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROConnection : NSObject
{
    char _isConnectionStarted;
    unsigned int _pingPort;
    struct __CFRunLoopSource * _pingSource;
    struct __CFRunLoopSource * _invalidationSource;
    unsigned int _identifier;
    int _handlerType;
    SCROWeakReferenceContainer * _delegate;
}

+ (void)initialize;
+ (void)_createConnectionRunLoop;
+ (void)_configServer;
+ (void)_unconfigServerAndRetry:(char)arg0;
+ (void)_addConnectionToRunLoop:(NSObject *)arg0;

- (void)dealloc;
- (void)invalidate;
- (int)sendEvent:(NSObject *)arg0;
- (void)_ping;
- (NSString *)handlerValueForKey:(int)arg0;
- (SCROConnection *)initWithHandlerType:(int)arg0 delegate:(SCROWeakReferenceContainer *)arg1;
- (int)registerHandlerCallbackForKey:(int)arg0;
- (int)setHandlerValue:(id)arg0 forKey:(int)arg1;
- (NSString *)handlerArrayValueForKey:(int)arg0;
- (int)performHandlerActionForKey:(int)arg0;
- (NSString *)handlerValueForKey:(int)arg0 withObject:(NSObject *)arg1;
- (void)_startConnection;
- (void)_stopConnection;

@end
