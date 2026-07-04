/* Runtime dump - TLAccessQueue
 * Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAccessQueue : NSObject
{
    NSString * _label;
    NSString * _threadLocalStorageKey;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSString * _threadLocalStorageKey;
@property (nonatomic) NSObject<OS_dispatch_queue> * _serialQueue;

- (void)dealloc;
- (NSString *)label;
- (TLAccessQueue *)initWithLabel:(NSString *)arg0 appendUUIDToLabel:(char)arg1;
- (NSObject<OS_dispatch_queue> *)_serialQueue;
- (void)_setLabel:(NSString *)arg0;
- (void)performSynchronousBlock:(id /* block */)arg0;
- (void)_setThreadLocalStorageKey:(NSString *)arg0;
- (void)_setSerialQueue:(NSObject *)arg0;
- (NSString *)_threadLocalStorageKey;
- (void)_performSynchronousBlockInSerialQueue:(NSObject *)arg0;
- (void)performAsynchronousBlock:(id /* block */)arg0;

@end
