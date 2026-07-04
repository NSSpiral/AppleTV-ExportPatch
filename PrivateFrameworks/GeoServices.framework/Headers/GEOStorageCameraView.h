/* Runtime dump - GEOStorageCameraView
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStorageCameraView : PBCodable <NSCopying>
{
    PBUnknownFields * _unknownFields;
    GEOURLCamera * _camera;
    int _mapType;
    struct ? _has;
}

@property (readonly, nonatomic) char hasCamera;
@property (retain, nonatomic) GEOURLCamera * camera;
@property (nonatomic) char hasMapType;
@property (nonatomic) int mapType;
@property (readonly, nonatomic) PBUnknownFields * unknownFields;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOStorageCameraView *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (char)hasCamera;
- (PBUnknownFields *)unknownFields;
- (char)hasMapType;
- (void)setHasMapType:(char)arg0;
- (int)mapType;
- (void)setMapType:(int)arg0;
- (GEOURLCamera *)camera;
- (void)setCamera:(GEOURLCamera *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
