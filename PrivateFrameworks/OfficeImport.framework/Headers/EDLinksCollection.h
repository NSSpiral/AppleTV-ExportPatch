/* Runtime dump - EDLinksCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDLinksCollection : NSObject
{
    NSMutableArray * mLinks;
    NSMutableArray * mReferences;
}

- (void)dealloc;
- (EDLinksCollection *)init;
- (unsigned int)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned int)arg0 lastSheetIndex:(unsigned int)arg1;
- (BOOL)convertLinkReferenceIndex:(unsigned int)arg0 firstSheetIndex:(unsigned int *)arg1 lastSheetIndex:(unsigned int *)arg2;
- (unsigned int)addOrEquivalentLinkReferenceOfType:(int)arg0 firstSheetIndex:(unsigned int)arg1 lastSheetIndex:(unsigned int)arg2;
- (unsigned int)linksCount;
- (unsigned int)indexOfFirstLinkWithType:(int)arg0;
- (unsigned int)addLink:(IKLink *)arg0;
- (unsigned int)referencesCount;
- (NSObject *)referenceAtIndex:(unsigned int)arg0;
- (NSObject *)linkAtIndex:(unsigned int)arg0;
- (unsigned int)linkIndexCreateIfNeededWithType:(int)arg0;
- (unsigned int)indexOfReference:(NSObject *)arg0;
- (unsigned int)addReference:(NSObject *)arg0;
- (void)addOrEquivalentExternalAddInName:(NSString *)arg0 linkReferenceIndex:(unsigned int *)arg1 nameIndex:(unsigned int *)arg2;

@end
