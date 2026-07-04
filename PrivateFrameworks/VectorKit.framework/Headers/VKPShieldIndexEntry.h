/* Runtime dump - VKPShieldIndexEntry
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPShieldIndexEntry : PBCodable <NSCopying>
{
    struct ? _defaultForFeatureTypes;
    struct ? _shieldTypes;
    NSString * _artworkIdentifier;
}

@property (readonly, nonatomic) char hasArtworkIdentifier;
@property (retain, nonatomic) NSString * artworkIdentifier;
@property (readonly, nonatomic) unsigned int shieldTypesCount;
@property (readonly, nonatomic) int * shieldTypes;
@property (readonly, nonatomic) unsigned int defaultForFeatureTypesCount;
@property (readonly, nonatomic) int * defaultForFeatureTypes;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VKPShieldIndexEntry *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (unsigned int)shieldTypesCount;
- (int *)shieldTypes;
- (NSString *)artworkIdentifier;
- (unsigned int)defaultForFeatureTypesCount;
- (int)defaultForFeatureTypeAtIndex:(unsigned int)arg0;
- (void)setArtworkIdentifier:(NSString *)arg0;
- (void)clearShieldTypes;
- (int)shieldTypesAtIndex:(unsigned int)arg0;
- (void)addShieldTypes:(int)arg0;
- (void)clearDefaultForFeatureTypes;
- (void)addDefaultForFeatureType:(int)arg0;
- (char)hasArtworkIdentifier;
- (void)setShieldTypes:(int *)arg0 count:(unsigned int)arg1;
- (int *)defaultForFeatureTypes;
- (void)setDefaultForFeatureTypes:(int *)arg0 count:(unsigned int)arg1;

@end
