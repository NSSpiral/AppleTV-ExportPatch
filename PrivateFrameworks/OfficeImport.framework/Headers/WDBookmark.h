/* Runtime dump - WDBookmark
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDBookmark : WDRun
{
    NSString * mName;
    int mBookmarkType;
}

- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (int)bookmarkType;
- (int)runType;
- (WDBookmark *)initWithParagraph:(CPParagraph *)arg0 name:(NSString *)arg1 type:(int)arg2;
- (void)setBookmarkType:(int)arg0;

@end
