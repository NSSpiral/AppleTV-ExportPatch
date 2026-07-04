/* Runtime dump - WMBookmarkMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMBookmarkMapper : CMMapper
{
    NSString * mName;
    int mBookmarkType;
}

- (WMBookmarkMapper *)initWithWDBookmark:(WDBookmark *)arg0 parent:(NSObject *)arg1;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;

@end
