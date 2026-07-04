/* Runtime dump - CKDQueuedShareFetch
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDQueuedShareFetch : CKDQueuedFetch

- (Class)operationInfoClass;
- (NSObject *)fetchOperation;
- (void)addRequestForShareID:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;

@end
