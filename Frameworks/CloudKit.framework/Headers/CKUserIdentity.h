/* Runtime dump - CKUserIdentity
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKUserIdentity : NSObject <NSSecureCoding>
{
    char _hasiCloudAccount;
    char _hasiCloudAccountSupportingSharing;
    NSString * _firstName;
    NSString * _lastName;
    CKRecordID * _userRecordID;
    NSString * _emailAddress;
    NSData * _protectionData;
}

@property (readonly, copy, nonatomic) NSString * localizedDisplayName;
@property (copy, nonatomic) NSString * firstName;
@property (copy, nonatomic) NSString * lastName;
@property (copy, nonatomic) CKRecordID * userRecordID;
@property (copy, nonatomic) NSString * emailAddress;
@property (nonatomic) char hasiCloudAccount;
@property (nonatomic) char hasiCloudAccountSupportingSharing;
@property (retain, nonatomic) NSData * protectionData;

+ (char)supportsSecureCoding;

- (char)hasiCloudAccount;
- (char)hasiCloudAccountSupportingSharing;
- (CKUserIdentity *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKUserIdentity *)_init;
- (void).cxx_destruct;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (CKRecordID *)userRecordID;
- (NSString *)localizedDisplayName;
- (NSString *)CKPropertiesDescription;
- (NSString *)ckShortDescription;
- (void)setProtectionData:(NSData *)arg0;
- (NSData *)protectionData;
- (NSString *)emailAddress;
- (CKUserIdentity *)initWithEmailAddress:(NSString *)arg0;
- (void)setHasiCloudAccount:(char)arg0;
- (void)setHasiCloudAccountSupportingSharing:(char)arg0;
- (CKUserIdentity *)initWithUserRecordID:(CKRecordID *)arg0;
- (void)setEmailAddress:(NSString *)arg0;
- (void)setUserRecordID:(CKRecordID *)arg0;

@end
