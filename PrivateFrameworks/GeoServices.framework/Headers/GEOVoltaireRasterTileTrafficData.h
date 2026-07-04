/* Runtime dump - GEOVoltaireRasterTileTrafficData
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireRasterTileTrafficData : NSObject
{
    struct ? * _vertices;
    NSMutableArray * _trafficSegments;
    NSArray * _trafficIncidents;
    double _expirationTime;
}

@property (nonatomic) struct ? * vertices;
@property (retain, nonatomic) NSMutableArray * trafficSegments;
@property (readonly, nonatomic) NSArray * trafficIncidents;
@property (nonatomic) double expirationTime;

+ (double)expirationTimeInterval;
+ (NSData *)createWithData:(NSData *)arg0 tileKey:(struct _GEOTileKey *)arg1;

- (void)dealloc;
- (void)setVertices:(struct ? *)arg0;
- (void)setTrafficSegments:(NSMutableArray *)arg0;
- (GEOVoltaireRasterTileTrafficData *)initWithData:(NSData *)arg0 tileKey:(struct _GEOTileKey *)arg1;
- (void)setExpirationTime:(double)arg0;
- (double)expirationTime;
- (NSMutableArray *)trafficSegments;
- (struct ? *)vertices;
- (NSArray *)trafficIncidents;

@end
