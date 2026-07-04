/* Runtime dump - AAFamilyMember
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFamilyMember : NSObject
{
    char _isMe;
    char _isChild;
    char _isSharingPurchases;
    char _isOrganizer;
    char _areParentalControlsEnabled;
    char _isAskToBuyEnabled;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _appleID;
    NSNumber * _personID;
    NSString * _personIDHash;
    NSString * _title;
    NSDate * _joinDate;
    NSString * _iTunesNotLinkedMessage;
    NSString * _linkediTunesAppleID;
    NSNumber * _linkediTunesDSID;
}

@property (copy, nonatomic) NSString * firstName;
@property (copy, nonatomic) NSString * lastName;
@property (copy, nonatomic) NSString * appleID;
@property (copy, nonatomic) NSNumber * personID;
@property (copy, nonatomic) NSString * personIDHash;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSDate * joinDate;
@property (nonatomic) char isMe;
@property (nonatomic) char isChild;
@property (nonatomic) char isSharingPurchases;
@property (nonatomic) char isOrganizer;
@property (copy, nonatomic) NSString * iTunesNotLinkedMessage;
@property (copy, nonatomic) NSString * linkediTunesAppleID;
@property (copy, nonatomic) NSNumber * linkediTunesDSID;
@property (nonatomic) char areParentalControlsEnabled;
@property (nonatomic) char isAskToBuyEnabled;

- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void).cxx_destruct;
- (NSString *)personIDHash;
- (void)setPersonIDHash:(NSString *)arg0;
- (NSDate *)joinDate;
- (void)setJoinDate:(NSDate *)arg0;
- (char)isChild;
- (void)setIsChild:(char)arg0;
- (void)setIsSharingPurchases:(char)arg0;
- (char)isOrganizer;
- (void)setIsOrganizer:(char)arg0;
- (NSString *)iTunesNotLinkedMessage;
- (void)setITunesNotLinkedMessage:(NSString *)arg0;
- (void)setLinkediTunesAppleID:(NSString *)arg0;
- (NSNumber *)linkediTunesDSID;
- (void)setLinkediTunesDSID:(NSNumber *)arg0;
- (char)areParentalControlsEnabled;
- (void)setAreParentalControlsEnabled:(char)arg0;
- (char)isAskToBuyEnabled;
- (void)setIsAskToBuyEnabled:(char)arg0;
- (NSString *)linkediTunesAppleID;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (void)setIsMe:(char)arg0;
- (char)isMe;
- (void)setAppleID:(NSString *)arg0;
- (NSString *)appleID;
- (NSNumber *)personID;
- (void)setPersonID:(NSNumber *)arg0;
- (char)isSharingPurchases;

@end
