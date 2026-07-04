/* Runtime dump - QLScrubView
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLScrubView : UIView <UIGestureRecognizerDelegate>
{
    <QLScrubViewDataSource> * _dataSource;
    id _delegate;
    char _runOnMainThread;
    char _needsThumbLayout;
    float _thumbOrigin;
    float _thumbEnd;
    float _thumbHeight;
    int _pageCount;
    int _selectedPage;
    NSOperationQueue * _queue;
    NSMutableSet * _operations;
    NSMutableDictionary * _thumbViews;
    NSMutableArray * _visibleThumbIndexes;
    QLThumbnailView * _selectedThumbnailView;
    QLPageNumberView * _pageNumberLabel;
}

@property <QLScrubViewDataSource> * dataSource;
@property id delegate;
@property char runOnMainThread;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (float)defaultWidth;

- (void)selectPageNumber:(int)arg0;
- (void)reloadThumbnails;
- (void)setRunOnMainThread:(char)arg0;
- (void)panReceived:(id)arg0;
- (void)tapReceived:(id)arg0;
- (void)longTapReceived:(id)arg0;
- (void)_cancelAllOperations;
- (void)_removeThumbviews;
- (void)_updateSelectedThumbnailView;
- (void)_notifyPageChanged;
- (void)_updatePageLabelPosition;
- (void)_notifyScrubingStarted;
- (void)_showPageLabel;
- (void)_handleSwipAtLocation:(struct CGPoint)arg0;
- (void)_notifyScrubingEnded;
- (void)_hidePageLabel;
- (struct CGRect)_thumbnailFrameForPageAtIndex:(NSObject *)arg0;
- (char)runOnMainThread;
- (QLScrubView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setDataSource:(<QLScrubViewDataSource> *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (<QLScrubViewDataSource> *)dataSource;
- (NSObject *)delegate;
- (char)gestureRecognizer:(ADTapGestureRecognizer *)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(ADTapGestureRecognizer *)arg1;
- (void)didReceiveMemoryWarning;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;

@end
