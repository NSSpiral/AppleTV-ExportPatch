/* Runtime dump - GEORPProblemRequest
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemRequest : PBRequest <NSCopying>
{
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEOPDClientMetadata * _clientMetadata;
    GEORPProblem * _problem;
    GEORPUserCredentials * _userCredentials;
}

@property (readonly, nonatomic) char hasProblem;
@property (retain, nonatomic) GEORPProblem * problem;
@property (readonly, nonatomic) char hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials * userCredentials;
@property (readonly, nonatomic) char hasAnalyticMetadata;
@property (retain, nonatomic) GEOPDAnalyticMetadata * analyticMetadata;
@property (readonly, nonatomic) char hasClientMetadata;
@property (retain, nonatomic) GEOPDClientMetadata * clientMetadata;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEORPProblemRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg0;
- (void)setClientMetadata:(GEOPDClientMetadata *)arg0;
- (char)hasAnalyticMetadata;
- (char)hasClientMetadata;
- (GEOPDAnalyticMetadata *)analyticMetadata;
- (GEOPDClientMetadata *)clientMetadata;
- (GEORPProblemRequest *)initWithProblem:(GEORPProblem *)arg0 traits:(NSArray *)arg1;
- (void)setProblem:(GEORPProblem *)arg0;
- (void)setUserCredentials:(GEORPUserCredentials *)arg0;
- (char)hasProblem;
- (char)hasUserCredentials;
- (GEORPProblem *)problem;
- (GEORPUserCredentials *)userCredentials;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
