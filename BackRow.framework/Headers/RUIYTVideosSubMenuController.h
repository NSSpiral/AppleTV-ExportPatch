/* Runtime dump - RUIYTVideosSubMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol RUIYTDocumentLoaderDelegate;
@protocol RUIYTListDataSourceAspectDelegate;

@class BRMediaMenuView, RUIYTAssetsInfo, RUIYTDocument, RUIYTDocumentLoader, RUIYTListDataSourceAspect, RUIYTVideosDocumentSpec;
@interface RUIYTVideosSubMenuController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate>
{
    BRMediaMenuView * _mediaMenuView;
    RUIYTDocumentLoader * _documentLoader;
    RUIYTVideosDocumentSpec * _spec;
    RUIYTAssetsInfo * _initialAssetsInfo;
    char _playWhenPushed;
    RUIYTListDataSourceAspect * _listDataSourceAspect;
}

@property char playWhenPushed;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)controllerWithSpec:(RUIYTVideosDocumentSpec *)arg0 assetsInfo:(RUIYTAssetsInfo *)arg1;
+ (NSObject *)controllerWithSpec:(RUIYTVideosDocumentSpec *)arg0;

- (void)wasPushed;
- (void)_invalidateFavoritesNotification:(NSNotification *)arg0;
- (void)setPlayWhenPushed:(char)arg0;
- (void)documentLoader:(RUIYTDocumentLoader *)arg0 didLoadDocument:(RUIYTDocument *)arg1;
- (char)listDataSourceAspect:(RUIYTListDataSourceAspect *)arg0 loadMoreItemsForSection:(unsigned int)arg1 count:(unsigned int)arg2;
- (NSDictionary *)_sectionsWithAssetsInfo:(RUIYTAssetsInfo *)arg0;
- (RUIYTVideosSubMenuController *)initWithSpec:(RUIYTVideosDocumentSpec *)arg0 assetsInfo:(RUIYTAssetsInfo *)arg1;
- (char)playWhenPushed;
- (void)dealloc;
- (NSString *)identifier;
- (void).cxx_destruct;

@end
