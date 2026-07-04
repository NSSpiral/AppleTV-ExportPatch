/* Runtime dump - CKDiscoveredUserInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoveredUserInfo : NSObject <NSSecureCoding, NSCopying>
{
    CKRecordID * _userRecordID;
    NSString * _firstName;
    NSString * _lastName;
    void * _oldDisplayContact;
}

@property (copy, nonatomic) CKRecordID * userRecordID;
@property (copy, nonatomic) NSString * firstName;
@property (copy, nonatomic) NSString * lastName;
@property (readonly, nonatomic) void * oldDisplayContact;

+ (char)supportsSecureCoding;

- (void *)oldDisplayContact;
- (CKDiscoveredUserInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDiscoveredUserInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (CKRecordID *)userRecordID;
- (NSString *)CKPropertiesDescription;
- (CKDiscoveredUserInfo *)initWithUserRecordID:(CKRecordID *)arg0 firstName:(NSString *)arg1 lastName:(NSString *)arg2;
- (void)setUserRecordID:(CKRecordID *)arg0;

@end
