/* Runtime dump - CKDQueuedRecordFetch
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDQueuedRecordFetch : CKDQueuedFetch

- (Class)operationInfoClass;
- (void)addRequestForRecordID:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (NSObject *)fetchOperation;

@end
