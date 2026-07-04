/* Runtime dump - VKPShieldIndexTextEntry
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPShieldIndexTextEntry : PBCodable <NSCopying>
{
    NSString * _artworkIdentifier;
    NSMutableArray * _shieldTexts;
    int _shieldType;
    struct ? _has;
}

@property (readonly, nonatomic) char hasArtworkIdentifier;
@property (retain, nonatomic) NSString * artworkIdentifier;
@property (nonatomic) char hasShieldType;
@property (nonatomic) int shieldType;
@property (retain, nonatomic) NSMutableArray * shieldTexts;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VKPShieldIndexTextEntry *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (NSString *)artworkIdentifier;
- (int)shieldType;
- (NSMutableArray *)shieldTexts;
- (void)setArtworkIdentifier:(NSString *)arg0;
- (char)hasArtworkIdentifier;
- (void)setShieldTexts:(NSMutableArray *)arg0;
- (void)addShieldText:(NSString *)arg0;
- (unsigned int)shieldTextsCount;
- (void)clearShieldTexts;
- (NSObject *)shieldTextAtIndex:(unsigned int)arg0;
- (void)setShieldType:(int)arg0;
- (void)setHasShieldType:(char)arg0;
- (char)hasShieldType;

@end
