/* Runtime dump - ATVFeedHTTPLiveStreamingVideoElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedVideoAssetElement.h>

@class ATVFeedElement, ATVFeedTrickPlayConfigElement, BRMerchant;
@interface ATVFeedHTTPLiveStreamingVideoElement : ATVFeedVideoAssetElement
{
    char _indefiniteDuration;
    char _beginPlaybackAtStartDate;
    ATVFeedTrickPlayConfigElement * _trickPlayConfig;
    NSArray * _eventGroups;
    NSArray * _requiredEventGroups;
    float _bookmarkNetTimeSec;
    NSDate * _startDate;
}

@property (nonatomic) char indefiniteDuration;
@property (retain, nonatomic) ATVFeedTrickPlayConfigElement * trickPlayConfig;
@property (retain, nonatomic) NSArray * eventGroups;
@property (retain, nonatomic) NSArray * requiredEventGroups;
@property (nonatomic) float bookmarkNetTimeSec;
@property (retain, nonatomic) NSDate * startDate;
@property (nonatomic) char beginPlaybackAtStartDate;

- (ATVFeedHTTPLiveStreamingVideoElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (ATVFeedTrickPlayConfigElement *)trickPlayConfig;
- (void)setIndefiniteDuration:(char)arg0;
- (void)setTrickPlayConfig:(ATVFeedTrickPlayConfigElement *)arg0;
- (void)setEventGroups:(NSArray *)arg0;
- (void)setRequiredEventGroups:(NSArray *)arg0;
- (void)setBookmarkNetTimeSec:(float)arg0;
- (void)setBeginPlaybackAtStartDate:(char)arg0;
- (char)indefiniteDuration;
- (NSArray *)eventGroups;
- (NSArray *)requiredEventGroups;
- (float)bookmarkNetTimeSec;
- (char)beginPlaybackAtStartDate;
- (void).cxx_destruct;
- (void)setStartDate:(NSDate *)arg0;
- (NSDate *)startDate;

@end
