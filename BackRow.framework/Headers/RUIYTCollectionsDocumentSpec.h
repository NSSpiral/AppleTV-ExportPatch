/* Runtime dump - RUIYTCollectionsDocumentSpec
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol RUIYTFeedDocumentSpec;
@interface RUIYTCollectionsDocumentSpec : NSObject <RUIYTFeedDocumentSpec>
{
    char _requiresAccessToken;
    int _type;
    NSString * _title;
    double _refreshInterval;
}

@property int type;
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

+ (NSObject *)collectionsDocumentSpecForType:(int)arg0;
+ (RUIYTCollectionsDocumentSpec *)playlistSearchDocumentSpecWithSearchTerm:(NSString *)arg0;

- (NSString *)noContentErrorMessage;
- (char)requiresAccessToken;
- (NSObject *)collectionsDocument;
- (id)videosDocumentSpecForCollection:(id)arg0;
- (void)setRequiresAccessToken:(char)arg0;
- (NSString *)moreSingleTitle;
- (NSString *)moreNToMTitle;
- (NSString *)moreSingleRemainingSubTitle;
- (NSString *)moreNTotalSubTitle;
- (NSString *)moreNRemainingSubTitle;
- (void)setTitle:(NSString *)arg0;
- (NSString *)identifier;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)title;
- (void).cxx_destruct;
- (double)refreshInterval;
- (void)setRefreshInterval:(double)arg0;

@end
