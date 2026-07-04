/* Runtime dump - ATVFeedHTTPLiveStreamingAudioElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedAudioAssetElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedHTTPLiveStreamingAudioElement : ATVFeedAudioAssetElement
{
    char _indefiniteDuration;
    char _beginPlaybackAtStartDate;
    NSDate * _startDate;
}

@property (nonatomic) char indefiniteDuration;
@property (retain, nonatomic) NSDate * startDate;
@property (nonatomic) char beginPlaybackAtStartDate;

- (ATVFeedHTTPLiveStreamingAudioElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setIndefiniteDuration:(char)arg0;
- (void)setBeginPlaybackAtStartDate:(char)arg0;
- (char)indefiniteDuration;
- (char)beginPlaybackAtStartDate;
- (void).cxx_destruct;
- (void)setStartDate:(NSDate *)arg0;
- (NSDate *)startDate;

@end
