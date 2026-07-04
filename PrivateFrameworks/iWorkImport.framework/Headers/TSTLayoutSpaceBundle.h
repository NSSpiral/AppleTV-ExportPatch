/* Runtime dump - TSTLayoutSpaceBundle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutSpaceBundle : NSObject
{
    TSTLayout * mLayout;
    TSTLayoutSpace * mSpace;
    TSTLayoutSpace * mFrozenHeaderColumnsSpace;
    TSTLayoutSpace * mFrozenHeaderRowsSpace;
    TSTLayoutSpace * mFrozenHeaderCornerSpace;
    TSTLayoutSpace * mRepeatHeaderColumnsSpace;
    TSTLayoutSpace * mRepeatHeaderRowsSpace;
    TSTLayoutSpace * mRepeatHeaderCornerSpace;
}

@property (nonatomic) TSTLayout * layout;
@property (retain, nonatomic) TSTLayoutSpace * space;
@property (retain, nonatomic) TSTLayoutSpace * frozenHeaderColumnsSpace;
@property (retain, nonatomic) TSTLayoutSpace * frozenHeaderRowsSpace;
@property (retain, nonatomic) TSTLayoutSpace * frozenHeaderCornerSpace;
@property (retain, nonatomic) TSTLayoutSpace * repeatHeaderColumnsSpace;
@property (retain, nonatomic) TSTLayoutSpace * repeatHeaderRowsSpace;
@property (retain, nonatomic) TSTLayoutSpace * repeatHeaderCornerSpace;

- (int)validateLayoutSpaces;
- (void)invalidateTableOffsets;
- (void)invalidateCoordinates;
- (void)invalidateCoordinatesAfterColumn:(unsigned char)arg0;
- (void)invalidateCoordinatesAfterRow:(unsigned short)arg0;
- (void)enumerateLayoutSpacesUsingBlock:(id /* block */)arg0;
- (TSTLayoutSpace *)frozenHeaderColumnsSpace;
- (TSTLayoutSpace *)frozenHeaderRowsSpace;
- (TSTLayoutSpace *)frozenHeaderCornerSpace;
- (TSTLayoutSpace *)repeatHeaderColumnsSpace;
- (TSTLayoutSpace *)repeatHeaderRowsSpace;
- (TSTLayoutSpace *)repeatHeaderCornerSpace;
- (void)setRepeatHeaderColumnsSpace:(TSTLayoutSpace *)arg0;
- (void)setRepeatHeaderRowsSpace:(TSTLayoutSpace *)arg0;
- (void)setRepeatHeaderCornerSpace:(TSTLayoutSpace *)arg0;
- (char)enumerateRepeatLayoutSpacesUsingBlock:(id /* block */)arg0;
- (void)setFrozenHeaderColumnsSpace:(TSTLayoutSpace *)arg0;
- (void)setFrozenHeaderRowsSpace:(TSTLayoutSpace *)arg0;
- (void)setFrozenHeaderCornerSpace:(TSTLayoutSpace *)arg0;
- (char)enumerateFrozenLayoutSpacesUsingBlock:(id /* block */)arg0;
- (NSObject *)getSpaceContainingCellID:(struct ?)arg0;
- (TSTLayoutSpaceBundle *)initWithLayout:(TSTLayout *)arg0;
- (void)dealloc;
- (NSString *)description;
- (TSTLayout *)layout;
- (void)setLayout:(TSTLayout *)arg0;
- (void)setSpace:(TSTLayoutSpace *)arg0;
- (TSTLayoutSpace *)space;

@end
