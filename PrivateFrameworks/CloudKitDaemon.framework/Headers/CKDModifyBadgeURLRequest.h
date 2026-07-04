/* Runtime dump - CKDModifyBadgeURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyBadgeURLRequest : CKDURLRequest
{
    unsigned int _badgeValue;
}

@property (readonly, nonatomic) unsigned int badgeValue;

- (unsigned int)badgeValue;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (NSArray *)requestOperationClasses;
- (CKDModifyBadgeURLRequest *)initWithBadgeValue:(unsigned int)arg0;
- (int)operationType;

@end
