/* Runtime dump - GEOTileGroup
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileGroup : PBCodable <NSCopying>
{
    struct ? * _regionalResourceIndexs;
    unsigned int _regionalResourceIndexsCount;
    unsigned int _regionalResourceIndexsSpace;
    struct ? _attributionIndexs;
    struct ? _fontIndexs;
    struct ? _iconIndexs;
    struct ? _styleSheetIndexs;
    struct ? _textureIndexs;
    struct ? _xmlIndexs;
    struct ? * _tileSets;
    unsigned int _tileSetsCount;
    unsigned int _tileSetsSpace;
    unsigned int _attributionBadgeIndex;
    unsigned int _identifier;
    struct ? _has;
}

@property (nonatomic) unsigned int identifier;
@property (readonly, nonatomic) unsigned int tileSetsCount;
@property (readonly, nonatomic) struct ? * tileSets;
@property (readonly, nonatomic) unsigned int styleSheetIndexsCount;
@property (readonly, nonatomic) unsigned int * styleSheetIndexs;
@property (readonly, nonatomic) unsigned int textureIndexsCount;
@property (readonly, nonatomic) unsigned int * textureIndexs;
@property (readonly, nonatomic) unsigned int fontIndexsCount;
@property (readonly, nonatomic) unsigned int * fontIndexs;
@property (readonly, nonatomic) unsigned int iconIndexsCount;
@property (readonly, nonatomic) unsigned int * iconIndexs;
@property (readonly, nonatomic) unsigned int regionalResourceIndexsCount;
@property (readonly, nonatomic) struct ? * regionalResourceIndexs;
@property (readonly, nonatomic) unsigned int xmlIndexsCount;
@property (readonly, nonatomic) unsigned int * xmlIndexs;
@property (nonatomic) char hasAttributionBadgeIndex;
@property (nonatomic) unsigned int attributionBadgeIndex;
@property (readonly, nonatomic) unsigned int attributionIndexsCount;
@property (readonly, nonatomic) unsigned int * attributionIndexs;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)identifier;
- (GEOTileGroup *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(unsigned int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)addTileSet:(struct ?)arg0;
- (unsigned int)tileSetsCount;
- (void)clearTileSets;
- (struct ?)tileSetAtIndex:(unsigned int)arg0;
- (struct ? *)tileSets;
- (void)clearRegionalResourceIndexs;
- (unsigned int)styleSheetIndexsCount;
- (void)clearStyleSheetIndexs;
- (unsigned int)styleSheetIndexAtIndex:(unsigned int)arg0;
- (void)addStyleSheetIndex:(unsigned int)arg0;
- (unsigned int)textureIndexsCount;
- (void)clearTextureIndexs;
- (unsigned int)textureIndexAtIndex:(unsigned int)arg0;
- (void)addTextureIndex:(unsigned int)arg0;
- (unsigned int)fontIndexsCount;
- (void)clearFontIndexs;
- (unsigned int)fontIndexAtIndex:(unsigned int)arg0;
- (void)addFontIndex:(unsigned int)arg0;
- (unsigned int)iconIndexsCount;
- (void)clearIconIndexs;
- (unsigned int)iconIndexAtIndex:(unsigned int)arg0;
- (void)addIconIndex:(unsigned int)arg0;
- (unsigned int)regionalResourceIndexsCount;
- (struct ?)regionalResourceIndexAtIndex:(SEL)arg0;
- (void)addRegionalResourceIndex:(struct ?)arg0;
- (unsigned int)xmlIndexsCount;
- (void)clearXmlIndexs;
- (unsigned int)xmlIndexAtIndex:(unsigned int)arg0;
- (void)addXmlIndex:(unsigned int)arg0;
- (unsigned int)attributionIndexsCount;
- (void)clearAttributionIndexs;
- (unsigned int)attributionIndexAtIndex:(unsigned int)arg0;
- (void)addAttributionIndex:(unsigned int)arg0;
- (void)setTileSets:(struct ? *)arg0 count:(unsigned int)arg1;
- (unsigned int *)styleSheetIndexs;
- (void)setStyleSheetIndexs:(unsigned int *)arg0 count:(unsigned int)arg1;
- (unsigned int *)textureIndexs;
- (void)setTextureIndexs:(unsigned int *)arg0 count:(unsigned int)arg1;
- (unsigned int *)fontIndexs;
- (void)setFontIndexs:(unsigned int *)arg0 count:(unsigned int)arg1;
- (unsigned int *)iconIndexs;
- (void)setIconIndexs:(unsigned int *)arg0 count:(unsigned int)arg1;
- (struct ? *)regionalResourceIndexs;
- (void)setRegionalResourceIndexs:(struct ? *)arg0 count:(NSObject *)arg1;
- (unsigned int *)xmlIndexs;
- (void)setXmlIndexs:(unsigned int *)arg0 count:(unsigned int)arg1;
- (void)setAttributionBadgeIndex:(unsigned int)arg0;
- (void)setHasAttributionBadgeIndex:(char)arg0;
- (char)hasAttributionBadgeIndex;
- (unsigned int *)attributionIndexs;
- (void)setAttributionIndexs:(unsigned int *)arg0 count:(unsigned int)arg1;
- (unsigned int)attributionBadgeIndex;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
