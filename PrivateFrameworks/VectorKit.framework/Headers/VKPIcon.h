/* Runtime dump - VKPIcon
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPIcon : PBCodable <NSCopying>
{
    unsigned long long _matchingStyleAttributeLongValue;
    unsigned int _anchorPointX;
    unsigned int _anchorPointY;
    unsigned int _atlasIndex;
    unsigned int _iconRectHeight;
    unsigned int _iconRectWidth;
    unsigned int _iconRectX;
    unsigned int _iconRectY;
    unsigned int _matchingStyleAttributeKey;
    int _matchingStyleAttributeValue;
    NSString * _name;
    unsigned int _quadIndex;
    int _size;
    struct ? _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) unsigned int atlasIndex;
@property (nonatomic) unsigned int quadIndex;
@property (nonatomic) char hasAnchorPointX;
@property (nonatomic) unsigned int anchorPointX;
@property (nonatomic) char hasAnchorPointY;
@property (nonatomic) unsigned int anchorPointY;
@property (nonatomic) char hasIconRectX;
@property (nonatomic) unsigned int iconRectX;
@property (nonatomic) char hasIconRectY;
@property (nonatomic) unsigned int iconRectY;
@property (nonatomic) char hasIconRectWidth;
@property (nonatomic) unsigned int iconRectWidth;
@property (nonatomic) char hasIconRectHeight;
@property (nonatomic) unsigned int iconRectHeight;
@property (nonatomic) char hasMatchingStyleAttributeKey;
@property (nonatomic) unsigned int matchingStyleAttributeKey;
@property (nonatomic) char hasMatchingStyleAttributeValue;
@property (nonatomic) int matchingStyleAttributeValue;
@property (nonatomic) char hasMatchingStyleAttributeLongValue;
@property (nonatomic) unsigned long long matchingStyleAttributeLongValue;
@property (nonatomic) char hasSize;
@property (nonatomic) int size;

- (void)dealloc;
- (int)size;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (VKPIcon *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSize:(int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasName;
- (unsigned int)atlasIndex;
- (unsigned int)quadIndex;
- (char)hasMatchingStyleAttributeKey;
- (char)hasMatchingStyleAttributeValue;
- (unsigned int)matchingStyleAttributeKey;
- (unsigned long long)matchingStyleAttributeLongValue;
- (int)matchingStyleAttributeValue;
- (char)hasSize;
- (void)setAnchorPointX:(unsigned int)arg0;
- (void)setHasAnchorPointX:(char)arg0;
- (char)hasAnchorPointX;
- (void)setAnchorPointY:(unsigned int)arg0;
- (void)setHasAnchorPointY:(char)arg0;
- (char)hasAnchorPointY;
- (void)setIconRectX:(unsigned int)arg0;
- (void)setHasIconRectX:(char)arg0;
- (char)hasIconRectX;
- (void)setIconRectY:(unsigned int)arg0;
- (void)setHasIconRectY:(char)arg0;
- (char)hasIconRectY;
- (void)setIconRectWidth:(unsigned int)arg0;
- (void)setHasIconRectWidth:(char)arg0;
- (char)hasIconRectWidth;
- (void)setIconRectHeight:(unsigned int)arg0;
- (void)setHasIconRectHeight:(char)arg0;
- (char)hasIconRectHeight;
- (void)setMatchingStyleAttributeKey:(unsigned int)arg0;
- (void)setHasMatchingStyleAttributeKey:(char)arg0;
- (void)setMatchingStyleAttributeValue:(int)arg0;
- (void)setHasMatchingStyleAttributeValue:(char)arg0;
- (void)setMatchingStyleAttributeLongValue:(unsigned long long)arg0;
- (void)setHasMatchingStyleAttributeLongValue:(char)arg0;
- (char)hasMatchingStyleAttributeLongValue;
- (void)setHasSize:(char)arg0;
- (void)setAtlasIndex:(unsigned int)arg0;
- (void)setQuadIndex:(unsigned int)arg0;
- (unsigned int)anchorPointX;
- (unsigned int)anchorPointY;
- (unsigned int)iconRectX;
- (unsigned int)iconRectY;
- (unsigned int)iconRectWidth;
- (unsigned int)iconRectHeight;

@end
