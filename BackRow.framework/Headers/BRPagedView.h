/* Runtime dump - BRPagedView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRContainerViewCell;

@class BRControl, BRDotArrayControl, BREvent, BRImageControl;
@interface BRPagedView : BRControl <BRContainerViewCell>
{
    id _delegate;
    id _dataSource;
    unsigned int _currentPage;
    BRControl * _contentPanel;
    BRControl * _content;
    ATVImage * _arrowImage;
    BRImageControl * _rightArrow;
    BRImageControl * _leftArrow;
    BRDotArrayControl * _pageDots;
    CATransition * _prevPageTransition;
    CATransition * _nextPageTransition;
    char _showsArrows;
    char _showsDots;
    id _loadCompletionBlock;
    char _delegateRetained;
    char _dataSourceRetained;
    struct ? _preferredContentHeight;
}

@property id dataSource;
@property id delegate;
@property char showsArrows;
@property char showsDots;
@property (retain) CATransition * nextPageTransition;
@property (retain) CATransition * prevPageTransition;
@property struct ? preferredContentHeight;
@property (readonly) unsigned int currentPage;
@property (readonly, retain) BRControl * currentContent;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)windowMaxBoundsChanged;
- (void)setIgnoreLoadAndDisplayOnDemand;
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(char)arg0;
- (void)cancelContainerViewLoad;
- (void)setReadyToDisplay;
- (void)setDatasource:(YTSearchVideoDataSource *)arg0;
- (char)nextPage;
- (char)prevPage;
- (BRControl *)currentContent;
- (char)showsArrows;
- (void)setShowsArrows:(char)arg0;
- (char)showsDots;
- (void)setShowsDots:(char)arg0;
- (CATransition *)nextPageTransition;
- (void)setNextPageTransition:(CATransition *)arg0;
- (CATransition *)prevPageTransition;
- (void)setPrevPageTransition:(CATransition *)arg0;
- (void)setPreferredContentHeight:(struct ?)arg0;
- (void)loadWithCompletionBlock:(id /* block */)arg0;
- (void)dealloc;
- (void)setDataSource:(NSObject *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (void)reloadData;
- (BRPagedView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSObject *)dataSource;
- (NSObject *)delegate;
- (unsigned int)currentPage;
- (void)removeFromParent;
- (struct ?)preferredContentHeight;

@end
