/* Runtime dump - GEORPMapLocation
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPMapLocation : PBCodable <NSCopying>
{
    GEOLatLng * _coordinate;
    NSData * _image;
    GEOPDViewportInfo * _viewportInfo;
    float _zoomLevel;
    struct ? _has;
}

@property (readonly, nonatomic) char hasImage;
@property (retain, nonatomic) NSData * image;
@property (readonly, nonatomic) char hasCoordinate;
@property (retain, nonatomic) GEOLatLng * coordinate;
@property (nonatomic) char hasZoomLevel;
@property (nonatomic) float zoomLevel;
@property (readonly, nonatomic) char hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo * viewportInfo;

- (void)dealloc;
- (void)setImage:(NSData *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPMapLocation *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)image;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasCoordinate;
- (void)setViewportInfo:(GEOPDViewportInfo *)arg0;
- (char)hasViewportInfo;
- (char)hasImage;
- (void)setHasZoomLevel:(char)arg0;
- (char)hasZoomLevel;
- (GEOPDViewportInfo *)viewportInfo;
- (void)setZoomLevel:(float)arg0;
- (float)zoomLevel;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (GEOLatLng *)coordinate;
- (void)setCoordinate:(GEOLatLng *)arg0;

@end
