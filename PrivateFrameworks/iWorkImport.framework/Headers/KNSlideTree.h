/* Runtime dump - KNSlideTree
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideTree : TSPContainedObject <KNSlideCollection>
{
    NSMutableOrderedSet * mSlideNodes;
    NSMutableArray * mDisplayedSlideNodeCache;
    NSMutableDictionary * mSlideNodesForUniqueIdentifiersCache;
    NSMutableDictionary * mSlideNodesForFormulaReferenceNamesCache;
    TSUPointerKeyDictionary * mFormulaReferenceNamesForSlideNodesCache;
}

@property (readonly, nonatomic) NSArray * slideNodes;
@property (readonly, nonatomic) NSArray * visibleSlideNodes;
@property (retain, nonatomic) NSArray * displayedSlideNodes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) KNSlideNode * defaultSlideNodeForNewSelection;

+ (KNSlideTree *)slideNodeDepthMapToCleanUpSlideNodes:(id)arg0 minimumValidDepth:(unsigned int)arg1;
+ (KNSlideTree *)slideNodeDepthMapToCleanUpSlideNodes:(id)arg0 atDepths:(id)arg1 minimumValidDepth:(unsigned int)arg2;

- (void)saveToArchive:(struct SlideTreeArchive *)arg0 archiver:(NSObject *)arg1;
- (KNSlideTree *)initWithArchive:(struct SlideTreeArchive *)arg0 unarchiver:(struct SlideTreeArchive)arg1 owner:(NSObject *)arg2;
- (NSArray *)slideNodes;
- (unsigned int)slideNumberForSlideNode:(NSObject *)arg0;
- (NSArray *)visibleSlideNodes;
- (NSObject *)formulaReferenceNameForSlideNode:(NSObject *)arg0;
- (NSString *)slideNodeForFormulaReferenceName:(NSString *)arg0 caseSensitive:(char)arg1;
- (NSString *)slideNamesMatchingPrefix:(NSString *)arg0;
- (void)addSlideNode:(NSObject *)arg0 atDepth:(unsigned int)arg1 dolcContext:(NSObject *)arg2;
- (NSArray *)displayedSlideNodes;
- (unsigned int)indexOfSlideNode:(NSObject *)arg0;
- (NSObject *)slideNodeAtIndex:(unsigned int)arg0 ignoreHiddenNodes:(char)arg1;
- (NSObject *)slideNodeAfterSlideNode:(NSObject *)arg0 omitSkippedSlideNodes:(char)arg1 omitCollapsedSlideNodes:(char)arg2;
- (NSObject *)slideNodeBeforeSlideNode:(NSObject *)arg0 omitSkippedSlideNodes:(char)arg1 omitCollapsedSlideNodes:(char)arg2;
- (NSObject *)childrenOfSlideNode:(NSObject *)arg0;
- (void)invalidateSlideNameCache;
- (NSObject *)descendantsOfSlideNode:(NSObject *)arg0 omitSkippedSlideNodes:(char)arg1 omitCollapsedSlideNodes:(char)arg2;
- (void)addSlideNodeForDocumentUpgrade:(id)arg0 atDepth:(unsigned int)arg1;
- (void)p_clearSlideNodeCache;
- (void)p_logSlideTreeErrorWithMessage:(NSString *)arg0 slideNodesOrderBeforeEdit:(id)arg1 depthsBeforeEdit:(id)arg2;
- (char)slideNodeIsDisplayed:(id)arg0;
- (void)setDisplayedSlideNodes:(NSArray *)arg0;
- (void)p_cacheSlideNodes;
- (id)slidesUsingMasterSlide:(id)arg0;
- (NSObject *)parentOfSlideNode:(NSObject *)arg0;
- (id)orderedSlideNodesInSelection:(id)arg0;
- (KNSlideNode *)defaultSlideNodeForNewSelection;
- (void)insertSlideNodes:(id)arg0 atIndexes:(NSArray *)arg1 slideNodesChangingDepths:(id)arg2 depthsOfSlideNodesChangingDepths:(id)arg3 dolcContext:(NSObject *)arg4;
- (void)moveSlideNodes:(id)arg0 fromIndexes:(NSArray *)arg1 toIndexes:(NSArray *)arg2 slideNodesChangingDepths:(id)arg3 depthsOfSlideNodesChangingDepths:(id)arg4;
- (void)removeSlideNodes:(id)arg0 slideNodesChangingDepths:(id)arg1 depthsOfSlideNodesChangingDepths:(id)arg2;
- (void)reloadDisplayedNodes;
- (NSObject *)unhiddenSlideNodeAtIndex:(unsigned int)arg0;
- (NSString *)slideNodeWithUniqueIdentifier:(NSString *)arg0;
- (unsigned int)visiblePageCountIsSeparatedByBuilds:(char)arg0;
- (unsigned int)byBuildPageIndexForSlideIndex:(unsigned int)arg0 andEventIndex:(unsigned int)arg1;
- (void)slideIndex:(unsigned int *)arg0 andEventIndex:(unsigned int *)arg1 forByBuildPageIndex:(unsigned int)arg2;
- (unsigned int)numberOfSlidesUsingMasterSlide:(id)arg0;
- (id)slideNodesInAscendingOrder:(id)arg0;
- (KNSlideTree *)initWithOwner:(TSPObject *)arg0;
- (void)dealloc;
- (char)isEmpty;
- (NSEnumerator *)objectEnumerator;
- (void)removeAll;

@end
