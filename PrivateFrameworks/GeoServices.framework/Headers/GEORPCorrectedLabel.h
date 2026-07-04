/* Runtime dump - GEORPCorrectedLabel
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCorrectedLabel : PBCodable <NSCopying>
{
    unsigned long long _uid;
    GEOLatLng * _coordinate;
    NSString * _correctedValue;
    NSMutableArray * _featureHandles;
    GEOMapRegion * _featureRegion;
    NSString * _originalValue;
    char _localizedLabels;
    struct ? _has;
}

@property (readonly, nonatomic) char hasOriginalValue;
@property (retain, nonatomic) NSString * originalValue;
@property (readonly, nonatomic) char hasCorrectedValue;
@property (retain, nonatomic) NSString * correctedValue;
@property (readonly, nonatomic) char hasFeatureRegion;
@property (retain, nonatomic) GEOMapRegion * featureRegion;
@property (retain, nonatomic) NSMutableArray * featureHandles;
@property (readonly, nonatomic) char hasCoordinate;
@property (retain, nonatomic) GEOLatLng * coordinate;
@property (nonatomic) char hasUid;
@property (nonatomic) unsigned long long uid;
@property (nonatomic) char hasLocalizedLabels;
@property (nonatomic) char localizedLabels;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPCorrectedLabel *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned long long)uid;
- (char)hasCoordinate;
- (void)setOriginalValue:(NSString *)arg0;
- (void)setCorrectedValue:(NSString *)arg0;
- (void)setFeatureRegion:(GEOMapRegion *)arg0;
- (void)setFeatureHandles:(NSMutableArray *)arg0;
- (void)addFeatureHandle:(GEORPFeatureHandle *)arg0;
- (unsigned int)featureHandlesCount;
- (void)clearFeatureHandles;
- (NSObject *)featureHandleAtIndex:(unsigned int)arg0;
- (char)hasOriginalValue;
- (char)hasCorrectedValue;
- (char)hasFeatureRegion;
- (void)setUid:(unsigned long long)arg0;
- (void)setHasUid:(char)arg0;
- (char)hasUid;
- (void)setLocalizedLabels:(char)arg0;
- (void)setHasLocalizedLabels:(char)arg0;
- (char)hasLocalizedLabels;
- (NSString *)originalValue;
- (NSString *)correctedValue;
- (GEOMapRegion *)featureRegion;
- (char)localizedLabels;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (GEOLatLng *)coordinate;
- (void)setCoordinate:(GEOLatLng *)arg0;
- (NSMutableArray *)featureHandles;

@end
