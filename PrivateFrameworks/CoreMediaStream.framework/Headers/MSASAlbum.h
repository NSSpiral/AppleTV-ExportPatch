/* Runtime dump - MSASAlbum
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAlbum : NSObject <NSCopying>
{
    char _isFamilySharedAlbum;
    NSString * _ownerEmail;
    NSString * _ownerPersonID;
    NSString * _ownerFullName;
    NSString * _ownerFirstName;
    NSString * _ownerLastName;
    NSDate * _subscriptionDate;
    NSString * _GUID;
    NSString * _ctag;
    int _relationshipState;
    NSString * _foreignCtag;
    NSString * _URLString;
    NSString * _publicURLString;
    NSDictionary * _metadata;
    id _context;
}

@property (retain, nonatomic) NSString * ownerEmail;
@property (retain, nonatomic) NSString * ownerFullName;
@property (retain, nonatomic) NSString * ownerPersonID;
@property (retain, nonatomic) NSString * ownerFirstName;
@property (retain, nonatomic) NSString * ownerLastName;
@property (retain, nonatomic) NSDate * subscriptionDate;
@property (retain, nonatomic) NSString * GUID;
@property (retain, nonatomic) NSString * ctag;
@property (nonatomic) int relationshipState;
@property (retain, nonatomic) NSString * foreignCtag;
@property (retain, nonatomic) NSString * URLString;
@property (retain, nonatomic) NSString * publicURLString;
@property (retain, nonatomic) NSDictionary * metadata;
@property (retain, nonatomic) id context;
@property (nonatomic) char isFamilySharedAlbum;
@property (readonly, nonatomic) char useForeignCtag;

+ (char)supportsSecureCoding;
+ (MSASAlbum *)albumWithAlbum:(id)arg0;
+ (struct NSObject *)album;

- (MSASAlbum *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MSASAlbum *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (void).cxx_destruct;
- (NSString *)URLString;
- (void)setURLString:(NSString *)arg0;
- (NSString *)ownerFirstName;
- (NSString *)ownerLastName;
- (void)setOwnerFirstName:(NSString *)arg0;
- (void)setOwnerLastName:(NSString *)arg0;
- (NSString *)ctag;
- (void)setCtag:(NSString *)arg0;
- (void)setOwnerEmail:(NSString *)arg0;
- (void)setOwnerPersonID:(NSString *)arg0;
- (void)setOwnerFullName:(NSString *)arg0;
- (void)setSubscriptionDate:(NSDate *)arg0;
- (void)setRelationshipState:(int)arg0;
- (NSString *)foreignCtag;
- (void)setForeignCtag:(NSString *)arg0;
- (void)setIsFamilySharedAlbum:(char)arg0;
- (char)useForeignCtag;
- (void)setPublicURLString:(NSString *)arg0;
- (NSString *)metadataValueForKey:(NSString *)arg0;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (void)setGUID:(NSSet *)arg0;
- (NSString *)GUID;
- (NSString *)publicURLString;
- (int)relationshipState;
- (char)isFamilySharedAlbum;
- (NSString *)ownerEmail;
- (NSString *)ownerFullName;
- (NSString *)ownerPersonID;
- (NSDate *)subscriptionDate;
- (void)setMetadataValue:(id)arg0 forKey:(NSString *)arg1;

@end
