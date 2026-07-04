/* Runtime dump - BAChangeRecord
 * Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface BAChangeRecord : NSObject
{
    WebBookmarkCollection * _collection;
    WebBookmark * _bookmark;
    int _changeType;
}

@property (readonly, nonatomic) WebBookmarkCollection * collection;
@property (readonly, nonatomic) WebBookmark * bookmark;
@property (readonly, nonatomic) int changeType;

- (WebBookmarkCollection *)collection;
- (void)dealloc;
- (NSString *)description;
- (WebBookmark *)bookmark;
- (int)changeType;
- (NSString *)changeTypeDescription;
- (BAChangeRecord *)initWithBookmarkCollection:(WebBookmark *)arg0 bookmark:(WebBookmark *)arg1 changeType:(int)arg2;

@end
