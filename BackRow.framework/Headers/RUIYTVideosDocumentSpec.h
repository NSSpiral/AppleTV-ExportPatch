/* Runtime dump - RUIYTVideosDocumentSpec
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol RUIYTFeedDocumentSpec;
@interface RUIYTVideosDocumentSpec : NSObject <RUIYTFeedDocumentSpec>
{
    char _isPlaylist;
    char _requiresAccessToken;
    int _type;
    NSString * _sortPreferenceKey;
    NSString * _title;
    double _refreshInterval;
}

@property (nonatomic) int type;
@property (retain, nonatomic) NSString * sortPreferenceKey;
@property (nonatomic) char isPlaylist;
@property (retain, nonatomic) NSString * title;
@property (nonatomic) double refreshInterval;
@property (nonatomic) char requiresAccessToken;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) NSString * moreSingleTitle;
@property (readonly, nonatomic) NSString * moreNToMTitle;
@property (readonly, nonatomic) NSString * moreSingleRemainingSubTitle;
@property (readonly, nonatomic) NSString * moreNTotalSubTitle;
@property (readonly, nonatomic) NSString * moreNRemainingSubTitle;
@property (readonly, nonatomic) NSString * noContentErrorMessage;

+ (NSObject *)videosDocumentSpecForType:(int)arg0;
+ (NSObject *)videosDocumentSpecForType:(int)arg0 title:(NSString *)arg1 feedURL:(NSURL *)arg2 requiresAccessToken:(char)arg3;
+ (RUIYTVideosDocumentSpec *)fetchDocumentSpecWithAssetIDs:(NSArray *)arg0;
+ (RUIYTVideosDocumentSpec *)videoSearchDocumentSpecWithSearchTerm:(NSString *)arg0;
+ (NSString *)byAuthorDocumentSpecWithAuthorName:(NSString *)arg0;
+ (NSSet *)relatedDocumentSpecWithAsset:(NSSet *)arg0;

- (char)isPlaylist;
- (NSString *)noContentErrorMessage;
- (char)requiresAccessToken;
- (NSString *)sortPreferenceKey;
- (NSObject *)videosDocument;
- (void)setRequiresAccessToken:(char)arg0;
- (NSString *)moreSingleTitle;
- (NSString *)moreNToMTitle;
- (NSString *)moreSingleRemainingSubTitle;
- (NSString *)moreNTotalSubTitle;
- (NSString *)moreNRemainingSubTitle;
- (void)setSortPreferenceKey:(NSString *)arg0;
- (void)setIsPlaylist:(char)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)identifier;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)title;
- (void).cxx_destruct;
- (double)refreshInterval;
- (void)setRefreshInterval:(double)arg0;

@end
