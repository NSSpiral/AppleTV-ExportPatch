/* Runtime dump - BABookmarkItem
 * Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface BABookmarkItem : NSObject
{
    WebBookmarkCollection * _collection;
    WebBookmark * _bookmark;
}

@property (readonly, nonatomic) WebBookmarkCollection * collection;
@property (retain, nonatomic) WebBookmark * bookmark;

- (WebBookmarkCollection *)collection;
- (void)dealloc;
- (NSString *)description;
- (WebBookmark *)bookmark;
- (BABookmarkItem *)initWithBookmarkCollection:(WebBookmark *)arg0 bookmark:(WebBookmark *)arg1;
- (void)setBookmark:(WebBookmark *)arg0;

@end
