/* Runtime dump - EDReference
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDReference : NSObject <NSCopying>
{
    struct EDAreaReference mAreaReference;
}

+ (EDReference *)referenceWithFirstRow:(int)arg0 lastRow:(int)arg1 firstColumn:(int)arg2 lastColumn:(int)arg3;
+ (struct ?)reference;
+ (NSObject *)referenceWithReference:(NSObject *)arg0;
+ (NSObject *)referenceWithAreaReference:(struct EDAreaReference *)arg0;

- (EDReference *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (EDReference *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (int)lastColumn;
- (int)firstColumn;
- (int)firstRow;
- (int)lastRow;
- (void)setLastColumn:(int)arg0;
- (void)setFirstColumn:(int)arg0;
- (void)setFirstRow:(int)arg0;
- (void)setLastRow:(int)arg0;
- (unsigned long long)countOfCellsBeingReferenced;
- (EDReference *)initWithReference:(NSObject *)arg0;
- (BOOL)isCellReference;
- (BOOL)isValidAreaReference;
- (BOOL)containsRow:(int)arg0 column:(int)arg1;
- (void)unionWithFirstRow:(int)arg0 lastRow:(int)arg1 firstColumn:(int)arg2 lastColumn:(int)arg3;
- (BOOL)isValidCellReference;
- (BOOL)isRowReference;
- (BOOL)isColumnReference;
- (void)unionWithRow:(int)arg0 column:(int)arg1;
- (char)isEqualToReference:(NSObject *)arg0;
- (BOOL)fullyAdjacentToReference:(NSObject *)arg0;
- (struct EDAreaReference)areaReference;
- (EDReference *)initWithAreaReference:(struct EDAreaReference *)arg0;
- (EDReference *)initWithFirstRow:(int)arg0 lastRow:(int)arg1 firstColumn:(int)arg2 lastColumn:(int)arg3;
- (void)unionWithReference:(NSObject *)arg0;

@end
