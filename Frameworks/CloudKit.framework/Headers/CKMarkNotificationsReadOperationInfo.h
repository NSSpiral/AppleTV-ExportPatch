/* Runtime dump - CKMarkNotificationsReadOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKMarkNotificationsReadOperationInfo : CKOperationInfo
{
    NSArray * _notificationIDs;
}

@property (retain, nonatomic) NSArray * notificationIDs;

+ (char)supportsSecureCoding;

- (CKMarkNotificationsReadOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSArray *)notificationIDs;
- (void)setNotificationIDs:(NSArray *)arg0;

@end
