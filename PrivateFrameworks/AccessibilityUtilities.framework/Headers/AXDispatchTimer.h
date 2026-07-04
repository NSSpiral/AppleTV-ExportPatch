/* Runtime dump - AXDispatchTimer
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXDispatchTimer : NSObject <AXTimer>
{
    char _active;
    char _pending;
    char _cancelled;
    char _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSObject<OS_dispatch_source> * _dispatchTimer;
}

@property (nonatomic) char cancelled;
@property (nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (nonatomic) char active;
@property (nonatomic) char pending;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * dispatchTimer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)cancel;
- (void)dealloc;
- (AXDispatchTimer *)init;
- (char)isActive;
- (char)isCancelled;
- (void)setCancelled:(char)arg0;
- (void)setActive:(char)arg0;
- (void)_reallyCancel;
- (char)automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)setDispatchTimer:(NSObject<OS_dispatch_source> *)arg0;
- (NSObject<OS_dispatch_source> *)dispatchTimer;
- (void)afterDelay:(double)arg0 processBlock:(id /* block */)arg1;
- (void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(char)arg0;
- (void)afterDelay:(double)arg0 processBlock:(id /* block */)arg1 cancelBlock:(/* block */ id)arg2;
- (AXDispatchTimer *)initWithTargetSerialQueue:(NSObject *)arg0;
- (void)setPending:(char)arg0;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)isPending;

@end
