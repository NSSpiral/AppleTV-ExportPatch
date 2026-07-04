/* Runtime dump - VKTrafficIncident
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficIncident : NSObject <NSCopying>
{
    struct VKPoint _worldPoint;
    NSString * _title;
    NSString * _subtitle;
    int _type;
    int _routeRelevance;
    int _significance;
    char _isNotForDisplay;
    char _isOnSelectedRoute;
    struct PolylineCoordinate _routeOffset;
    unsigned int _routeOffsetInMeters;
    struct ? _location;
    NSString * _street;
    NSString * _crossStreet;
    NSString * _info;
    NSDate * _startDate;
    NSDate * _endDate;
    NSDate * _lastUpdatedDate;
    float _minZoom;
    float _maxZoom;
    unsigned long long _uniqueID;
    NSString * _uniqueString;
}

@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSString * subtitle;
@property (readonly, nonatomic) unsigned long long uniqueID;
@property (readonly, nonatomic) NSString * uniqueString;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) char isNotForDisplay;
@property (nonatomic) int routeRelevance;
@property (nonatomic) char isOnSelectedRoute;
@property (nonatomic) struct PolylineCoordinate routeOffset;
@property (nonatomic) unsigned int routeOffsetInMeters;
@property (readonly, nonatomic) NSString * street;
@property (readonly, nonatomic) NSString * crossStreet;
@property (readonly, nonatomic) NSString * info;
@property (readonly, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) NSDate * endDate;
@property (readonly, nonatomic) NSDate * lastUpdatedDate;
@property (readonly, nonatomic) struct VKPoint worldPoint;
@property (readonly, nonatomic) float minZoom;
@property (readonly, nonatomic) float maxZoom;
@property (readonly, nonatomic) int significance;

- (void)dealloc;
- (int)type;
- (NSString *)title;
- (VKTrafficIncident *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)subtitle;
- (NSString *)info;
- (void).cxx_construct;
- (NSString *)uniqueString;
- (char)isOnSelectedRoute;
- (int)routeRelevance;
- (char)isNotForDisplay;
- (char)hasSameIdentifier:(NSString *)arg0;
- (struct PolylineCoordinate)routeOffset;
- (void)setRouteRelevance:(int)arg0;
- (struct VKPoint)worldPoint;
- (VKTrafficIncident *)initWithIncidentData:(struct Incident *)arg0 worldPoint:(struct Incident)arg1;
- (int)significance;
- (NSString *)street;
- (NSString *)crossStreet;
- (VKTrafficIncident *)initWithIncident:(GEOTrafficIncident *)arg0 vertices:(struct ? *)arg1 tileRect:(struct ?)arg2 tileSize:(double)arg3;
- (VKTrafficIncident *)initWithRouteIncident:(GEORouteIncident *)arg0 routeRelevance:(int)arg1;
- (unsigned long long)uniqueID;
- (void)setIsOnSelectedRoute:(char)arg0;
- (void)setRouteOffset:(struct PolylineCoordinate)arg0;
- (unsigned int)routeOffsetInMeters;
- (void)setRouteOffsetInMeters:(unsigned int)arg0;
- (NSDate *)startDate;
- (NSDate *)endDate;
- (NSDate *)lastUpdatedDate;
- (float)minZoom;
- (float)maxZoom;

@end
