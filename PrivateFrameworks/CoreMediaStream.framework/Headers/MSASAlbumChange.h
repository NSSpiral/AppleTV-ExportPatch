/* Runtime dump - MSASAlbumChange
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAlbumChange : NSObject
{
    char _wasDeleted;
    NSString * _GUID;
    NSString * _ownerEmail;
    NSString * _ownerPersonID;
    NSString * _ownerFullName;
    NSString * _ownerFirstName;
    NSString * _ownerLastName;
    NSString * _URLString;
    MSASInvitation * _invitation;
    NSString * _name;
}

@property (copy, nonatomic) NSString * ownerEmail;
@property (copy, nonatomic) NSString * ownerPersonID;
@property (copy, nonatomic) NSString * ownerFullName;
@property (copy, nonatomic) NSString * ownerFirstName;
@property (copy, nonatomic) NSString * ownerLastName;
@property (retain, nonatomic) NSString * GUID;
@property (retain, nonatomic) NSString * URLString;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) char wasDeleted;
@property (retain, nonatomic) MSASInvitation * invitation;

- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (NSString *)URLString;
- (void)setURLString:(NSString *)arg0;
- (NSString *)ownerFirstName;
- (NSString *)ownerLastName;
- (void)setOwnerFirstName:(NSString *)arg0;
- (void)setOwnerLastName:(NSString *)arg0;
- (char)wasDeleted;
- (void)setWasDeleted:(char)arg0;
- (MSASInvitation *)invitation;
- (void)setInvitation:(MSASInvitation *)arg0;
- (void)setOwnerEmail:(NSString *)arg0;
- (void)setOwnerPersonID:(NSString *)arg0;
- (void)setOwnerFullName:(NSString *)arg0;
- (void)setGUID:(NSSet *)arg0;
- (NSString *)GUID;
- (NSString *)ownerEmail;
- (NSString *)ownerFullName;
- (NSString *)ownerPersonID;

@end
