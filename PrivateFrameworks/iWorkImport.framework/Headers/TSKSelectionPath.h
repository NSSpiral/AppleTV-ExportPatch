/* Runtime dump - TSKSelectionPath
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKSelectionPath : NSObject
{
    NSArray * mCurrentSelection;
}

+ (NSArray *)selectionPathWithSelectionArray:(NSArray *)arg0;

- (TSKSelectionPath *)initWithArchive:(struct SelectionPathArchive *)arg0 unarchiver:(struct SelectionPathArchive)arg1;
- (TSKSelectionPath *)initWithSelectionArray:(NSArray *)arg0;
- (NSArray *)selectionPathWithAppendedSelections:(NSArray *)arg0;
- (NSArray *)orderedSelections;
- (NSObject *)selectionAtIndex:(unsigned int)arg0;
- (unsigned int)indexForSelection:(id)arg0;
- (id)selectionPathWithAppendedSelection:(id)arg0;
- (id)selectionPathPoppingOffSelection:(id)arg0;
- (id)selectionPathPoppingToSelection:(id)arg0;
- (id)selectionPathReplacingMostSpecificLocationOfSelection:(id)arg0 withSelection:(TSWPSelection *)arg1;
- (id)selectionPathByAppendingOrReplacingMostSpecificSelectionWithSelection:(id)arg0;
- (NSObject *)mostSpecificSelectionOfClass:(Class)arg0;
- (NSObject *)mostSpecificSelectionConformingToProtocol:(NSObject *)arg0;
- (void)enumerateSelectionsMostToLeastSpecificInPathUsingBlock:(id /* block */)arg0;
- (void)enumerateSelectionsLeastToMostSpecificInPathUsingBlock:(id /* block */)arg0;
- (void)saveToArchive:(struct SelectionPathArchive *)arg0 archiver:(NSObject *)arg1 context:(NSObject *)arg2;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSKSelectionPath *)copyWithZone:(struct _NSZone *)arg0;

@end
