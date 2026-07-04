/* Runtime dump - GEOAddressCorrectionUpdateResponse
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionUpdateResponse : PBCodable <NSCopying>
{
    unsigned int _retryScheduleInDays;
    struct ? _has;
}

@property (nonatomic) char hasRetryScheduleInDays;
@property (nonatomic) unsigned int retryScheduleInDays;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GEOAddressCorrectionUpdateResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setRetryScheduleInDays:(unsigned int)arg0;
- (void)setHasRetryScheduleInDays:(char)arg0;
- (char)hasRetryScheduleInDays;
- (unsigned int)retryScheduleInDays;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
