/* Runtime dump - TSUProgressGroup
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUProgressGroup : TSUProgress
{
    NSArray * mChildren;
    NSArray * mChildrenProgressObservers;
    NSObject<OS_dispatch_queue> * mChildrenProgressObserversQueue;
}

- (void)dealloc;
- (double)value;
- (char)isIndeterminate;
- (double)maxValue;
- (id)addProgressObserverWithValueInterval:(double)arg0 queue:(NSObject *)arg1 handler:(id /* block */)arg2;
- (void)removeProgressObserver:(NSObject *)arg0;
- (void)p_updateChildrenProgressObservers;
- (TSUProgressGroup *)initWithChildren:(NSArray *)arg0;

@end
