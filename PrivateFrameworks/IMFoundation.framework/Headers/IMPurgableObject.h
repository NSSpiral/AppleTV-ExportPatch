/* Runtime dump - IMPurgableObject
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMPurgableObject : NSObject
{
    id _instanceObject;
    id _setupBlock;
    id _cleanupBlock;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void)dealloc;
- (void)_cleanupInstance;
- (void)_setupInstance;
- (IMPurgableObject *)initWithSetupBlock:(id /* block */)arg0 cleanupBlock:(/* block */ id)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (id)instance;
- (void)_receivedMemoryWarning:(id)arg0;

@end
