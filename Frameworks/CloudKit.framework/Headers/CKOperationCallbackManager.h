/* Runtime dump - CKOperationCallbackManager
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationCallbackManager : NSObject
{
    NSMutableDictionary * _progressCallbacks;
    NSMutableDictionary * _completionCallbacks;
}

@property (retain) NSMutableDictionary * progressCallbacks;
@property (retain) NSMutableDictionary * completionCallbacks;

- (void)removeAllCallbacks;
- (void)registerProgressCallback:(id /* block */)arg0 forOperation:(/* block */ id)arg1;
- (void)registerCompletionCallback:(id /* block */)arg0 forOperation:(/* block */ id)arg1;
- (void)unregisterAllCallbacksForOperation:(NSObject *)arg0;
- (NSMutableDictionary *)progressCallbacks;
- (NSMutableDictionary *)completionCallbacks;
- (void)setProgressCallbacks:(NSMutableDictionary *)arg0;
- (void)setCompletionCallbacks:(NSMutableDictionary *)arg0;
- (CKOperationCallbackManager *)init;
- (void).cxx_destruct;
- (void)handleOperationProgress:(id)arg0 forOperationWithID:(int)arg1;
- (void)handleOperationCompletion:(id /* block */)arg0 forOperationWithID:(int)arg1;

@end
