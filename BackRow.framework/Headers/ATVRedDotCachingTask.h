/* Runtime dump - ATVRedDotCachingTask
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVRedDotCachingTask : ATVBackgroundTask
{
    char _isCancelled;
    char _isRunning;
    NSMutableArray * _favorites;
    NSMutableArray * _fetchKeys;
}

@property char isCancelled;
@property char isRunning;
@property (retain) NSMutableArray * favorites;
@property (retain) NSMutableArray * fetchKeys;

+ (void)startPeriodicUpdateTaskIfNeeded;

- (NSMutableArray *)favorites;
- (void)setFetchKeys:(NSMutableArray *)arg0;
- (void)_fetchStoreFavorites;
- (void)setFavorites:(NSMutableArray *)arg0;
- (void)_processFavorites;
- (NSMutableArray *)fetchKeys;
- (ATVRedDotCachingTask *)init;
- (void)stop;
- (char)isCancelled;
- (char)perform;
- (char)isRunning;
- (void).cxx_destruct;
- (void)setIsCancelled:(char)arg0;
- (void)_finish;
- (void)setIsRunning:(char)arg0;

@end
