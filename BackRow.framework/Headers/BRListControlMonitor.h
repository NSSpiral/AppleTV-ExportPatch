/* Runtime dump - BRListControlMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRListControl;
@interface BRListControlMonitor : NSObject
{
    BRListControl * _listControl;
    struct _NSRange _loadingRange;
    long _dataCount;
}

- (void)setListControl:(BRListControl *)arg0;
- (void)cancelCurrentLoads;
- (void)_cancelLoads;
- (void)_listSelectionFinalized:(id)arg0;
- (void)_loadImagesForOnScreenRows;
- (void)dealloc;

@end
