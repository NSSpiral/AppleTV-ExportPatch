/* Runtime dump - MCBookmarkManager
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCBookmarkManager : NSObject
{
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSArray * _memberQueueCurrentUserBookmarks;
    NSDictionary * _memberQueueStashedBookmarksByLabel;
    int _notificationToken;
}

@property (copy, nonatomic) NSArray * userBookmarks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * memberQueue;
@property (retain, nonatomic) NSArray * memberQueueCurrentUserBookmarks;
@property (retain, nonatomic) NSDictionary * memberQueueStashedBookmarksByLabel;
@property (nonatomic) int notificationToken;

+ (MCBookmarkManager *)sharedManager;

- (MCBookmarkManager *)init;
- (NSObject<OS_dispatch_queue> *)memberQueue;
- (void)setMemberQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void).cxx_destruct;
- (void)memberQueueRereadBookmarks;
- (void)memberQueueSetUserBookmarks:(id)arg0;
- (NSArray *)memberQueueCurrentUserBookmarks;
- (void)memberQueueSetStashedUserBookmarksByLabel:(NSString *)arg0;
- (void)memberQueueStashUserBookmarksWithLabel:(NSString *)arg0 newUserBookmarks:(id)arg1;
- (void)setUserBookmarks:(NSArray *)arg0;
- (NSArray *)userBookmarks;
- (void)stashUserBookmarksWithLabel:(NSString *)arg0 newUserBookmarks:(id)arg1;
- (void)unstashUserBookmarksFromLabel:(NSString *)arg0;
- (void)setMemberQueueCurrentUserBookmarks:(NSArray *)arg0;
- (NSDictionary *)memberQueueStashedBookmarksByLabel;
- (void)setMemberQueueStashedBookmarksByLabel:(NSDictionary *)arg0;
- (int)notificationToken;
- (void)setNotificationToken:(int)arg0;

@end
