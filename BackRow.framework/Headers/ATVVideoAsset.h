/* Runtime dump - ATVVideoAsset
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRXMLMediaAsset.h>

@protocol ATVInterstitialGroupProvider;
@protocol BRChapterGroupProvider;
@protocol BRMediaAssetDerivesMediaURL;
@protocol BRMercantile;

@class ATVFeedDocument, ATVFeedVideoAssetElement, ATVInterstitialGroup, ATVMerchant, ATVVideoAssetUpdater, BRAuthenticator, BRChapterGroup;
@interface ATVVideoAsset : BRXMLMediaAsset <BRMediaAssetDerivesMediaURL, BRChapterGroupProvider, ATVInterstitialGroupProvider, BRMercantile>
{
    NSDictionary * _data;
    ATVMerchant * _merchant;
    NSDate * _eventStart;
    NSMutableArray * _chapterGroups;
    ATVVideoAssetUpdater * _updater;
    ATVFeedDocument * _feedDocument;
    char _startFromStartDate;
    char _shouldShowTrackPopup;
    ATVInterstitialGroup * _interstitials;
    NSNumber * _bookmarkNetTime;
    ATVFeedVideoAssetElement * _feedElement;
}

@property (retain, nonatomic) ATVMerchant * merchant;
@property (retain, nonatomic) NSDate * eventStart;
@property (readonly, nonatomic) NSDictionary * originalPlist;
@property (retain, nonatomic) ATVFeedVideoAssetElement * feedElement;
@property (nonatomic) char shouldShowTrackPopup;
@property (retain, nonatomic) NSNumber * bookmarkNetTime;
@property (nonatomic) char startFromStartDate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) ATVInterstitialGroup * interstitials;

- (ATVMerchant *)merchant;
- (BRAuthenticator *)secureResourceAuthenticator;
- (void)setMerchant:(ATVMerchant *)arg0;
- (NSString *)mediaDescription;
- (char)isScrubbable;
- (NSDictionary *)infoOverlayDescriptionAttributes;
- (char)shouldShowTrackPopup;
- (ATVVideoAsset *)initWithFeedElement:(ATVFeedVideoAssetElement *)arg0;
- (ATVFeedVideoAssetElement *)feedElement;
- (void)setFeedElement:(ATVFeedVideoAssetElement *)arg0;
- (ATVInterstitialGroup *)interstitials;
- (unsigned int)chapterGroupCount;
- (BRChapterGroup *)chapterGroupAtIndex:(unsigned int)arg0;
- (NSDictionary *)originalPlist;
- (char)hasChapterGroupAtIndex:(unsigned int)arg0;
- (NSMutableArray *)chapterGroups;
- (void)setShouldShowTrackPopup:(char)arg0;
- (void)resolveMediaURL:(id /* block */)arg0;
- (void)setBookmarkNetTime:(NSNumber *)arg0;
- (void)setEventStart:(NSDate *)arg0;
- (void)setStartFromStartDate:(char)arg0;
- (NSNumber *)bookmarkNetTime;
- (void)_fetchEventGroups:(id)arg0 ignoreErrors:(char)arg1 completionHandler:(id /* block */)arg2;
- (char)_requiresAuthenticationCheck;
- (char)startFromStartDate;
- (NSDate *)eventStart;
- (id)_currentlyPlayingChapter;
- (void)addOrReplaceChapterGroup:(NSObject *)arg0;
- (NSObject *)_processLoadedEventGroupDocument:(NSObject *)arg0;
- (void)dealloc;
- (ATVVideoAsset *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)title;
- (id /* <BRImageProxy> */)imageProxy;
- (NSString *)rating;
- (NSDate *)startDate;

@end
