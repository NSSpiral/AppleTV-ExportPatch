/* Runtime dump - GEOURLOptions
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying>
{
    GEOURLCamera * _camera;
    GEOURLCenterSpan * _centerSpan;
    int _mapType;
    NSString * _referralIdentifier;
    GEOURLRouteHandle * _routeHandle;
    int _transportType;
    int _userTrackingMode;
    char _enableTraffic;
    struct ? _has;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char hasEnableTraffic;
@property (nonatomic) char enableTraffic;
@property (nonatomic) char hasMapType;
@property (nonatomic) int mapType;
@property (nonatomic) char hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) char hasCenterSpan;
@property (retain, nonatomic) GEOURLCenterSpan * centerSpan;
@property (readonly, nonatomic) char hasCamera;
@property (retain, nonatomic) GEOURLCamera * camera;
@property (readonly, nonatomic) char hasReferralIdentifier;
@property (retain, nonatomic) NSString * referralIdentifier;
@property (nonatomic) char hasUserTrackingMode;
@property (nonatomic) int userTrackingMode;
@property (readonly, nonatomic) char hasRouteHandle;
@property (retain, nonatomic) GEOURLRouteHandle * routeHandle;

- (GEOURLOptions *)initWithLaunchOptions:(NSDictionary *)arg0;
- (NSDictionary *)launchOptions;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOURLOptions *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setRouteHandle:(GEOURLRouteHandle *)arg0;
- (char)hasRouteHandle;
- (GEOURLRouteHandle *)routeHandle;
- (char)hasCamera;
- (char)hasCenterSpan;
- (void)setCenterSpan:(GEOURLCenterSpan *)arg0;
- (char)hasTransportType;
- (char)hasReferralIdentifier;
- (void)setReferralIdentifier:(NSString *)arg0;
- (void)setHasTransportType:(char)arg0;
- (GEOURLOptions *)initWithUrlRepresentation:(NSDictionary *)arg0;
- (void)setEnableTraffic:(char)arg0;
- (char)hasEnableTraffic;
- (char)hasMapType;
- (GEOURLCenterSpan *)centerSpan;
- (char)enableTraffic;
- (NSString *)referralIdentifier;
- (NSDictionary *)urlRepresentation;
- (void)setHasMapType:(char)arg0;
- (void)setHasEnableTraffic:(char)arg0;
- (void)setUserTrackingMode:(int)arg0;
- (void)setHasUserTrackingMode:(char)arg0;
- (char)hasUserTrackingMode;
- (int)userTrackingMode;
- (void)setTransportType:(int)arg0;
- (int)mapType;
- (void)setMapType:(int)arg0;
- (GEOURLCamera *)camera;
- (void)setCamera:(GEOURLCamera *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (int)transportType;

@end
