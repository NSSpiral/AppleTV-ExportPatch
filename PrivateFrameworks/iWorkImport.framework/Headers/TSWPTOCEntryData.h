/* Runtime dump - TSWPTOCEntryData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCEntryData : TSPObject <TSPCopying>
{
    unsigned int _paragraphIndex;
    unsigned int _pageNumber;
    int _numberFormat;
    NSString * _heading;
    TSWPParagraphStyle * _indexedStyle;
    TSWPListStyle * _indexedListStyle;
    unsigned int _indexedListStart;
    unsigned int _indexedParagraphLevel;
}

@property (readonly, nonatomic) unsigned int paragraphIndex;
@property (readonly, nonatomic) unsigned int pageNumber;
@property (readonly, nonatomic) int numberFormat;
@property (readonly, nonatomic) NSString * heading;
@property (readonly, nonatomic) TSWPParagraphStyle * indexedStyle;
@property (readonly, nonatomic) TSWPListStyle * indexedListStyle;
@property (readonly, nonatomic) unsigned int indexedListStart;
@property (readonly, nonatomic) unsigned int indexedParagraphLevel;

+ (NSObject *)tocEntryDataWithParagraphIndex:(unsigned int)arg0 pageNumber:(unsigned int)arg1 numberFormat:(int)arg2 heading:(NSString *)arg3 indexedStyle:(TSWPParagraphStyle *)arg4 indexedListStyle:(TSWPListStyle *)arg5 indexedListStart:(unsigned int)arg6 indexedParagraphLevel:(unsigned int)arg7;

- (unsigned int)paragraphIndex;
- (TSWPTOCEntryData *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct TOCEntryInstanceArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct TOCEntryInstanceArchive *)arg0 unarchiver:(struct TOCEntryInstanceArchive)arg1;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (TSWPParagraphStyle *)indexedStyle;
- (TSWPListStyle *)indexedListStyle;
- (unsigned int)indexedParagraphLevel;
- (unsigned int)indexedListStart;
- (TSWPTOCEntryData *)initWithParagraphIndex:(unsigned int)arg0 pageNumber:(unsigned int)arg1 numberFormat:(int)arg2 heading:(NSString *)arg3 indexedStyle:(TSWPParagraphStyle *)arg4 indexedListStyle:(TSWPListStyle *)arg5 indexedListStart:(unsigned int)arg6 indexedParagraphLevel:(unsigned int)arg7;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (unsigned int)pageNumber;
- (int)numberFormat;
- (NSString *)heading;

@end
