/* Runtime dump - GEOResourceManifestDownload
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestDownload : PBCodable <NSCopying>
{
    GEODownloadMetadata * _metadata;
    GEOResources * _resources;
}

@property (readonly, nonatomic) char hasResources;
@property (retain, nonatomic) GEOResources * resources;
@property (retain, nonatomic) GEODownloadMetadata * metadata;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOResourceManifestDownload *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (GEOResourceManifestDownload *)initWithResourceManifestData:(GEOResourceManifestDownload *)arg0;
- (char)hasResources;
- (void)setMetadata:(GEODownloadMetadata *)arg0;
- (GEODownloadMetadata *)metadata;
- (void)setResources:(GEOResources *)arg0;
- (GEOResources *)resources;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
