/* Runtime dump - MIPAlbum
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPAlbum : PBCodable <NSCopying>
{
    long long _persistentId;
    long long _storeId;
    MIPArtist * _artist;
    NSString * _artworkId;
    NSString * _name;
    int _numDiscs;
    int _numTracks;
    NSString * _sortName;
    int _userRating;
    char _compilation;
    struct ? _has;
}

@property (nonatomic) char hasStoreId;
@property (nonatomic) long long storeId;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (readonly, nonatomic) char hasSortName;
@property (retain, nonatomic) NSString * sortName;
@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) MIPArtist * artist;
@property (nonatomic) char hasNumTracks;
@property (nonatomic) int numTracks;
@property (nonatomic) char hasNumDiscs;
@property (nonatomic) int numDiscs;
@property (readonly, nonatomic) char hasArtworkId;
@property (retain, nonatomic) NSString * artworkId;
@property (nonatomic) char hasUserRating;
@property (nonatomic) int userRating;
@property (nonatomic) char hasCompilation;
@property (nonatomic) char compilation;
@property (nonatomic) char hasPersistentId;
@property (nonatomic) long long persistentId;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (MIPAlbum *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setArtist:(MIPArtist *)arg0;
- (char)hasArtist;
- (MIPArtist *)artist;
- (void)setUserRating:(int)arg0;
- (void)setHasUserRating:(char)arg0;
- (char)hasUserRating;
- (int)userRating;
- (long long)persistentId;
- (void)setStoreId:(long long)arg0;
- (void)setHasStoreId:(char)arg0;
- (char)hasStoreId;
- (void)setPersistentId:(long long)arg0;
- (void)setHasPersistentId:(char)arg0;
- (char)hasPersistentId;
- (long long)storeId;
- (void)setSortName:(NSString *)arg0;
- (char)hasSortName;
- (NSString *)sortName;
- (void)setArtworkId:(NSString *)arg0;
- (void)setNumTracks:(int)arg0;
- (void)setHasNumTracks:(char)arg0;
- (char)hasNumTracks;
- (void)setNumDiscs:(int)arg0;
- (void)setHasNumDiscs:(char)arg0;
- (char)hasNumDiscs;
- (char)hasArtworkId;
- (void)setCompilation:(char)arg0;
- (void)setHasCompilation:(char)arg0;
- (char)hasCompilation;
- (int)numTracks;
- (int)numDiscs;
- (NSString *)artworkId;
- (char)compilation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;

@end
