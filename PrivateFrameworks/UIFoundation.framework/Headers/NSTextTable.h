/* Runtime dump - NSTextTable
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextTable : NSTextBlock
{
    unsigned int _numCols;
    unsigned int _tableFlags;
    id _lcache;
    void * _tablePrimary;
    void * _tableSecondary;
}

+ (void)initialize;

- (void)dealloc;
- (NSTextTable *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSTextTable *)init;
- (unsigned int)numberOfColumns;
- (void)setNumberOfColumns:(unsigned int)arg0;
- (void)_takeValuesFromTextBlock:(id /* block */)arg0;
- (struct CGRect)rectForBlock:(id /* block */)arg0 layoutAtPoint:(SEL)arg1 inRect:(struct CGRect)arg2 textContainer:(struct CGPoint)arg3 characterRange:(struct CGRect)arg4;
- (struct CGRect)boundsRectForBlock:(id /* block */)arg0 contentRect:(SEL)arg1 inRect:(struct CGRect)arg2 textContainer:(struct CGRect)arg3 characterRange:(struct CGSize)arg4;
- (void)drawBackgroundForBlock:(id /* block */)arg0 withFrame:(struct CGRect)arg1 inView:(struct CGSize)arg2 characterRange:(struct _NSRange)arg3 layoutManager:(_UIFieldEditorLayoutManager *)arg4;
- (char)collapsesBorders;
- (id)_rowArrayForBlock:(id /* block */)arg0 atIndex:(unsigned int)arg1 text:(NSString *)arg2 layoutManager:(_UIFieldEditorLayoutManager *)arg3 containerWidth:(float)arg4 withRepetitions:(char)arg5 collapseBorders:(char)arg6 rowCharRange:(struct _NSRange *)arg7 indexInRow:(unsigned int *)arg8 startingRow:(int *)arg9 startingColumn:(int *)arg10 previousRowBlockHelper:(id *)arg11;
- (struct CGRect)_contentRectForCharRange:(NSObject *)arg0 textContainer:(SEL)arg1;
- (char)hidesEmptyCells;
- (char)_missingColumnsForRowRange:(struct _NSRange)arg0 blockIndex:(unsigned int)arg1 text:(NSString *)arg2;
- (unsigned int)layoutAlgorithm;
- (unsigned int)_tableFlags;
- (void)_setTableFlags:(unsigned int)arg0;
- (NSObject *)_descriptionAtIndex:(unsigned int)arg0 text:(NSString *)arg1;
- (void)setLayoutAlgorithm:(unsigned int)arg0;
- (void)setCollapsesBorders:(char)arg0;
- (void)setHidesEmptyCells:(char)arg0;

@end
