/* Runtime dump - CKDMarkNotificationsReadURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMarkNotificationsReadURLRequest : CKDURLRequest
{
    id _notificationMarkedReadProgressBlock;
    NSArray * _notificationIDs;
    NSMutableDictionary * _notificationIDsByRequestID;
}

@property (copy, nonatomic) id notificationMarkedReadProgressBlock;
@property (retain, nonatomic) NSArray * notificationIDs;
@property (retain, nonatomic) NSMutableDictionary * notificationIDsByRequestID;

- (void).cxx_destruct;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSArray *)zoneIDsToLock;
- (NSArray *)notificationIDs;
- (CKDMarkNotificationsReadURLRequest *)initWithNotificationIDsToMarkRead:(id)arg0;
- (void)setNotificationMarkedReadProgressBlock:(id /* block */)arg0;
- (void)setNotificationIDs:(NSArray *)arg0;
- (NSMutableDictionary *)notificationIDsByRequestID;
- (void)setNotificationIDsByRequestID:(NSMutableDictionary *)arg0;
- (id /* block */)notificationMarkedReadProgressBlock;
- (int)operationType;

@end
