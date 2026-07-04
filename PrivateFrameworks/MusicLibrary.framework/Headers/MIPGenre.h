/* Runtime dump - MIPGenre
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPGenre : PBCodable <NSCopying>
{
    long long _persistentId;
    long long _storeId;
    NSString * _name;
    struct ? _has;
}

@property (nonatomic) char hasStoreId;
@property (nonatomic) long long storeId;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) char hasPersistentId;
@property (nonatomic) long long persistentId;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (MIPGenre *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (long long)persistentId;
- (void)setStoreId:(long long)arg0;
- (void)setHasStoreId:(char)arg0;
- (char)hasStoreId;
- (void)setPersistentId:(long long)arg0;
- (void)setHasPersistentId:(char)arg0;
- (char)hasPersistentId;
- (long long)storeId;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;

@end
