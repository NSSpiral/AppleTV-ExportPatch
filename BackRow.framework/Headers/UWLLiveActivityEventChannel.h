/* Runtime dump - UWLLiveActivityEventChannel
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface UWLLiveActivityEventChannel : PBCodable <NSCopying>
{
    NSString * _channelBrandId;
    NSString * _channelCanonicalId;
    NSString * _channelExternalLiveServiceId;
    NSString * _channelInternalLegId;
}

@property (readonly, nonatomic) char hasChannelCanonicalId;
@property (retain, nonatomic) NSString * channelCanonicalId;
@property (readonly, nonatomic) char hasChannelBrandId;
@property (retain, nonatomic) NSString * channelBrandId;
@property (readonly, nonatomic) char hasChannelExternalLiveServiceId;
@property (retain, nonatomic) NSString * channelExternalLiveServiceId;
@property (readonly, nonatomic) char hasChannelInternalLegId;
@property (retain, nonatomic) NSString * channelInternalLegId;

- (void)setChannelCanonicalId:(NSString *)arg0;
- (void)setChannelBrandId:(NSString *)arg0;
- (void)setChannelInternalLegId:(NSString *)arg0;
- (void)setChannelExternalLiveServiceId:(NSString *)arg0;
- (char)hasChannelCanonicalId;
- (char)hasChannelBrandId;
- (char)hasChannelExternalLiveServiceId;
- (char)hasChannelInternalLegId;
- (NSString *)channelCanonicalId;
- (NSString *)channelBrandId;
- (NSString *)channelExternalLiveServiceId;
- (NSString *)channelInternalLegId;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (UWLLiveActivityEventChannel *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
