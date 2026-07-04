/* Runtime dump - ATVFeedTrickPlayConfigElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedTrickPlayConfigElement : ATVFeedRootElement
{
    char _oneBasedNamingScheme;
    int _trickPlayCount;
    NSString * _trickPlayURL;
    NSString * _thumbnailNameFormat;
    double _frameTimeDifferenceInSeconds;
}

@property (nonatomic) double frameTimeDifferenceInSeconds;
@property (nonatomic) int trickPlayCount;
@property (copy, nonatomic) NSString * trickPlayURL;
@property (nonatomic) char oneBasedNamingScheme;
@property (copy, nonatomic) NSString * thumbnailNameFormat;

- (NSString *)trickPlayURL;
- (ATVFeedTrickPlayConfigElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setFrameTimeDifferenceInSeconds:(double)arg0;
- (void)setTrickPlayCount:(int)arg0;
- (void)setTrickPlayURL:(NSString *)arg0;
- (void)setOneBasedNamingScheme:(char)arg0;
- (void)setThumbnailNameFormat:(NSString *)arg0;
- (double)frameTimeDifferenceInSeconds;
- (int)trickPlayCount;
- (char)oneBasedNamingScheme;
- (NSString *)thumbnailNameFormat;
- (void).cxx_destruct;

@end
