/* Runtime dump - YTFavoritesController
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTFavoritesController : NSObject
{
    NSMutableArray * _pendingFavoritesShortIDs;
    NSMutableArray * _mergedFavorites;
    YTAuthenticatedAccountPost * _accountPost;
    YTAccountFeedRequest * _accountFeedRequest;
    char _usingAccountFavorites;
    char _shouldOfferMergeOfLocalBookmarks;
    NSURL * _batchURL;
    NSMutableArray * _bookmarkVideos;
    NSMutableArray * _bookmarkShortIDs;
    <YTFavoritesControllerDelegate> * _mergeBookmarksDelegate;
}

+ (YTFavoritesController *)sharedFavoritesController;

- (void)dealloc;
- (char)usingAccountFavorites;
- (NSMutableArray *)bookmarkedShortIDs;
- (void)bookmarksSearchRequestInterrupted;
- (id)bookmarkedVideos;
- (void)searchRequestReturnedVideos:(id)arg0;
- (void)setBatchURL:(NSURL *)arg0;
- (void)YTAuthenticatedAccountPost:(YTAuthenticatedAccountPost *)arg0 didFinishWithType:(int)arg1 error:(NSError *)arg2;
- (void)_processNextPendingFavoritesBatch;
- (void)saveBookmarksIfNeeded;
- (void)_saveBookmarks;
- (void)_loadBookmarks;
- (void)setLocalBookmarksMergeOffered:(char)arg0;
- (void)_bookmarksDidChangeNotifyObservers:(char)arg0;
- (void)addLocalBookmarkForVideo:(id)arg0;
- (void)setUsingAccountFavorites:(char)arg0;
- (char)shouldOfferMergeOfLocalBookmarks;
- (void)mergeLocalBookmarksToAccountFavoritesWithDelegate:(NSObject *)arg0;
- (void)addFavoriteForVideo:(id)arg0;
- (void)removeFavoriteForVideo:(id)arg0;
- (NSURL *)batchURL;
- (void)accountFeedRequest:(YTAccountFeedRequest *)arg0 receivedVideos:(id)arg1;
- (void)accountFeedRequest:(YTAccountFeedRequest *)arg0 didFailWithError:(NSError *)arg1;

@end
