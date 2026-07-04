/* Runtime dump - MSASSharingRelationship
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASSharingRelationship : NSObject <NSCopying>
{
    char _isMine;
    NSString * _GUID;
    NSString * _albumGUID;
    NSString * _email;
    NSArray * _emails;
    NSArray * _phones;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _fullName;
    NSString * _personID;
    NSDate * _subscriptionDate;
    int _state;
}

@property (retain, nonatomic) NSString * GUID;
@property (retain, nonatomic) NSString * albumGUID;
@property (retain, nonatomic) NSString * email;
@property (retain, nonatomic) NSArray * emails;
@property (retain, nonatomic) NSArray * phones;
@property (retain, nonatomic) NSString * fullName;
@property (retain, nonatomic) NSString * firstName;
@property (retain, nonatomic) NSString * lastName;
@property (retain, nonatomic) NSString * personID;
@property (retain, nonatomic) NSDate * subscriptionDate;
@property (nonatomic) int state;
@property (nonatomic) char isMine;

+ (char)supportsSecureCoding;
+ (NSDictionary *)MSASPSharingRelationshipFromProtocolDictionary:(NSDictionary *)arg0;

- (void)setEmail:(NSString *)arg0;
- (MSASSharingRelationship *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MSASSharingRelationship *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (MSASSharingRelationship *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (void)setSubscriptionDate:(NSDate *)arg0;
- (NSString *)_fullName;
- (char)isEqualToSharingRelationship:(id)arg0;
- (NSString *)personID;
- (NSString *)fullName;
- (void)setGUID:(NSSet *)arg0;
- (void)setFullName:(NSString *)arg0;
- (void)setPersonID:(NSString *)arg0;
- (NSString *)GUID;
- (NSDate *)subscriptionDate;
- (void)setIsMine:(char)arg0;
- (NSString *)albumGUID;
- (char)isMine;
- (void)setAlbumGUID:(NSString *)arg0;
- (NSString *)email;
- (NSArray *)emails;
- (NSArray *)phones;
- (void)setEmails:(NSArray *)arg0;
- (void)setPhones:(NSArray *)arg0;

@end
