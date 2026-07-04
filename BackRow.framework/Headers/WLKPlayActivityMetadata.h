/* Runtime dump - WLKPlayActivityMetadata
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKPlayActivityMetadata : NSObject
{
    NSString * _key;
    unsigned int _contentType;
    NSString * _externalShowID;
    NSString * _canonicalID;
    NSString * _canonicalShowID;
    NSString * _internalLegID;
    NSString * _overrideChannelID;
    NSNumber * _isCurrentEpisode;
    NSNumber * _isShowClosed;
}

@property (readonly, nonatomic) NSString * key;
@property (readonly, nonatomic) unsigned int contentType;
@property (readonly, nonatomic) NSString * externalShowID;
@property (readonly, nonatomic) NSString * canonicalID;
@property (readonly, nonatomic) NSString * canonicalShowID;
@property (readonly, nonatomic) NSString * internalLegID;
@property (readonly, nonatomic) NSString * overrideChannelID;
@property (readonly, copy, nonatomic) NSNumber * isCurrentEpisode;
@property (readonly, copy, nonatomic) NSNumber * isShowClosed;

+ (unsigned int)_contentTypeForString:(NSString *)arg0;

- (WLKPlayActivityMetadata *)initWithKey:(NSString *)arg0 dictionary:(NSDictionary *)arg1;
- (NSString *)canonicalShowID;
- (NSString *)canonicalID;
- (NSString *)externalShowID;
- (NSString *)internalLegID;
- (NSString *)overrideChannelID;
- (NSNumber *)isShowClosed;
- (NSNumber *)isCurrentEpisode;
- (NSString *)key;
- (void).cxx_destruct;
- (unsigned int)contentType;

@end
