/* Runtime dump - UWLErrorResponse
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface UWLErrorResponse : PBCodable <NSCopying>
{
    int _retryPeriodInSeconds;
}

@property (nonatomic) int retryPeriodInSeconds;

- (int)retryPeriodInSeconds;
- (void)setRetryPeriodInSeconds:(int)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (UWLErrorResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
