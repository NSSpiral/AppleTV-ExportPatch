/* Runtime dump - EAOutputStream
 * Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAOutputStream : NSOutputStream
{
    id _delegate;
    int _sock;
    EAAccessory * _accessory;
    EASession * _session;
    NSRecursiveLock * _statusLock;
    NSRecursiveLock * _runloopLock;
    struct __CFSocket * _cfSocket;
    char _isOpenCompletedEventSent;
    char _hasSpaceAvailableEventSent;
    char _hasSpaceAvailable;
    char _isAtEndEventSent;
    unsigned int _streamStatus;
    struct __CFRunLoop * _runLoop;
    struct __CFRunLoopSource * _runLoopSource;
    struct __CFRunLoopSource * _socketRunLoopSource;
}

- (unsigned int)streamStatus;
- (void)_accessoryDidDisconnect:(NSNotification *)arg0;
- (void)openCompleted;
- (void)_performAtEndOfStreamValidation;
- (EAOutputStream *)initWithAccessory:(EAAccessory *)arg0 forSession:(NSObject *)arg1 socket:(int)arg2;
- (void)endStream;
- (void)_streamWriteable;
- (void)dealloc;
- (void)setDelegate:(<NSStreamDelegate> *)arg0;
- (<NSStreamDelegate> *)delegate;
- (void)close;
- (char)hasSpaceAvailable;
- (void)open;
- (int)write:(char *)arg0 maxLength:(unsigned int)arg1;
- (NSError *)streamError;
- (NSString *)propertyForKey:(NSString *)arg0;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)removeFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;

@end
