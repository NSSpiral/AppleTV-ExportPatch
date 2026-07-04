/* Runtime dump - CKFetchRecordChangesOperationResult
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordChangesOperationResult : CKOperationResult <NSSecureCoding>
{
    CKServerChangeToken * _serverChangeToken;
    NSData * _clientChangeTokenData;
    NSNumber * _status;
}

@property (retain, nonatomic) CKServerChangeToken * serverChangeToken;
@property (retain, nonatomic) NSData * clientChangeTokenData;
@property (retain, nonatomic) NSNumber * status;

+ (char)supportsSecureCoding;

- (CKFetchRecordChangesOperationResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSNumber *)status;
- (void)setStatus:(NSNumber *)arg0;
- (CKServerChangeToken *)serverChangeToken;
- (void)setServerChangeToken:(CKServerChangeToken *)arg0;
- (void)setClientChangeTokenData:(NSData *)arg0;
- (NSString *)CKPropertiesDescription;
- (NSData *)clientChangeTokenData;

@end
