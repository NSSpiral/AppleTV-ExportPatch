/* Runtime dump - WBReadingList
 * Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WBReadingList : NSObject
{
    WBReadingListPrivate * _private;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (char)supportsURL:(NSURL *)arg0;
+ (WBReadingList *)defaultReadingList;

- (void)dealloc;
- (WBReadingList *)init;
- (WBReadingList *)_init;
- (char)addReadingListItemWithURL:(NSString *)arg0 title:(NSString *)arg1 previewText:(NSString *)arg2 error:(id *)arg3;

@end
