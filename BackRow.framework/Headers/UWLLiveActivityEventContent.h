/* Runtime dump - UWLLiveActivityEventContent
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface UWLLiveActivityEventContent : PBCodable <NSCopying>
{
    long long _contentMediaLengthInMilliseconds;
    NSString * _contentBrandId;
    NSString * _contentCanonicalId;
    NSString * _contentExternalPlayableId;
    NSString * _contentInternalLegId;
    char _contentIsDone;
    struct ? _has;
}

@property (readonly, nonatomic) char hasContentCanonicalId;
@property (retain, nonatomic) NSString * contentCanonicalId;
@property (readonly, nonatomic) char hasContentBrandId;
@property (retain, nonatomic) NSString * contentBrandId;
@property (readonly, nonatomic) char hasContentExternalPlayableId;
@property (retain, nonatomic) NSString * contentExternalPlayableId;
@property (nonatomic) char hasContentMediaLengthInMilliseconds;
@property (nonatomic) long long contentMediaLengthInMilliseconds;
@property (nonatomic) char hasContentIsDone;
@property (nonatomic) char contentIsDone;
@property (readonly, nonatomic) char hasContentInternalLegId;
@property (retain, nonatomic) NSString * contentInternalLegId;

- (void)setContentMediaLengthInMilliseconds:(long long)arg0;
- (void)setContentCanonicalId:(NSString *)arg0;
- (void)setContentBrandId:(NSString *)arg0;
- (void)setContentIsDone:(char)arg0;
- (void)setContentExternalPlayableId:(NSString *)arg0;
- (void)setContentInternalLegId:(NSString *)arg0;
- (char)hasContentCanonicalId;
- (char)hasContentBrandId;
- (char)hasContentExternalPlayableId;
- (void)setHasContentMediaLengthInMilliseconds:(char)arg0;
- (char)hasContentMediaLengthInMilliseconds;
- (void)setHasContentIsDone:(char)arg0;
- (char)hasContentIsDone;
- (char)hasContentInternalLegId;
- (NSString *)contentCanonicalId;
- (NSString *)contentBrandId;
- (NSString *)contentExternalPlayableId;
- (long long)contentMediaLengthInMilliseconds;
- (char)contentIsDone;
- (NSString *)contentInternalLegId;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (UWLLiveActivityEventContent *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
