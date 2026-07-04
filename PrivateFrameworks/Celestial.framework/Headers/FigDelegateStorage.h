/* Runtime dump - FigDelegateStorage
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigDelegateStorage : NSObject
{
    NSObject<OS_dispatch_queue> * _delegateQueue;
    id _delegate;
    int _lock;
}

@property (readonly) id delegate;
@property (readonly) NSObject<OS_dispatch_queue> * delegateQueue;

+ (void)initialize;

- (void)invokeDelegateCallbackWithBlock:(id /* block */)arg0;
- (void)dealloc;
- (FigDelegateStorage *)init;
- (NSObject *)delegate;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)setDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;

@end
