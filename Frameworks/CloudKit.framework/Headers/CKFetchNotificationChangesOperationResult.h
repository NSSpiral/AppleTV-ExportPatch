/* Runtime dump - CKFetchNotificationChangesOperationResult
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchNotificationChangesOperationResult : CKOperationResult <NSSecureCoding>
{
    char _moreComing;
    CKServerChangeToken * _serverChangeToken;
}

@property (retain, nonatomic) CKServerChangeToken * serverChangeToken;
@property (nonatomic) char moreComing;

+ (char)supportsSecureCoding;

- (CKFetchNotificationChangesOperationResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (char)moreComing;
- (CKServerChangeToken *)serverChangeToken;
- (void)setServerChangeToken:(CKServerChangeToken *)arg0;
- (NSString *)CKPropertiesDescription;
- (void)setMoreComing:(char)arg0;

@end
