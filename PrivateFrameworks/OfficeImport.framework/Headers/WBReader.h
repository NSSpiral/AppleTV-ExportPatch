/* Runtime dump - WBReader
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBReader : OCBReader
{
    struct WrdNoteTable * mFootnoteTable;
    struct WrdNoteTable * mEndnoteTable;
    struct WrdAnnotationTable * mAnnotationTable;
    struct WrdCPTableHeaders * mTableHeaders;
    struct WrdBookmarkTable * mBookmarkTable;
    struct WrdBookmarkTable * mAnnotationBookmarkTable;
    id mFieldPositionTables;
    struct WrdStoryTable * mStoryTable;
    struct WrdStoryTable * mHeaderStoryTable;
    struct WrdFileShapeAddressTable * mFileShapeAddressTable;
    struct WrdFileShapeAddressTable * mFileShapeAddressHeaderTable;
    struct WrdEshObjectFactory * mEshObjectFactory;
    struct WrdParagraphProperties * mLastRowParagraphProperties;
    NSMutableArray * mAnnotationOwners;
    OITSUNoCopyDictionary * mIndexToStyles;
    OITSUNoCopyDictionary * mIndexToFonts;
    WDDocument * mTargetDocument;
    WBOfficeArtReaderState * mOfficeArtState;
    struct vector<WBTextBoxReaderInfo, std::__1::allocator<WBTextBoxReaderInfo> > * mTextBoxes;
    char mReportProgress;
    id mAnnotationRangeStart;
    NSMutableDictionary * mBookmarkIndexToAnnotationRangeStartMap;
}

@property (nonatomic) WDDocument * targetDocument;

- (void)dealloc;
- (void)initialize;
- (char)start;
- (NSObject *)fontAtIndex:(int)arg0;
- (WBReader *)initWithCancelDelegate:(<TCCancelDelegate> *)arg0 tracing:(TCImportTracing *)arg1;
- (NSObject *)read;
- (NSObject *)drawableForShapeId:(unsigned int)arg0;
- (struct WrdEshObjectFactory *)eshObjectFactory;
- (NSObject *)officeArtState;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(SFUCryptoKey *)arg0 baseOutputFilenameInUTF8:(SEL)arg1;
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;
- (void)setOfficeArtState:(NSObject *)arg0;
- (struct WrdAnnotationTable *)annotationTable;
- (struct WrdBinaryReader *)wrdReader;
- (NSObject *)annotationOwner:(int)arg0;
- (struct WrdBookmarkTable *)annotationBookmarkTable;
- (void)setAnnotationRangeStart:(id)arg0;
- (NSObject *)readCharactersFrom:(unsigned int)arg0 to:(unsigned int)arg1 textType:(int)arg2;
- (struct WrdBookmarkTable *)bookmarkTable;
- (id)readCharactersForTextRun:(struct WrdTextRun *)arg0;
- (void)setTargetDocument:(WDDocument *)arg0;
- (struct WrdCPTableHeaders *)tableHeaders;
- (unsigned int)textBoxCount;
- (struct WBTextBoxReaderInfo)textBoxInfoAtIndex:(unsigned int)arg0;
- (struct WrdNoteTable *)footnoteTable;
- (struct WrdNoteTable *)endnoteTable;
- (id)annotationRangeStart;
- (struct WrdFieldPositionTable *)fieldPositionTableForTextType:(unsigned int)arg0;
- (void)setAnnotationRangeStart:(id)arg0 forBookmarkIndex:(unsigned int)arg1;
- (NSObject *)annotationRangeStartForBookmarkIndex:(unsigned int)arg0;
- (struct WrdStoryTable *)storyTable;
- (struct WrdStoryTable *)headerStoryTable;
- (struct WrdFileShapeAddressTable *)fileShapeAddressTable;
- (struct WrdFileShapeAddressTable *)fileShapeAddressHeaderTable;
- (struct WrdParagraphProperties *)lastRowParagraphProperties;
- (void)setLastRowParagraphProperties:(struct WrdParagraphProperties *)arg0;
- (void)addStyle:(struct __CFString *)arg0 index:(int)arg1;
- (void)addFont:(UIFont *)arg0 index:(int)arg1;
- (char)reportProgress;
- (void)setReportProgress:(char)arg0;
- (void)cacheTextBox:(id)arg0 withChainIndex:(unsigned short)arg1;
- (WDDocument *)targetDocument;
- (NSObject *)styleAtIndex:(int)arg0;

@end
