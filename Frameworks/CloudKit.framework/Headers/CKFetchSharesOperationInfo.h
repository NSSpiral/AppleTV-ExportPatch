/* Runtime dump - CKFetchSharesOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchSharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray * _shareIDs;
    NSArray * _zoneIDs;
}

@property (retain, nonatomic) NSArray * shareIDs;
@property (retain, nonatomic) NSArray * zoneIDs;

+ (char)supportsSecureCoding;

- (CKFetchSharesOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSArray *)zoneIDs;
- (void)setZoneIDs:(NSArray *)arg0;
- (NSArray *)shareIDs;
- (void)setShareIDs:(NSArray *)arg0;

@end
