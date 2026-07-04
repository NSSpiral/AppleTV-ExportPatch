/* Runtime dump - WBReadingListPrivate
 * Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WBReadingListPrivate : NSObject <WebBookmarksXPCConnectionDelegate>
{
    WebBookmarksXPCConnection * _connection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (WBReadingListPrivate *)init;
- (void)connection:(WebBookmarksXPCConnection *)arg0 didCloseWithError:(NSError *)arg1;
- (void)_addReadingListItemWithURL:(NSString *)arg0 title:(NSString *)arg1 previewText:(NSString *)arg2;

@end
