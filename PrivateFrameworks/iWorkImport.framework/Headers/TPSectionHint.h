/* Runtime dump - TPSectionHint
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPSectionHint : NSObject
{
    NSMutableArray * _pageHints;
    unsigned int _documentStartPageIndex;
}

@property (readonly, nonatomic) NSArray * pageHints;
@property (nonatomic) unsigned int documentStartPageIndex;
@property (readonly, nonatomic) struct _NSRange documentPageRange;
@property (readonly, nonatomic) unsigned int pageCount;
@property (readonly, nonatomic) unsigned int pageCountWithoutFillerPage;
@property (readonly, nonatomic) unsigned int lastPageIndex;

+ (char)verifyHints:(id)arg0 withBodyStorage:(TSWPStorage *)arg1 upToPageIndex:(unsigned int)arg2;

- (TPSectionHint *)initWithArchive:(struct SectionHintArchive *)arg0 unarchiver:(struct SectionHintArchive)arg1;
- (id)copyForArchiving;
- (struct _NSRange)documentPageRange;
- (NSArray *)pageHints;
- (void)setDocumentStartPageIndex:(unsigned int)arg0;
- (NSObject *)pageHintForPageIndex:(unsigned int)arg0;
- (void)trimPageHintsFromPageIndex:(unsigned int)arg0;
- (void)setPageHints:(NSArray *)arg0;
- (unsigned int)documentStartPageIndex;
- (void)saveToArchive:(struct SectionHintArchive *)arg0 archiver:(NSObject *)arg1 context:(NSObject *)arg2 shouldArchiveHintBlock:(unsigned int)arg3;
- (char)hasPageHintOfKind:(int)arg0 atPageIndex:(unsigned int)arg1;
- (unsigned int)pageCountWithoutFillerPage;
- (unsigned int)lastPageIndex;
- (char)hasPageHintOfKind:(int)arg0 beforePageIndex:(unsigned int)arg1;
- (char)containsDocumentPageIndex:(unsigned int)arg0;
- (void)dealloc;
- (TPSectionHint *)init;
- (unsigned int)pageCount;

@end
