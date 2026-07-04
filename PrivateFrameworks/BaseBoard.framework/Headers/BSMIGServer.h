/* Runtime dump - BSMIGServer
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMIGServer : NSObject
{
    NSString * _portName;
    unsigned int _port;
    struct _opaque_pthread_t * _thread;
    struct mig_subsystem * _subsystem;
    struct __CFRunLoopObserver * _entryObserver;
    struct __CFRunLoopObserver * _exitObserver;
}

@property (nonatomic) int threadPriority;
@property (readonly, nonatomic) NSString * threadName;

- (int)threadPriority;
- (void)setThreadPriority:(int)arg0;
- (void)dealloc;
- (BSMIGServer *)init;
- (void)_installAutoreleasePoolsIfNecessaryForMode:(struct __CFString *)arg0;
- (void *)_start;
- (unsigned int)port;
- (void)setThreadName:(NSString *)arg0;
- (unsigned int)_createPortNamed:(id)arg0;
- (BSMIGServer *)initWithPortName:(NSString *)arg0 subsystem:(struct mig_subsystem *)arg1 separateThread:(unsigned int)arg2;
- (NSString *)threadName;

@end
