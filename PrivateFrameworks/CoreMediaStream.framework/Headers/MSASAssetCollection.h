/* Runtime dump - MSASAssetCollection
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAssetCollection : NSObject <NSCopying>
{
    char _hasComments;
    char _isDeletable;
    char _isMine;
    NSString * _GUID;
    NSString * _ctag;
    NSString * _albumGUID;
    NSArray * _assets;
    NSString * _fileName;
    NSString * _path;
    <NSCoding> * _userInfo;
    NSDictionary * _metadata;
    NSDate * _timestamp;
    NSString * _personID;
    NSString * _fullName;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _email;
    long long _photoNumber;
}

@property (retain, nonatomic) NSString * GUID;
@property (retain, nonatomic) NSString * ctag;
@property (retain, nonatomic) NSString * albumGUID;
@property (retain, nonatomic) NSArray * assets;
@property (retain, nonatomic) NSString * fileName;
@property (retain, nonatomic) NSString * path;
@property (retain, nonatomic) <NSCoding> * userInfo;
@property (retain, nonatomic) NSDictionary * metadata;
@property (nonatomic) long long photoNumber;
@property (retain, nonatomic) NSDate * timestamp;
@property (retain, nonatomic) NSString * personID;
@property (retain, nonatomic) NSString * fullName;
@property (retain, nonatomic) NSString * firstName;
@property (retain, nonatomic) NSString * lastName;
@property (retain, nonatomic) NSString * email;
@property (nonatomic) char isDeletable;
@property (nonatomic) char isMine;
@property (nonatomic) char hasComments;

+ (char)supportsSecureCoding;
+ (MSASAssetCollection *)assetCollectionWithAssetCollection:(id)arg0;
+ (NSDictionary *)MSASPAssetCollectionFromProtocolDictionary:(NSDictionary *)arg0;

- (void)setEmail:(NSString *)arg0;
- (NSString *)fileName;
- (MSASAssetCollection *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSDate *)timestamp;
- (void)setTimestamp:(NSDate *)arg0;
- (void)setUserInfo:(<NSCoding> *)arg0;
- (NSString *)path;
- (MSASAssetCollection *)copyWithZone:(struct _NSZone *)arg0;
- (<NSCoding> *)userInfo;
- (void)setPath:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (NSString *)ctag;
- (void)setCtag:(NSString *)arg0;
- (long long)photoNumber;
- (void)setPhotoNumber:(long long)arg0;
- (MSASAssetCollection *)initWithFileName:(NSString *)arg0 path:(NSString *)arg1;
- (void)setHasComments:(char)arg0;
- (NSDictionary *)MSASPProtocolDictionary;
- (char)hasComments;
- (NSArray *)assets;
- (NSString *)personID;
- (NSString *)fullName;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (void)setGUID:(NSSet *)arg0;
- (void)setFullName:(NSString *)arg0;
- (void)setPersonID:(NSString *)arg0;
- (void)setAssets:(NSArray *)arg0;
- (NSString *)GUID;
- (void)setMetadataValue:(id)arg0 forKey:(NSString *)arg1;
- (void)setFileName:(NSString *)arg0;
- (void)setIsDeletable:(char)arg0;
- (void)setIsMine:(char)arg0;
- (NSString *)albumGUID;
- (char)isMine;
- (char)hasVideoAsset;
- (char)isDeletable;
- (unsigned int)mediaAssetType;
- (void)setAlbumGUID:(NSString *)arg0;
- (NSString *)email;

@end
