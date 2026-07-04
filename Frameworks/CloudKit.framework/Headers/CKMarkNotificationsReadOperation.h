/* Runtime dump - CKMarkNotificationsReadOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKMarkNotificationsReadOperation : CKOperation
{
    NSArray * _notificationIDs;
    id _markNotificationsReadCompletionBlock;
    NSMutableArray * _notificationIDsMarkedRead;
    NSMutableDictionary * _errorsByNotificationID;
}

@property (copy, nonatomic) NSArray * notificationIDs;
@property (copy, nonatomic) id markNotificationsReadCompletionBlock;
@property (retain, nonatomic) NSMutableArray * notificationIDsMarkedRead;
@property (retain, nonatomic) NSMutableDictionary * errorsByNotificationID;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (NSMutableDictionary *)errorsByNotificationID;
- (void)setErrorsByNotificationID:(NSMutableDictionary *)arg0;
- (NSMutableArray *)notificationIDsMarkedRead;
- (void)setNotificationIDsMarkedRead:(NSMutableArray *)arg0;
- (id /* block */)markNotificationsReadCompletionBlock;
- (void)setMarkNotificationsReadCompletionBlock:(id /* block */)arg0;
- (CKMarkNotificationsReadOperation *)init;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)notificationIDs;
- (CKMarkNotificationsReadOperation *)initWithNotificationIDsToMarkRead:(id)arg0;
- (void)setNotificationIDs:(NSArray *)arg0;

@end
