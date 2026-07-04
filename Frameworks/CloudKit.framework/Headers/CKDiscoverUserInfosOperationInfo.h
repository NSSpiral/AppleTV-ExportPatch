/* Runtime dump - CKDiscoverUserInfosOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoverUserInfosOperationInfo : CKOperationInfo <NSSecureCoding>
{
    char _shouldDiscoverAllContacts;
    NSArray * _emails;
    NSArray * _userRecordIDs;
}

@property (retain, nonatomic) NSArray * emails;
@property (retain, nonatomic) NSArray * userRecordIDs;
@property (nonatomic) char shouldDiscoverAllContacts;

+ (char)supportsSecureCoding;

- (void)setUserRecordIDs:(NSArray *)arg0;
- (void)setShouldDiscoverAllContacts:(char)arg0;
- (char)shouldDiscoverAllContacts;
- (CKDiscoverUserInfosOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSArray *)userRecordIDs;
- (NSArray *)emails;
- (void)setEmails:(NSArray *)arg0;

@end
