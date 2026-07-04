/* Runtime dump - CKNotificationID
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKNotificationID : NSObject <NSCopying, NSSecureCoding>
{
    NSString * _notificationUUID;
}

@property (copy, nonatomic) NSString * notificationUUID;

+ (char)supportsSecureCoding;

- (CKNotificationID *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKNotificationID *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)CKPropertiesDescription;
- (void)setNotificationUUID:(NSString *)arg0;
- (NSString *)notificationUUID;

@end
