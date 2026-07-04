/* Runtime dump - ATVFeedVideoAssetElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedMediaAssetElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedVideoAssetElement : ATVFeedMediaAssetElement
{
    NSString * _secondScreenURL;
    NSString * _subtitleStylesURL;
    NSString * _cachingIdentifierBehavior;
    float _bookmarkTimeSec;
    float _upNextPresentationTimeSec;
    float _upNextPresentationDurationSec;
    NSURL * _fpsKeyServerURL;
    NSURL * _fpsCertificateURL;
    NSDictionary * _additionalParameters;
    NSURL * _tokenServerURL;
    NSURL * _stopServereURL;
    NSDictionary * _tokenServerParameters;
    NSString * _channelName;
    NSString * _channelID;
    NSString * _externalServiceID;
    NSString * _externalAssetID;
    NSArray * _floatingButtonSets;
}

@property (copy, nonatomic) NSString * secondScreenURL;
@property (copy, nonatomic) NSString * subtitleStylesURL;
@property (copy, nonatomic) NSString * cachingIdentifierBehavior;
@property (nonatomic) float bookmarkTimeSec;
@property (nonatomic) float upNextPresentationTimeSec;
@property (nonatomic) float upNextPresentationDurationSec;
@property (copy, nonatomic) NSURL * fpsKeyServerURL;
@property (copy, nonatomic) NSURL * fpsCertificateURL;
@property (copy, nonatomic) NSDictionary * additionalParameters;
@property (copy, nonatomic) NSURL * tokenServerURL;
@property (copy, nonatomic) NSURL * stopServereURL;
@property (copy, nonatomic) NSDictionary * tokenServerParameters;
@property (copy, nonatomic) NSString * channelName;
@property (copy, nonatomic) NSString * channelID;
@property (copy, nonatomic) NSString * externalServiceID;
@property (copy, nonatomic) NSString * externalAssetID;
@property (copy, nonatomic) NSArray * floatingButtonSets;

- (ATVFeedVideoAssetElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)secondScreenURL;
- (NSString *)subtitleStylesURL;
- (NSString *)cachingIdentifierBehavior;
- (NSString *)channelID;
- (NSString *)externalServiceID;
- (void)setSecondScreenURL:(NSString *)arg0;
- (void)setSubtitleStylesURL:(NSString *)arg0;
- (void)setCachingIdentifierBehavior:(NSString *)arg0;
- (void)setFpsKeyServerURL:(NSURL *)arg0;
- (void)setFpsCertificateURL:(NSURL *)arg0;
- (void)setStopServereURL:(NSURL *)arg0;
- (void)setChannelName:(NSString *)arg0;
- (void)setChannelID:(NSString *)arg0;
- (void)setExternalServiceID:(NSString *)arg0;
- (void)setExternalAssetID:(NSString *)arg0;
- (float)bookmarkTimeSec;
- (void)setBookmarkTimeSec:(float)arg0;
- (float)upNextPresentationTimeSec;
- (void)setUpNextPresentationTimeSec:(float)arg0;
- (float)upNextPresentationDurationSec;
- (void)setUpNextPresentationDurationSec:(float)arg0;
- (NSURL *)fpsKeyServerURL;
- (NSURL *)fpsCertificateURL;
- (NSURL *)stopServereURL;
- (NSString *)externalAssetID;
- (NSArray *)floatingButtonSets;
- (void)setFloatingButtonSets:(NSArray *)arg0;
- (NSString *)channelName;
- (void).cxx_destruct;
- (NSDictionary *)tokenServerParameters;
- (NSURL *)tokenServerURL;
- (void)setTokenServerURL:(NSURL *)arg0;
- (void)setTokenServerParameters:(NSDictionary *)arg0;
- (NSDictionary *)additionalParameters;
- (void)setAdditionalParameters:(NSDictionary *)arg0;

@end
