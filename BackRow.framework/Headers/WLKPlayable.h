/* Runtime dump - WLKPlayable
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class WLKBasicContentMetadata, WLKChannelDetails, WLKLocale, WLKPlayEvent;
@interface WLKPlayable : NSObject
{
    char _entitled;
    char _appInstalled;
    char _itunes;
    char _subtitled;
    NSDictionary * _dictionary;
    NSString * _playableID;
    NSString * _canonicalID;
    NSString * _channelID;
    WLKChannelDetails * _channelDetails;
    NSString * _contentID;
    int _contentSourceType;
    int _airingType;
    WLKBasicContentMetadata * _content;
    NSArray * _adLocales;
    NSArray * _audioTrackLocales;
    NSArray * _audioTrackFormats;
    NSArray * _closedCaptionLocales;
    NSArray * _SDHLocales;
    NSNumber * _duration;
    WLKLocale * _primaryLocale;
    NSString * _externalID;
    NSString * _externalServiceID;
    NSArray * _subtitledLocales;
    NSString * _videoQuality;
    NSDate * _endAirTime;
    NSDate * _startAirTime;
    WLKPlayEvent * _playEvent;
    NSDictionary * _itsData;
    SSLookupItem * _lookupItem;
    NSDictionary * _punchoutUrls;
    NSArray * _movieClips;
}

@property (readonly, copy, nonatomic) NSDictionary * dictionary;
@property (readonly, copy, nonatomic) NSString * playableID;
@property (readonly, copy, nonatomic) NSString * canonicalID;
@property (readonly, copy, nonatomic) NSString * channelID;
@property (readonly, copy, nonatomic) WLKChannelDetails * channelDetails;
@property (readonly, copy, nonatomic) NSString * contentID;
@property (readonly, nonatomic) int contentSourceType;
@property (readonly, nonatomic) char entitled;
@property (readonly, nonatomic) char appInstalled;
@property (readonly, nonatomic) char itunes;
@property (readonly, nonatomic) int airingType;
@property (readonly, nonatomic) WLKBasicContentMetadata * content;
@property (readonly, copy, nonatomic) NSArray * adLocales;
@property (readonly, copy, nonatomic) NSArray * audioTrackLocales;
@property (readonly, copy, nonatomic) NSArray * audioTrackFormats;
@property (readonly, copy, nonatomic) NSArray * closedCaptionLocales;
@property (readonly, copy, nonatomic) NSArray * SDHLocales;
@property (readonly, nonatomic) NSNumber * duration;
@property (readonly, copy, nonatomic) WLKLocale * primaryLocale;
@property (readonly, copy, nonatomic) NSString * externalID;
@property (readonly, copy, nonatomic) NSString * externalServiceID;
@property (readonly, nonatomic) char subtitled;
@property (readonly, copy, nonatomic) NSArray * subtitledLocales;
@property (readonly, copy, nonatomic) NSString * videoQuality;
@property (readonly, copy, nonatomic) NSDate * endAirTime;
@property (readonly, copy, nonatomic) NSDate * startAirTime;
@property (readonly, nonatomic) WLKPlayEvent * playEvent;
@property (readonly, copy, nonatomic) NSDictionary * itsData;
@property (readonly, copy, nonatomic) SSLookupItem * lookupItem;
@property (readonly, copy, nonatomic) NSDictionary * punchoutUrls;
@property (readonly, copy, nonatomic) NSArray * offers;
@property (readonly, copy, nonatomic) SSLookupItemOffer * bestBuyOffer;
@property (readonly, copy, nonatomic) SSLookupItemOffer * bestRentalOffer;
@property (readonly, copy, nonatomic) NSArray * movieClips;

+ (WLKPlayable *)playablesWithDictionaries:(id)arg0 canonicalID:(NSString *)arg1;

- (NSString *)channelID;
- (NSString *)externalServiceID;
- (NSString *)canonicalID;
- (NSDictionary *)punchoutUrls;
- (WLKPlayable *)initWithDictionary:(NSDictionary *)arg0 canonicalID:(NSString *)arg1;
- (NSDictionary *)_localesArrayForDictionary:(NSDictionary *)arg0 andKey:(NSString *)arg1;
- (char)isAppInstalled;
- (WLKChannelDetails *)channelDetails;
- (int)contentSourceType;
- (NSString *)playableID;
- (SSLookupItem *)lookupItem;
- (NSObject *)_filteredContentSource:(NSObject *)arg0;
- (char)_supportsHD;
- (SSLookupItemOffer *)bestBuyOffer;
- (SSLookupItemOffer *)bestRentalOffer;
- (char)isiTunes;
- (int)airingType;
- (NSArray *)adLocales;
- (NSArray *)audioTrackLocales;
- (NSArray *)audioTrackFormats;
- (NSArray *)closedCaptionLocales;
- (NSArray *)SDHLocales;
- (WLKLocale *)primaryLocale;
- (char)isSubtitled;
- (NSArray *)subtitledLocales;
- (NSDate *)endAirTime;
- (NSDate *)startAirTime;
- (WLKPlayEvent *)playEvent;
- (NSDictionary *)itsData;
- (NSArray *)movieClips;
- (NSString *)externalID;
- (NSArray *)offers;
- (char)isEntitled;
- (WLKPlayable *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (WLKPlayable *)initWithDictionary:(NSDictionary *)arg0;
- (NSNumber *)duration;
- (NSDictionary *)dictionary;
- (WLKBasicContentMetadata *)content;
- (NSString *)videoQuality;
- (void).cxx_destruct;
- (NSString *)contentID;

@end
