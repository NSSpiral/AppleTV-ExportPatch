/* Runtime dump - SSVFamilyContentDeletionEvent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVFamilyContentDeletionEvent : NSObject
{
    NSArray * _deletedAccounts;
}

@property (readonly, nonatomic) NSArray * deletedAccounts;

+ (SSVFamilyContentDeletionEvent *)notificationPayloadWithAccountPairs:(id)arg0;
+ (void)postDistributedNotificationWithAccountPairs:(id)arg0;

- (void).cxx_destruct;
- (SSVFamilyContentDeletionEvent *)initWithNotificationUserInfo:(NSDictionary *)arg0;
- (SSVFamilyContentDeletionEvent *)initWithXPCEventStreamEvent:(NSObject *)arg0;
- (NSArray *)deletedAccounts;

@end
