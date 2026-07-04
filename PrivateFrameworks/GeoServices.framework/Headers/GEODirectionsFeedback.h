/* Runtime dump - GEODirectionsFeedback
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsFeedback : PBCodable <NSCopying>
{
    struct ? * _stepFeedbacks;
    unsigned int _stepFeedbacksCount;
    unsigned int _stepFeedbacksSpace;
    NSData * _directionResponseID;
    NSMutableArray * _trafficRerouteFeedbacks;
    NSMutableArray * _traversedRouteIDs;
}

@property (readonly, nonatomic) char hasDirectionResponseID;
@property (retain, nonatomic) NSData * directionResponseID;
@property (retain, nonatomic) NSMutableArray * traversedRouteIDs;
@property (readonly, nonatomic) unsigned int stepFeedbacksCount;
@property (readonly, nonatomic) struct ? * stepFeedbacks;
@property (retain, nonatomic) NSMutableArray * trafficRerouteFeedbacks;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEODirectionsFeedback *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setDirectionResponseID:(NSData *)arg0;
- (void)addTraversedRouteIDs:(id)arg0;
- (void)addStepFeedback:(struct ?)arg0;
- (void)addTrafficRerouteFeedback:(GEOTrafficRerouteFeedback *)arg0;
- (void)setTraversedRouteIDs:(NSMutableArray *)arg0;
- (void)clearStepFeedbacks;
- (void)setTrafficRerouteFeedbacks:(NSMutableArray *)arg0;
- (unsigned int)traversedRouteIDsCount;
- (void)clearTraversedRouteIDs;
- (NSObject *)traversedRouteIDsAtIndex:(unsigned int)arg0;
- (unsigned int)stepFeedbacksCount;
- (struct ?)stepFeedbackAtIndex:(SEL)arg0;
- (unsigned int)trafficRerouteFeedbacksCount;
- (void)clearTrafficRerouteFeedbacks;
- (NSObject *)trafficRerouteFeedbackAtIndex:(unsigned int)arg0;
- (char)hasDirectionResponseID;
- (struct ? *)stepFeedbacks;
- (void)setStepFeedbacks:(struct ? *)arg0 count:(NSObject *)arg1;
- (NSData *)directionResponseID;
- (NSMutableArray *)traversedRouteIDs;
- (NSMutableArray *)trafficRerouteFeedbacks;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
