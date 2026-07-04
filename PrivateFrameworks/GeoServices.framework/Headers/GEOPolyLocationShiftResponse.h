/* Runtime dump - GEOPolyLocationShiftResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying>
{
    struct ? _parameters;
    double _radius;
    int _status;
}

@property (nonatomic) int status;
@property (readonly, nonatomic) unsigned int parametersCount;
@property (readonly, nonatomic) double * parameters;
@property (nonatomic) double radius;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPolyLocationShiftResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)status;
- (void)setStatus:(int)arg0;
- (double)radius;
- (void)setRadius:(double)arg0;
- (unsigned int)parametersCount;
- (void)clearParameters;
- (double)parametersAtIndex:(unsigned int)arg0;
- (void)addParameters:(double)arg0;
- (void)setParameters:(double *)arg0 count:(unsigned int)arg1;
- (double *)parameters;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
