/* Runtime dump - EDSheetReference
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDSheetReference : EDReference
{
    unsigned int mSheetIndex;
}

+ (NSObject *)referenceWithSheetIndex:(unsigned int)arg0 firstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;

- (EDSheetReference *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (unsigned int)sheetIndex;
- (BOOL)isSheedIndexValid;
- (EDSheetReference *)initWithSheetIndex:(unsigned int)arg0 firstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
- (char)isEqualToTableReference:(NSObject *)arg0;
- (BOOL)fullyAdjacentToReference:(NSObject *)arg0;
- (void)unionWithReference:(NSObject *)arg0;

@end
