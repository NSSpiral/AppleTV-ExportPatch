/* Runtime dump - ATVPlayerBookmarkMonitor
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPlayerBookmarkMonitor : NSObject

- (ATVPlayerBookmarkMonitor *)initWithPlayer:(ATVPlayer *)arg0;
- (void)dealloc;
- (void)_playerStateWillChange:(NSDictionary *)arg0;
- (void)_playerCurrentMediaItemWillChange:(NSDictionary *)arg0;
- (void)_playerErrorDidOccur:(id)arg0;
- (void)_updateBookmarkTimeForMediaItem:(NSObject *)arg0 player:(ATVPlayer *)arg1;

@end
