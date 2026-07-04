/* Runtime dump - FAFamilyMember
 * Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilyMember : NSObject <NSSecureCoding>
{
    NSDictionary * _dictionary;
}

@property (readonly, nonatomic) char isMe;
@property (readonly, copy, nonatomic) NSString * appleID;
@property (readonly, copy, nonatomic) NSNumber * dsid;
@property (readonly, copy, nonatomic) NSString * hashedDSID;
@property (readonly, copy, nonatomic) NSString * firstName;
@property (readonly, copy, nonatomic) NSString * lastName;
@property (readonly, nonatomic) unsigned int age;
@property (readonly, copy, nonatomic) NSString * memberTypeDisplayString;
@property (readonly, copy, nonatomic) NSString * memberTypeString;
@property (readonly, copy, nonatomic) NSDate * joinedDate;
@property (readonly, copy, nonatomic) NSString * statusString;
@property (readonly, copy, nonatomic) NSString * inviteEmail;
@property (readonly, nonatomic) char isChildAccount;
@property (readonly, nonatomic) char hasParentalControlsEnabled;
@property (readonly, nonatomic) char hasAskToBuyEnabled;
@property (readonly, nonatomic) char isParent;
@property (readonly, nonatomic) char hasLinkediTunesAccount;
@property (readonly, nonatomic) NSNumber * iTunesAccountDSID;
@property (readonly, copy, nonatomic) NSString * iTunesAccountUsername;
@property (readonly, copy, nonatomic) NSDictionary * dictionary;

+ (char)supportsSecureCoding;

- (FAFamilyMember *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSDictionary *)dictionary;
- (void).cxx_destruct;
- (NSNumber *)iTunesAccountDSID;
- (NSString *)firstName;
- (NSString *)lastName;
- (NSNumber *)dsid;
- (char)isChildAccount;
- (NSString *)hashedDSID;
- (NSString *)memberTypeString;
- (char)hasParentalControlsEnabled;
- (char)isParent;
- (void)fetchFamilyPhotoWithRequestedSize:(unsigned int)arg0 fallbackToLocalAddressBook:(char)arg1 completionHandler:(id /* block */)arg2;
- (NSString *)memberTypeDisplayString;
- (NSDate *)joinedDate;
- (NSString *)inviteEmail;
- (char)hasAskToBuyEnabled;
- (NSString *)iTunesAccountUsername;
- (char)hasLinkediTunesAccount;
- (void)fetchFamilyPhotoWithRequestedSize:(unsigned int)arg0 completionHandler:(id /* block */)arg1;
- (char)isMe;
- (NSString *)statusString;
- (NSString *)appleID;
- (unsigned int)age;
- (FAFamilyMember *)initWithDictionaryRepresentation:(NSDictionary *)arg0;

@end
