/* Runtime dump - GEOSupportedTileSetsDownload
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSupportedTileSetsDownload : PBCodable <NSCopying>
{
    GEODownloadMetadata * _metadata;
    GEOSupportedTileSets * _tileSets;
}

@property (retain, nonatomic) GEOSupportedTileSets * tileSets;
@property (retain, nonatomic) GEODownloadMetadata * metadata;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOSupportedTileSetsDownload *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setTileSets:(GEOSupportedTileSets *)arg0;
- (GEOSupportedTileSets *)tileSets;
- (void)setMetadata:(GEODownloadMetadata *)arg0;
- (GEODownloadMetadata *)metadata;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
