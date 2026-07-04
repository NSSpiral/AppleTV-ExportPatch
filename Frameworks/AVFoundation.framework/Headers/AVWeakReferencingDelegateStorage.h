/* Runtime dump - AVWeakReferencingDelegateStorage
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage>
{
    NSObject<OS_dispatch_queue> * _delegateReadWriteQueue;
    AVWeakReference * _weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
}

@property (readonly, nonatomic) id delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (void)invokeDelegateCallbackWithBlock:(id /* block */)arg0;
- (void)_collectUncollectables;
- (void)getRetainedDelegate:(id *)arg0 retainedDelegateQueue:(id *)arg1;
- (void)dealloc;
- (AVWeakReferencingDelegateStorage *)init;
- (NSObject *)delegate;
- (NSObject *)_delegate;
- (void)_setDelegate:(NSObject *)arg0;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)finalize;
- (void)setDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;

@end
