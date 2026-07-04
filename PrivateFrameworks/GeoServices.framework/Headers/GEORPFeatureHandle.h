/* Runtime dump - GEORPFeatureHandle
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPFeatureHandle : PBCodable <NSCopying>
{
    struct ? * _styleAttributes;
    unsigned int _styleAttributesCount;
    unsigned int _styleAttributesSpace;
    unsigned int _featureIndex;
    unsigned int _featureTileX;
    unsigned int _featureTileY;
    unsigned int _featureTileZ;
    unsigned int _identifier;
    int _style;
    int _type;
    struct ? _has;
}

@property (nonatomic) char hasFeatureIndex;
@property (nonatomic) unsigned int featureIndex;
@property (nonatomic) char hasFeatureTileX;
@property (nonatomic) unsigned int featureTileX;
@property (nonatomic) char hasFeatureTileY;
@property (nonatomic) unsigned int featureTileY;
@property (nonatomic) char hasFeatureTileZ;
@property (nonatomic) unsigned int featureTileZ;
@property (nonatomic) char hasStyle;
@property (nonatomic) int style;
@property (nonatomic) char hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) unsigned int styleAttributesCount;
@property (readonly, nonatomic) struct ? * styleAttributes;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)identifier;
- (void)setType:(int)arg0;
- (int)type;
- (GEORPFeatureHandle *)copyWithZone:(struct _NSZone *)arg0;
- (int)style;
- (void)setIdentifier:(unsigned int)arg0;
- (void)setStyle:(int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasIdentifier;
- (unsigned int)styleAttributesCount;
- (void)clearStyleAttributes;
- (void)setFeatureIndex:(unsigned int)arg0;
- (void)setHasIdentifier:(char)arg0;
- (struct ?)styleAttributeAtIndex:(unsigned int)arg0;
- (void)addStyleAttribute:(struct ?)arg0;
- (void)setHasFeatureIndex:(char)arg0;
- (char)hasFeatureIndex;
- (void)setFeatureTileX:(unsigned int)arg0;
- (void)setHasFeatureTileX:(char)arg0;
- (char)hasFeatureTileX;
- (void)setFeatureTileY:(unsigned int)arg0;
- (void)setHasFeatureTileY:(char)arg0;
- (char)hasFeatureTileY;
- (void)setFeatureTileZ:(unsigned int)arg0;
- (void)setHasFeatureTileZ:(char)arg0;
- (char)hasFeatureTileZ;
- (void)setStyleAttributes:(struct ? *)arg0 count:(unsigned int)arg1;
- (unsigned int)featureTileX;
- (unsigned int)featureTileY;
- (unsigned int)featureTileZ;
- (void)setHasType:(char)arg0;
- (char)hasType;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (struct ? *)styleAttributes;
- (unsigned int)featureIndex;
- (void)setHasStyle:(char)arg0;
- (char)hasStyle;

@end
