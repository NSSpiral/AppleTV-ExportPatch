/* Runtime dump - WebBookmarkList
 * Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkList : NSObject
{
    NSMutableArray * _bookmarks;
    unsigned int _bookmarkCount;
    unsigned int _skipOffset;
    char _customQuery;
    NSString * _query;
    unsigned int _folderID;
    WebBookmarkCollection * _collection;
}

@property (readonly, nonatomic) unsigned int folderID;

- (void)dealloc;
- (unsigned int)folderID;
- (unsigned int)_reverseOrderIndex:(unsigned int)arg0;
- (NSArray *)bookmarkArray;
- (WebBookmarkList *)initWithBookmarksWhere:(NSMutableArray *)arg0 collection:(WebBookmarkCollection *)arg1 bookmarkCount:(unsigned int)arg2 skipOffset:(unsigned int)arg3;
- (WebBookmarkList *)initWithFolderID:(unsigned int)arg0 inCollection:(RadioArtworkCollection *)arg1 bookmarkCount:(unsigned int)arg2 skipOffset:(unsigned int)arg3 includeHidden:(char)arg4;
- (NSObject *)bookmarkAtIndex:(unsigned int)arg0;
- (void)_moveBookmarkAtIndex:(unsigned int)arg0 toIndex:(unsigned int)arg1;
- (unsigned int)bookmarkCount;
- (NSNumber *)bookmarkArrayRequestingCount:(unsigned int)arg0;

@end
