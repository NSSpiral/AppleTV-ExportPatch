/* Runtime dump - RUIYTRelatedVideosSubMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol RUIYTDocumentLoaderDelegate;
@protocol RUIYTListDataSourceAspectDelegate;

@class RUIYTAssetsInfo, RUIYTDocument, RUIYTDocumentLoader, RUIYTListDataSourceAspect, RUIYTMediaAsset, RUIYTRelatedVideosControllerSectionHandler;
@interface RUIYTRelatedVideosSubMenuController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate>
{
    RUIYTDocumentLoader * _documentLoader;
    RUIYTListDataSourceAspect * _listDataSourceAspect;
    RUIYTRelatedVideosControllerSectionHandler * _customHandler;
    RUIYTMediaAsset * _origAsset;
    <RUIYTPlayerControlling> * _playerController;
    char _continuePlaybackOnPop;
    char _showingMoreFromAuthor;
    RUIYTAssetsInfo * _relatedAssetsInfo;
    RUIYTAssetsInfo * _authorAssetsInfo;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)wasPushed;
- (void)wasPopped;
- (void)wasExhumed;
- (char)isNetworkDependent;
- (void)documentLoader:(RUIYTDocumentLoader *)arg0 didLoadDocument:(RUIYTDocument *)arg1;
- (char)listDataSourceAspect:(RUIYTListDataSourceAspect *)arg0 loadMoreItemsForSection:(unsigned int)arg1 count:(unsigned int)arg2;
- (RUIYTRelatedVideosSubMenuController *)initWithOriginalAsset:(NSSet *)arg0 blurImage:(UIImage *)arg1 playerController:(<RUIYTPlayerControlling> *)arg2;
- (void)_loadInitialAssetsInfos;
- (NSObject *)_byAuthorDocument;
- (NSObject *)_relatedDocument;
- (char)_isSearchControllerBuried;
- (unsigned int)_normalizeRow:(unsigned int)arg0;
- (void)_playAgain;
- (void)_returnToSearchMenu;
- (void)_goToOptionsMenu;
- (void)_swapVideos;
- (NSObject *)_itemForIndex:(NSObject *)arg0;
- (char)_itemSelectedAtIndex:(NSObject *)arg0 action:(int)arg1 defer:(char *)arg2;
- (void)dealloc;
- (NSString *)identifier;
- (NSArray *)_sections;
- (void).cxx_destruct;
- (void)_resume;

@end
