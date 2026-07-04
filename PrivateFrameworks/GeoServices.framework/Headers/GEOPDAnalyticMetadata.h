/* Runtime dump - GEOPDAnalyticMetadata
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAnalyticMetadata : PBCodable <NSCopying>
{
    struct ? _sessionId;
    NSString * _appIdentifier;
    NSString * _appMajorVersion;
    NSString * _appMinorVersion;
    NSString * _hardwareModel;
    NSString * _osVersion;
    int _requestSource;
    unsigned int _sequenceNumber;
    NSMutableArray * _serviceTags;
    char _isFromApi;
    char _isInternalInstall;
    char _isInternalTool;
    struct ? _has;
}

@property (readonly, nonatomic) char hasAppIdentifier;
@property (retain, nonatomic) NSString * appIdentifier;
@property (readonly, nonatomic) char hasAppMajorVersion;
@property (retain, nonatomic) NSString * appMajorVersion;
@property (readonly, nonatomic) char hasAppMinorVersion;
@property (retain, nonatomic) NSString * appMinorVersion;
@property (readonly, nonatomic) char hasHardwareModel;
@property (retain, nonatomic) NSString * hardwareModel;
@property (readonly, nonatomic) char hasOsVersion;
@property (retain, nonatomic) NSString * osVersion;
@property (nonatomic) char hasIsInternalTool;
@property (nonatomic) char isInternalTool;
@property (nonatomic) char hasIsInternalInstall;
@property (nonatomic) char isInternalInstall;
@property (nonatomic) char hasSessionId;
@property (nonatomic) struct ? sessionId;
@property (nonatomic) char hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) char hasRequestSource;
@property (nonatomic) int requestSource;
@property (nonatomic) char hasIsFromApi;
@property (nonatomic) char isFromApi;
@property (retain, nonatomic) NSMutableArray * serviceTags;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOPDAnalyticMetadata *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (GEOPDAnalyticMetadata *)initWithTraits:(NSArray *)arg0;
- (void)setServiceTags:(NSMutableArray *)arg0;
- (void)addServiceTag:(NSString *)arg0;
- (unsigned int)serviceTagsCount;
- (void)clearServiceTags;
- (NSObject *)serviceTagAtIndex:(unsigned int)arg0;
- (void)setSequenceNumber:(unsigned int)arg0;
- (void)setHasSequenceNumber:(char)arg0;
- (char)hasSequenceNumber;
- (unsigned int)sequenceNumber;
- (NSMutableArray *)serviceTags;
- (void)setAppIdentifier:(NSString *)arg0;
- (struct ?)sessionId;
- (char)hasSessionId;
- (char)hasAppIdentifier;
- (NSString *)appIdentifier;
- (void)setSessionId:(struct ?)arg0;
- (void)setHasSessionId:(char)arg0;
- (void)setAppMajorVersion:(NSString *)arg0;
- (void)setAppMinorVersion:(NSString *)arg0;
- (NSString *)osVersion;
- (void)setOsVersion:(NSString *)arg0;
- (void)setHardwareModel:(NSString *)arg0;
- (char)hasAppMajorVersion;
- (char)hasAppMinorVersion;
- (char)hasHardwareModel;
- (NSString *)appMajorVersion;
- (NSString *)appMinorVersion;
- (char)hasOsVersion;
- (void)setIsInternalTool:(char)arg0;
- (void)setHasIsInternalTool:(char)arg0;
- (char)hasIsInternalTool;
- (void)setIsInternalInstall:(char)arg0;
- (void)setHasIsInternalInstall:(char)arg0;
- (char)hasIsInternalInstall;
- (void)setRequestSource:(int)arg0;
- (void)setHasRequestSource:(char)arg0;
- (char)hasRequestSource;
- (void)setIsFromApi:(char)arg0;
- (void)setHasIsFromApi:(char)arg0;
- (char)hasIsFromApi;
- (char)isInternalTool;
- (int)requestSource;
- (char)isFromApi;
- (NSString *)hardwareModel;
- (char)isInternalInstall;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
