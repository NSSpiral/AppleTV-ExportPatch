/* Runtime dump - CKFetchChangedRecordZonesOperationResult
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchChangedRecordZonesOperationResult : CKOperationResult <NSSecureCoding>
{
    CKServerChangeToken * _serverChangeToken;
    NSNumber * _status;
}

@property (retain, nonatomic) CKServerChangeToken * serverChangeToken;
@property (retain, nonatomic) NSNumber * status;

+ (char)supportsSecureCoding;

- (CKFetchChangedRecordZonesOperationResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSNumber *)status;
- (void)setStatus:(NSNumber *)arg0;
- (CKServerChangeToken *)serverChangeToken;
- (void)setServerChangeToken:(CKServerChangeToken *)arg0;
- (NSString *)CKPropertiesDescription;

@end
