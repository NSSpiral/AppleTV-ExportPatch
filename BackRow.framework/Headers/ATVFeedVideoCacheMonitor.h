/* Runtime dump - ATVFeedVideoCacheMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRMenuItem, BRPosterControl;
@interface ATVFeedVideoCacheMonitor : NSObject
{
    NSAttributedString * _posterOriginalText;
    char _posterAlwaysShowTitlesOriginal;
    BRMenuItem * _menuItem;
    BRPosterControl * _poster;
    NSArray * _assetIDs;
}

@property (readonly) BRMenuItem * menuItem;
@property (readonly) BRPosterControl * poster;
@property (readonly) NSArray * assetIDs;

- (BRPosterControl *)poster;
- (NSObject *)_initWithObject:(NSObject *)arg0 assetIDs:(NSArray *)arg1;
- (void)_updateMenuItemText;
- (void)_updatePosterText;
- (ATVFeedVideoCacheMonitor *)initWithMenuItem:(BRMenuItem *)arg0 assetIDs:(NSArray *)arg1;
- (ATVFeedVideoCacheMonitor *)initWithPoster:(BRPosterControl *)arg0 assetIDs:(NSArray *)arg1;
- (NSArray *)assetIDs;
- (void)_cacheManagerStateChanged:(NSNotification *)arg0;
- (void)_itemUpdated:(id)arg0;
- (char)_assetWithAssetIDIsLoading;
- (void)dealloc;
- (BRMenuItem *)menuItem;

@end
