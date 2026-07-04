/* Runtime dump - IMMultiQueue
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMMultiQueue : NSObject
{
    NSMutableDictionary * _queueMap;
}

- (void)dealloc;
- (void)_popEnqueuedBlockWithGUID:(NSString *)arg0 key:(NSString *)arg1;
- (void)_addBlock:(id /* block */)arg0 withGUID:(/* block */ id)arg1 forKey:(NSString *)arg2 description:(NSString *)arg3;
- (void)addBlock:(id /* block */)arg0 withTimeout:(/* block */ id)arg1 forKey:(double)arg2 description:(NSString *)arg3;
- (void)addBlock:(id /* block */)arg0 forKey:(/* block */ id)arg1 description:(NSString *)arg2;

@end
