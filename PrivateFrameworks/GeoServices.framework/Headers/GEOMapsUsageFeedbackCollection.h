/* Runtime dump - GEOMapsUsageFeedbackCollection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying>
{
    struct ? _sessionID;
    double _sessionRelativeTimestamp;
    double _zoomLevel;
    int _actionType;
    GEOCarInfo * _carInfo;
    GEOMapRegion * _mapRegion;
    GEOPlaceActionDetails * _placeActionDetails;
    NSString * _providerId;
    int _sequenceNumber;
    struct ? _has;
}

@property (nonatomic) char hasSessionID;
@property (nonatomic) struct ? sessionID;
@property (nonatomic) char hasActionType;
@property (nonatomic) int actionType;
@property (nonatomic) char hasSessionRelativeTimestamp;
@property (nonatomic) double sessionRelativeTimestamp;
@property (readonly, nonatomic) char hasPlaceActionDetails;
@property (retain, nonatomic) GEOPlaceActionDetails * placeActionDetails;
@property (readonly, nonatomic) char hasCarInfo;
@property (retain, nonatomic) GEOCarInfo * carInfo;
@property (readonly, nonatomic) char hasMapRegion;
@property (retain, nonatomic) GEOMapRegion * mapRegion;
@property (nonatomic) char hasZoomLevel;
@property (nonatomic) double zoomLevel;
@property (nonatomic) char hasSequenceNumber;
@property (nonatomic) int sequenceNumber;
@property (readonly, nonatomic) char hasProviderId;
@property (retain, nonatomic) NSString * providerId;

+ (NSArray *)feedbackCollectionWithTraits:(NSArray *)arg0 mapItem:(MKMapItem *)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
+ (NSArray *)feedbackCollectionWithTraits:(NSArray *)arg0 flyoverAnimationID:(unsigned long long)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOMapsUsageFeedbackCollection *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (struct ?)sessionID;
- (void)setSessionID:(struct ?)arg0;
- (char)hasMapRegion;
- (void)setHasSessionID:(char)arg0;
- (char)hasSessionID;
- (void)setSequenceNumber:(int)arg0;
- (void)setHasSequenceNumber:(char)arg0;
- (char)hasSequenceNumber;
- (int)sequenceNumber;
- (void)setHasActionType:(char)arg0;
- (char)hasActionType;
- (void)setSessionRelativeTimestamp:(double)arg0;
- (GEOMapsUsageFeedbackCollection *)initWithTraits:(NSArray *)arg0 mapItem:(MKMapItem *)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (void)setPlaceActionDetails:(GEOPlaceActionDetails *)arg0;
- (void)setCarInfo:(GEOCarInfo *)arg0;
- (GEOMapsUsageFeedbackCollection *)initWithTraits:(NSArray *)arg0 flyoverAnimationID:(unsigned long long)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
- (void)setHasZoomLevel:(char)arg0;
- (char)hasZoomLevel;
- (void)setHasSessionRelativeTimestamp:(char)arg0;
- (char)hasSessionRelativeTimestamp;
- (double)sessionRelativeTimestamp;
- (char)hasPlaceActionDetails;
- (char)hasCarInfo;
- (char)hasProviderId;
- (GEOPlaceActionDetails *)placeActionDetails;
- (GEOCarInfo *)carInfo;
- (void)setProviderId:(NSString *)arg0;
- (NSString *)providerId;
- (void)setActionType:(int)arg0;
- (int)actionType;
- (GEOMapRegion *)mapRegion;
- (void)setMapRegion:(GEOMapRegion *)arg0;
- (void)setZoomLevel:(double)arg0;
- (double)zoomLevel;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
