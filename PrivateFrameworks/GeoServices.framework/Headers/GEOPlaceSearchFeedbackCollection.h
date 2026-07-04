/* Runtime dump - GEOPlaceSearchFeedbackCollection
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchFeedbackCollection : PBCodable <NSCopying>
{
    struct ? _sessionID;
    unsigned long long _businessID;
    long long _placeID;
    NSMutableArray * _actionCaptures;
    int _localSearchProviderID;
    struct ? _has;
}

@property (nonatomic) char hasSessionID;
@property (nonatomic) struct ? sessionID;
@property (nonatomic) char hasBusinessID;
@property (nonatomic) unsigned long long businessID;
@property (nonatomic) char hasPlaceID;
@property (nonatomic) long long placeID;
@property (retain, nonatomic) NSMutableArray * actionCaptures;
@property (nonatomic) char hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPlaceSearchFeedbackCollection *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (struct ?)sessionID;
- (void)setSessionID:(struct ?)arg0;
- (void)setHasSessionID:(char)arg0;
- (char)hasSessionID;
- (void)setLocalSearchProviderID:(int)arg0;
- (void)setHasLocalSearchProviderID:(char)arg0;
- (char)hasLocalSearchProviderID;
- (int)localSearchProviderID;
- (void)setBusinessID:(unsigned long long)arg0;
- (void)setHasBusinessID:(char)arg0;
- (void)setActionCaptures:(NSMutableArray *)arg0;
- (void)addActionCapture:(GEOUIActionCapture *)arg0;
- (unsigned int)actionCapturesCount;
- (void)clearActionCaptures;
- (NSObject *)actionCaptureAtIndex:(unsigned int)arg0;
- (void)setPlaceID:(long long)arg0;
- (void)setHasPlaceID:(char)arg0;
- (char)hasPlaceID;
- (long long)placeID;
- (NSMutableArray *)actionCaptures;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (char)hasBusinessID;
- (unsigned long long)businessID;

@end
