/* Runtime dump - TPSection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPSection : TSPObject <TSKDocumentObject, TSKModel, TSWPSection>
{
    TPDocumentRoot * _documentRoot;
    TSWPStorage * _parentStorage;
    id _pageMasters;
    NSString * _name;
    char _inheritPreviousHeaderFooter;
    char _pageMasterFirstPageDifferent;
    char _pageMasterFirstPageHidesHeaderFooter;
    char _pageMasterEvenOddPagesDifferent;
    unsigned int _sectionStartKind;
    unsigned int _sectionPageNumberKind;
    unsigned int _sectionPageNumberStart;
}

@property (retain, nonatomic) NSString * name;
@property (nonatomic) TSWPStorage * parentStorage;
@property (nonatomic) char inheritPreviousHeaderFooter;
@property (nonatomic) char pageMasterFirstPageDifferent;
@property (nonatomic) char pageMasterFirstPageHidesHeaderFooter;
@property (nonatomic) char pageMasterEvenOddPagesDifferent;
@property (nonatomic) unsigned int sectionStartKind;
@property (nonatomic) unsigned int sectionPageNumberKind;
@property (nonatomic) unsigned int sectionPageNumberStart;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)needsObjectUUID;

- (TPSection *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (TSUUUIDPath *)objectUUIDPath;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (void)setParentStorage:(TSWPStorage *)arg0;
- (TSWPStorage *)parentStorage;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(NSObject *)arg0;
- (char)isHeaderFooterEmpty:(int)arg0;
- (NSObject *)pageMasterOwningModel:(NSObject *)arg0;
- (char)inheritPreviousHeaderFooter;
- (void)setInheritPreviousHeaderFooter:(char)arg0;
- (char)pageMasterFirstPageDifferent;
- (void)setPageMasterFirstPageDifferent:(char)arg0;
- (char)pageMasterFirstPageHidesHeaderFooter;
- (void)setPageMasterFirstPageHidesHeaderFooter:(char)arg0;
- (char)pageMasterEvenOddPagesDifferent;
- (void)setPageMasterEvenOddPagesDifferent:(char)arg0;
- (unsigned int)sectionStartKind;
- (void)setSectionStartKind:(unsigned int)arg0;
- (unsigned int)sectionPageNumberKind;
- (void)setSectionPageNumberKind:(unsigned int)arg0;
- (unsigned int)sectionPageNumberStart;
- (void)setSectionPageNumberStart:(unsigned int)arg0;
- (void)i_clearPropertiesToDefaults;
- (void)p_makeUserGuideStorage;
- (void)p_unarchiveAndUpgrade:(id)arg0 archive:(struct SectionArchive *)arg1;
- (void)i_setDocumentRoot:(NSObject *)arg0;
- (void)p_upgradePageSizeAndMarginsFromParsedArchive:(struct SectionArchive *)arg0;
- (TPSection *)initWithContext:(NSObject *)arg0 section:(UITableViewSection *)arg1;
- (id)pageMasters;
- (NSObject *)pageMasterForType:(int)arg0;
- (void)i_copyHeadersAndFootersFrom:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (char)isHeaderFooterVisible:(int)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (TPSection *)initWithContext:(TSPObjectContext *)arg0;
- (NSEnumerator *)childEnumerator;

@end
