/* Runtime dump - BSDispatchSource
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSDispatchSource : NSObject
{
    NSObject<OS_dispatch_source> * _source;
    NSObject<OS_dispatch_queue> * _queue;
    char _invalidated;
    id _eventHandler;
    id _cancelHandler;
}

@property (copy, nonatomic) id eventHandler;
@property (copy, nonatomic) id cancelHandler;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> * queue;

- (void)setCancelHandler:(id /* block */)arg0;
- (id /* block */)eventHandler;
- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (BSDispatchSource *)initWithType:(struct dispatch_source_type_s *)arg0 handle:(unsigned long)arg1 mask:(unsigned long)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 configureSourceBlock:(id /* block */)arg4;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setEventHandler:(id /* block */)arg0;
- (id /* block */)cancelHandler;

@end
