/* Runtime dump - CKUserIdentityFetchInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKUserIdentityFetchInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString * _emailAddress;
    CKRecordID * _recordID;
}

@property (copy, nonatomic) NSString * emailAddress;
@property (copy, nonatomic) CKRecordID * recordID;

+ (char)supportsSecureCoding;

- (CKUserIdentityFetchInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKUserIdentityFetchInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (CKRecordID *)recordID;
- (void)setRecordID:(CKRecordID *)arg0;
- (NSString *)CKPropertiesDescription;
- (NSString *)ckShortDescription;
- (NSString *)emailAddress;
- (CKUserIdentityFetchInfo *)initWithEmailAddress:(NSString *)arg0;
- (CKUserIdentityFetchInfo *)initWithUserRecordID:(CKRecordID *)arg0;
- (void)setEmailAddress:(NSString *)arg0;

@end
