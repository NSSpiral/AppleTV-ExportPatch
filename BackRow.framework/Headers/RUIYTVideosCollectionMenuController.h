/* Runtime dump - RUIYTVideosCollectionMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol RUIYTDocumentLoaderDelegate;
@protocol RUIYTListDataSourceAspectDelegate;

@class BRMediaMenuView, RUIYTAssetsInfo, RUIYTCollectionsDocumentSpec, RUIYTDocument, RUIYTDocumentLoader, RUIYTListDataSourceAspect;
@interface RUIYTVideosCollectionMenuController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate>
{
    BRMediaMenuView * _mediaMenuView;
    RUIYTCollectionsDocumentSpec * _spec;
    RUIYTDocumentLoader * _documentLoader;
    RUIYTAssetsInfo * _initialAssetsInfo;
    RUIYTListDataSourceAspect * _listDataSourceAspect;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)controllerWithSpec:(RUIYTCollectionsDocumentSpec *)arg0 assetsInfo:(RUIYTAssetsInfo *)arg1;

- (void)wasPushed;
- (void)documentLoader:(RUIYTDocumentLoader *)arg0 didLoadDocument:(RUIYTDocument *)arg1;
- (char)listDataSourceAspect:(RUIYTListDataSourceAspect *)arg0 loadMoreItemsForSection:(unsigned int)arg1 count:(unsigned int)arg2;
- (NSDictionary *)_sectionsWithAssetsInfo:(RUIYTAssetsInfo *)arg0;
- (RUIYTVideosCollectionMenuController *)initWithSpec:(RUIYTCollectionsDocumentSpec *)arg0 assetsInfo:(RUIYTAssetsInfo *)arg1;
- (void)dealloc;
- (NSString *)identifier;
- (void).cxx_destruct;

@end
