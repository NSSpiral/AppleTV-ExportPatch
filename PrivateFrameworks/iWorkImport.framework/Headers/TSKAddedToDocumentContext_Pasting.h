/* Runtime dump - TSKAddedToDocumentContext_Pasting
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAddedToDocumentContext_Pasting : TSKAddedToDocumentContext
{
    NSMutableArray * mAddedDrawables;
    <TSKMultiTableRemapping> * mMultiTableRemapper;
}

- (char)autoUpdateSmartFields;
- (void)addDrawables:(TPFloatingDrawables *)arg0;
- (id)addedDrawables;
- (char)wasPasted;
- (char)uniqueBookmarks;
- (char)syncChanges;
- (<TSKMultiTableRemapping> *)multiTableRemapper;
- (void)setMultiTableRemapper:(<TSKMultiTableRemapping> *)arg0;
- (void)dealloc;
- (TSKAddedToDocumentContext_Pasting *)init;
- (NSString *)description;
- (void)addDrawable:(GQHPagesFloatingDrawable *)arg0;

@end
