/* Runtime dump - PptTextBlock
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PptTextBlock : NSObject
{
    struct PptTextHeaderAtom * mTextHeader;
    NSMutableString * mText;
    struct PptTextBlockStylingAtom * mStyleText;
    NSMutableArray * mMetaCharacterFields;
    NSMutableArray * mBookmarks;
    NSMutableArray * mHyperlinks;
    struct PptTextRulerAtom * mTextRuler;
}

- (void)dealloc;
- (PptTextBlock *)init;
- (NSString *)text;
- (unsigned long)textIndex;
- (id)hyperlinks;
- (int)textType;
- (void)readTextBlock:(id /* block */)arg0;
- (struct PptTextRulerAtom *)textRuler;
- (int)paragraphRunCount;
- (struct PptParaRun *)paragraphRunAtIndex:(NSObject *)arg0;
- (int)characterRunCount;
- (struct PptCharRun *)characterRunAtIndex:(NSObject *)arg0;
- (NSArray *)metaCharacterFields;
- (void)readString:(NSString *)arg0;
- (void)readStyles:(id)arg0;
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg0;
- (void)writeTextBlock:(id /* block */)arg0;
- (NSMutableArray *)bookmarks;

@end
