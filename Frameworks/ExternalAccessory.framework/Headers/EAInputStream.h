/* Runtime dump - EAInputStream
 * Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAInputStream : NSInputStream
{
    id _delegate;
    EAAccessory * _accessory;
    EASession * _session;
    int _sock;
    NSMutableData * _inputFromAccData;
    NSCondition * _inputFromAccCondition;
    NSRecursiveLock * _statusLock;
    NSRecursiveLock * _runloopLock;
    NSObject<OS_dispatch_queue> * _inputFromAccQueue;
    NSObject<OS_dispatch_source> * _sockListenSource;
    char * _inputFromAccBuffer;
    char _isOpenCompletedEventSent;
    char _hasNewBytesAvailable;
    char _isAtEndEventSent;
    unsigned int _streamStatus;
    struct __CFRunLoop * _runLoop;
    struct __CFRunLoopSource * _runLoopSource;
}

- (unsigned int)streamStatus;
- (char)getBuffer:(char * *)arg0 length:(unsigned int *)arg1;
- (void)_accessoryDidDisconnect:(NSNotification *)arg0;
- (void)openCompleted;
- (void)_performAtEndOfStreamValidation;
- (EAInputStream *)initWithAccessory:(EAAccessory *)arg0 forSession:(NSObject *)arg1 socket:(int)arg2;
- (void)endStream;
- (void)dealloc;
- (void)setDelegate:(<NSStreamDelegate> *)arg0;
- (<NSStreamDelegate> *)delegate;
- (void)close;
- (void)open;
- (NSError *)streamError;
- (NSString *)propertyForKey:(NSString *)arg0;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)removeFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (char)hasBytesAvailable;
- (int)read:(char *)arg0 maxLength:(unsigned int)arg1;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;

@end
