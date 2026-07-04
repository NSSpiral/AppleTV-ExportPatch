/* Runtime dump - CKDModifyBadgeOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyBadgeOperation : CKDDatabaseOperation
{
    unsigned int _badgeValue;
}

@property (readonly, nonatomic) unsigned int badgeValue;

- (unsigned int)badgeValue;
- (void)main;
- (CKDModifyBadgeOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;

@end
