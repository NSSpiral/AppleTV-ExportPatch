/* Runtime dump - TSPPasteboardUIPasteboard
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardUIPasteboard : TSPPasteboard
{
    NSArray * _cachedPasteboardTypes;
    NSMutableDictionary * _pasteboardItemIndexCache;
    unsigned int _pasteboardItemCount;
    int _cachedChangeCount;
}

- (int)clearContents;
- (void)addItems:(NSArray *)arg0 isSmartCopy:(char)arg1;
- (TSPPasteboardUIPasteboard *)initWithGeneralPasteboard;
- (TSPPasteboardUIPasteboard *)initWithPasteboardName:(TSPPasteboard *)arg0 create:(char)arg1;
- (TSPPasteboardUIPasteboard *)initWithUniquePasteboardName;
- (TSPPasteboardUIPasteboard *)initWithNativePasteboard:(id)arg0;
- (void)addData:(NSData *)arg0 forPasteboardType:(NSObject *)arg1;
- (NSArray *)importablePlainTextTypes;
- (char)containsImportableTextTypes;
- (void)addPasteboardItem:(NSObject *)arg0;
- (void)addPasteboardItem:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)addPasteboardItemIndex:(unsigned int)arg0 forType:(NSObject *)arg1;
- (void)invalidatePasteboardCache;
- (void)invalidatePasteboardCacheIfNeeded;
- (void)updateCachedChangeCount;
- (id)propertyListForValue:(id)arg0;
- (void)addPasteboardItemForObject:(NSObject *)arg0 type:(NSObject *)arg1;
- (void)reloadPasteboardItemIndexCacheIfNeeded;
- (void)invalidate;
- (NSString *)string;
- (void)setString:(NSString *)arg0;
- (int)numberOfItems;
- (NSObject *)valuesForPasteboardType:(NSObject *)arg0 inItemSet:(NSSet *)arg1;
- (NSObject *)valueForPasteboardType:(NSObject *)arg0;
- (NSObject *)dataForPasteboardType:(NSObject *)arg0 inItemSet:(NSSet *)arg1;
- (NSSet *)pasteboardTypesForItemSet:(NSSet *)arg0;
- (NSArray *)pasteboardTypes;
- (NSObject *)dataForPasteboardType:(NSObject *)arg0;
- (NSArray *)strings;
- (NSArray *)URLs;
- (void).cxx_destruct;

@end
