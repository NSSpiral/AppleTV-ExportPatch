/* Runtime dump - CKDMarkNotificationsReadOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMarkNotificationsReadOperation : CKDOperation
{
    id _notificationMarkedRead;
    NSArray * _notificationIDs;
    NSMutableDictionary * _errorByNotificationID;
    NSMutableSet * _successfulNotificationIDs;
}

@property (copy, nonatomic) id notificationMarkedRead;
@property (retain, nonatomic) NSArray * notificationIDs;
@property (retain, nonatomic) NSMutableDictionary * errorByNotificationID;
@property (retain, nonatomic) NSMutableSet * successfulNotificationIDs;

- (void)main;
- (void).cxx_destruct;
- (CKDMarkNotificationsReadOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setNotificationMarkedRead:(id)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)notificationIDs;
- (NSMutableSet *)successfulNotificationIDs;
- (NSMutableDictionary *)errorByNotificationID;
- (void)_handleNotificationID:(NSNotification *)arg0 withResponse:(NSURLResponse *)arg1;
- (id)notificationMarkedRead;
- (void)setNotificationIDs:(NSArray *)arg0;
- (void)setErrorByNotificationID:(NSMutableDictionary *)arg0;
- (void)setSuccessfulNotificationIDs:(NSMutableSet *)arg0;

@end
