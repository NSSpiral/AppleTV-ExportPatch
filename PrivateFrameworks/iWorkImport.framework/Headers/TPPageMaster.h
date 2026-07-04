/* Runtime dump - TPPageMaster
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageMaster : TSPObject <TSWPHeaderFooterProvider, TPMasterDrawableProvider, TSKDocumentObject, TSKModel, TSPCopying>
{
    TPDocumentRoot * _documentRoot;
    TPSection * _section;
    id _headerFooters;
    NSMutableArray * _masterDrawables;
}

@property (nonatomic) TPSection * section;
@property (readonly, nonatomic) NSArray * masterDrawables;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TPPageMaster *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (void)setParentStorage:(TSWPStorage *)arg0;
- (char)isHeaderFooterEmpty:(int)arg0;
- (char)isHeaderFooterEmpty:(int)arg0 fragmentAtIndex:(int)arg1;
- (char)usesSingleHeaderFooter;
- (int)headerFooterTypeForModel:(NSObject *)arg0;
- (int)headerFragmentIndexForModel:(NSObject *)arg0;
- (id)headerFooter:(int)arg0 fragmentAtIndex:(int)arg1;
- (NSEnumerator *)headerFooterFragmentEnumerator;
- (float)bodyWidth;
- (NSArray *)masterDrawables;
- (TPPageMaster *)initWithSection:(TPSection *)arg0;
- (void)i_setDocumentRoot:(NSObject *)arg0;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(NSObject *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 context:(NSObject *)arg2;
- (void)i_copyHeadersAndFootersFrom:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)i_setHeaderFooter:(int)arg0 storage:(TSWPStorage *)arg1 fragmentIndex:(int)arg2;
- (void)i_addMasterDrawable:(id)arg0;
- (char)ownsModelObject:(NSObject *)arg0;
- (void)addMasterDrawable:(id)arg0 atIndex:(unsigned int)arg1 insertContext:(NSObject *)arg2 suppressDOLC:(char)arg3;
- (float)pHeightOfHeaderFooter:(int)arg0;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg0 withStylesheet:(NSObject *)arg1 withMapper:(NSObject *)arg2;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg0 withStylesheet:(NSObject *)arg1 withMapper:(NSObject *)arg2;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg0 documentRoot:(TPDocumentRoot *)arg1 context:(NSObject *)arg2;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg0 documentRoot:(TPDocumentRoot *)arg1 context:(NSObject *)arg2;
- (void)i_createHeadersFooters:(int)arg0 stylesheet:(TSSStylesheet *)arg1 paragraphStyle:(TSWPParagraphStyle *)arg2 context:(NSObject *)arg3 mayAlreadyExist:(char)arg4;
- (void)p_makeHeadersFootersPerformSelector:(SEL)arg0 documentRoot:(TPDocumentRoot *)arg1;
- (void)p_makeMasterDrawablesPerformSelector:(SEL)arg0 documentRoot:(TPDocumentRoot *)arg1;
- (id)p_headerAndFooterStorages;
- (void)p_splitHeaderFooterByTabs:(id)arg0 storages:(id *)arg1 dolcContext:(NSObject *)arg2 bodyWidth:(float)arg3;
- (void)i_splitHeaderFooter:(id)arg0 storages:(id *)arg1 dolcContext:(NSObject *)arg2 bodyWidth:(float)arg3;
- (int)p_headerFragmentIndexForTabIndex:(unsigned int)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 bodyWidth:(float)arg2;
- (void)p_filterParagraphStylesOnHeaderFooterStorage:(id)arg0 stylesheet:(TSSStylesheet *)arg1;
- (unsigned int)countOfMasterDrawables;
- (id)masterDrawablesSortedByZOrder:(id)arg0;
- (unsigned int)indexOfMasterDrawable:(id)arg0;
- (void)addMasterDrawables:(id)arg0 atIndex:(unsigned int)arg1 insertContext:(NSObject *)arg2 suppressDOLC:(char)arg3;
- (void)removeMasterDrawable:(id)arg0 suppressDOLC:(char)arg1;
- (void)i_importHeaderFooter:(id)arg0 headerType:(int)arg1 dolcContext:(NSObject *)arg2 splitHeaders:(char)arg3;
- (void)dealloc;
- (NSString *)description;
- (TPSection *)section;
- (float)headerHeight;
- (float)footerHeight;
- (void)setSection:(TPSection *)arg0;
- (NSEnumerator *)childEnumerator;
- (TPDocumentRoot *)documentRoot;

@end
