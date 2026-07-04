/* Runtime dump - PLKQueue
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLKQueue : NSObject
{
    char _enabled;
    int _kQueue;
    int _fileDescriptor;
    struct __CFRunLoopSource * _kqueueDescriptorSource;
    struct __CFFileDescriptor * _kqueueDescriptorRef;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id _kQueueBlock;
}

@property (nonatomic) char enabled;
@property int kQueue;
@property int fileDescriptor;
@property struct __CFRunLoopSource * kqueueDescriptorSource;
@property struct __CFFileDescriptor * kqueueDescriptorRef;
@property (copy) NSString * path;
@property (retain) NSObject<OS_dispatch_queue> * dispatchQueue;
@property (copy, nonatomic) id kQueueBlock;

- (NSString *)path;
- (void)setEnabled:(char)arg0;
- (char)enabled;
- (void)setPath:(NSString *)arg0;
- (void).cxx_destruct;
- (int)fileDescriptor;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setFileDescriptor:(int)arg0;
- (PLKQueue *)initWithPath:(NSString *)arg0 withDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1 withBlock:(id /* block */)arg2;
- (int)kQueue;
- (void)setKQueue:(int)arg0;
- (void)setKqueueDescriptorRef:(struct __CFFileDescriptor *)arg0;
- (struct __CFFileDescriptor *)kqueueDescriptorRef;
- (void)setKqueueDescriptorSource:(struct __CFRunLoopSource *)arg0;
- (struct __CFRunLoopSource *)kqueueDescriptorSource;
- (id /* block */)kQueueBlock;
- (void)setKQueueBlock:(id /* block */)arg0;

@end
