/* Runtime dump - GEORouteName
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteName : PBCodable <NSCopying>
{
    int _lastZilchStitchedIndex;
    GEONameInfo * _nameInfo;
    struct ? _has;
}

@property (readonly, nonatomic) char hasNameInfo;
@property (retain, nonatomic) GEONameInfo * nameInfo;
@property (nonatomic) char hasLastZilchStitchedIndex;
@property (nonatomic) int lastZilchStitchedIndex;

- (struct CGImage *)_mapKitImage;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORouteName *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setNameInfo:(GEONameInfo *)arg0;
- (char)hasNameInfo;
- (int)lastZilchStitchedIndex;
- (void)setLastZilchStitchedIndex:(int)arg0;
- (void)setHasLastZilchStitchedIndex:(char)arg0;
- (char)hasLastZilchStitchedIndex;
- (GEONameInfo *)nameInfo;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
