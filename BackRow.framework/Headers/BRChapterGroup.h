/* Runtime dump - BRChapterGroup
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVFeedDocument, ATVFeedEventGroupElement;
@interface BRChapterGroup : NSObject
{
    ATVFeedDocument * _feedDocument;
    char _showChapterMarkers;
    char _showDescriptionOnChapterSkip;
    NSString * _groupName;
    NSArray * _chapters;
    NSString * _refreshURL;
    unsigned int _refreshIntervalInSeconds;
    NSDate * _startDate;
    NSDictionary * _feedDictionary;
    ATVFeedEventGroupElement * _feedElement;
}

@property (readonly) char showChapterMarkers;
@property (readonly) char showDescriptionOnChapterSkip;
@property (readonly) NSString * groupName;
@property (readonly) NSArray * chapters;
@property (readonly) unsigned int refreshIntervalInSeconds;
@property (retain) NSString * refreshURL;
@property (readonly) NSDate * startDate;
@property (readonly) NSDictionary * feedDictionary;
@property (readonly) ATVFeedEventGroupElement * feedElement;

- (BRChapterGroup *)initWithFeedElement:(ATVFeedEventGroupElement *)arg0;
- (ATVFeedEventGroupElement *)feedElement;
- (char)showChapterMarkers;
- (char)showDescriptionOnChapterSkip;
- (NSDictionary *)feedDictionary;
- (BRChapterGroup *)initWithFeedDictionary:(NSDictionary *)arg0;
- (unsigned int)refreshIntervalInSeconds;
- (unsigned int)chapterCount;
- (NSObject *)_chaptersFromFeedElement:(NSObject *)arg0;
- (NSDictionary *)_chaptersFromFeedDictionary:(NSDictionary *)arg0;
- (BRChapterGroup *)initWithGroupName:(NSString *)arg0 feedDictionary:(NSDictionary *)arg1;
- (void)dealloc;
- (NSString *)groupName;
- (NSArray *)chapters;
- (NSString *)refreshURL;
- (void)setRefreshURL:(NSString *)arg0;
- (NSDate *)startDate;

@end
