/* Runtime dump - SCROBrailleDisplayHistory
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleDisplayHistory : NSObject
{
    struct __CFArray * _announcements;
    struct __CFArray * _unreadSnapshot;
    long _currentIndex;
    long _unreadCount;
}

+ (void)initialize;

- (void)dealloc;
- (SCROBrailleDisplayHistory *)init;
- (char)_moveIndexBy:(long)arg0;
- (void)addString:(NSString *)arg0;
- (void)snapshotUnread;
- (void)markSnapshotAsRead;
- (char)hasUnread;
- (NSString *)currentString;
- (char)moveToNext;
- (char)moveToPrevious;
- (char)isOnMostRecent;
- (void)moveToMostRecent;

@end
