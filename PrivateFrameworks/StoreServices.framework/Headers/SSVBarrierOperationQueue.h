/* Runtime dump - SSVBarrierOperationQueue
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVBarrierOperationQueue : NSOperationQueue

- (void)addOperations:(NSArray *)arg0 waitUntilFinished:(char)arg1;
- (void)addOperationWithBlock:(id /* block */)arg0;
- (void)addOperation:(NSObject *)arg0;
- (void)addBarrierOperation:(NSObject *)arg0;

@end
