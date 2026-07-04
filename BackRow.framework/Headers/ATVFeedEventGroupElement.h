/* Runtime dump - ATVFeedEventGroupElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedEventGroupElement : ATVFeedRootElement
{
    char _beginPlaybackAtStartDate;
    char _showChapterMarkers;
    char _showDescriptionOnChapterSkip;
    NSString * _title;
    int _refreshIntervalSec;
    NSDate * _startDate;
    NSArray * _events;
    ATVXMLElement * _xml;
}

@property (copy, nonatomic) NSString * title;
@property (nonatomic) int refreshIntervalSec;
@property (retain, nonatomic) NSDate * startDate;
@property (nonatomic) char beginPlaybackAtStartDate;
@property (retain, nonatomic) NSArray * events;
@property (nonatomic) char showChapterMarkers;
@property (nonatomic) char showDescriptionOnChapterSkip;
@property (readonly, retain, nonatomic) ATVXMLElement * xml;

- (ATVFeedEventGroupElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setRefreshIntervalSec:(int)arg0;
- (int)refreshIntervalSec;
- (ATVXMLElement *)xml;
- (void)setBeginPlaybackAtStartDate:(char)arg0;
- (char)beginPlaybackAtStartDate;
- (void)setShowChapterMarkers:(char)arg0;
- (void)setShowDescriptionOnChapterSkip:(char)arg0;
- (char)showChapterMarkers;
- (char)showDescriptionOnChapterSkip;
- (NSArray *)events;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void).cxx_destruct;
- (void)setEvents:(NSArray *)arg0;
- (void)setStartDate:(NSDate *)arg0;
- (NSDate *)startDate;

@end
