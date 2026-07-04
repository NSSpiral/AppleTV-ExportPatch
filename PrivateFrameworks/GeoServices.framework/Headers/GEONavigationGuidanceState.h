/* Runtime dump - GEONavigationGuidanceState
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationGuidanceState : PBCodable <NSCopying>
{
    int _navigationState;
    int _trackedTransportType;
    struct ? _has;
}

@property (nonatomic) char hasTrackedTransportType;
@property (nonatomic) int trackedTransportType;
@property (nonatomic) char hasNavigationState;
@property (nonatomic) int navigationState;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEONavigationGuidanceState *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)navigationState;
- (void)setNavigationState:(int)arg0;
- (int)trackedTransportType;
- (void)setTrackedTransportType:(int)arg0;
- (GEONavigationGuidanceState *)initWithTransportType:(int)arg0;
- (void)setHasTrackedTransportType:(char)arg0;
- (char)hasTrackedTransportType;
- (void)setHasNavigationState:(char)arg0;
- (char)hasNavigationState;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
