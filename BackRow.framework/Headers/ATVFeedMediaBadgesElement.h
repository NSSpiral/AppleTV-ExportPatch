/* Runtime dump - ATVFeedMediaBadgesElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedMediaBadgesElement : ATVFeedElement
{
    char _closedCaption;
    NSString * _audioFormat;
    NSString * _videoFormat;
    NSArray * _urlBadges;
    NSDictionary * _styleKeyValues;
}

@property (copy, nonatomic) NSString * audioFormat;
@property (copy, nonatomic) NSString * videoFormat;
@property (nonatomic) char closedCaption;
@property (retain, nonatomic) NSArray * urlBadges;
@property (readonly, retain, nonatomic) UIColor * color;
@property (retain, nonatomic) NSDictionary * styleKeyValues;

- (ATVFeedMediaBadgesElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setClosedCaption:(char)arg0;
- (NSDictionary *)styleKeyValues;
- (void)setStyleKeyValues:(NSDictionary *)arg0;
- (void)setVideoFormat:(NSString *)arg0;
- (void)setUrlBadges:(NSArray *)arg0;
- (char)closedCaption;
- (NSArray *)urlBadges;
- (UIColor *)color;
- (void).cxx_destruct;
- (NSString *)videoFormat;
- (void)setAudioFormat:(NSString *)arg0;
- (NSString *)audioFormat;

@end
