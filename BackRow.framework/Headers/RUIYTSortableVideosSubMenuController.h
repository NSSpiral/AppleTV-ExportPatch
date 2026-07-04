/* Runtime dump - RUIYTSortableVideosSubMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRTabControlDelegate;
@protocol RUIYTDocumentLoaderDelegate;
@protocol RUIYTListDataSourceAspectDelegate;

@class BRMediaMenuView, BRTabControl, BRTabControlItem, RUIYTAssetsInfo, RUIYTDocument, RUIYTDocumentLoader, RUIYTListDataSourceAspect, RUIYTVideosDocumentSpec;
@interface RUIYTSortableVideosSubMenuController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTListDataSourceAspectDelegate, BRTabControlDelegate>
{
    BRMediaMenuView * _mediaMenuView;
    NSMutableDictionary * _assetsInfoDictionary;
    NSArray * _timeFilterInfos;
    NSMutableDictionary * _selectionIndices;
    RUIYTVideosDocumentSpec * _spec;
    RUIYTDocumentLoader * _documentLoader;
    RUIYTListDataSourceAspect * _listDataSourceAspect;
    NSString * _selectedTimeFilter;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)controllerWithSpec:(RUIYTVideosDocumentSpec *)arg0 timeFilter:(NSString *)arg1 assetsInfoDictionary:(NSMutableDictionary *)arg2;
+ (RUIYTSortableVideosSubMenuController *)_defaultTimeFilterInfos;
+ (NSObject *)controllerWithSpec:(RUIYTVideosDocumentSpec *)arg0 timeFilter:(NSString *)arg1;

- (void)wasPushed;
- (void)tabControl:(BRTabControl *)arg0 didSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControl:(BRTabControl *)arg0 willSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControlDidChangeNumberOfTabItems:(BRTabControl *)arg0;
- (void)documentLoader:(RUIYTDocumentLoader *)arg0 didLoadDocument:(RUIYTDocument *)arg1;
- (char)listDataSourceAspect:(RUIYTListDataSourceAspect *)arg0 loadMoreItemsForSection:(unsigned int)arg1 count:(unsigned int)arg2;
- (RUIYTSortableVideosSubMenuController *)initWithSpec:(RUIYTVideosDocumentSpec *)arg0 timeFilter:(NSString *)arg1 timeFilterInfos:(NSArray *)arg2 assetsInfoDictionary:(NSMutableDictionary *)arg3;
- (NSObject *)_timeFilterFromPreference;
- (NSDictionary *)_sectionsWithAssetsInfo:(RUIYTAssetsInfo *)arg0;
- (char)_validateTimeFilter:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)identifier;
- (void).cxx_destruct;

@end
