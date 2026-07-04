/* Runtime dump - NSTextTableBlock
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextTableBlock : NSTextBlock
{
    NSTextTable * _table;
    int _rowNum;
    int _colNum;
    int _rowSpan;
    int _colSpan;
    void * _tableBlockPrimary;
    void * _tableBlockSecondary;
}

+ (void)initialize;

- (void)dealloc;
- (NSTextTableBlock *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSTextTableBlock *)copyWithZone:(struct _NSZone *)arg0;
- (NSTextTable *)table;
- (void)drawBackgroundWithFrame:(struct CGRect)arg0 inView:(struct CGSize)arg1 characterRange:(struct _NSRange)arg2 layoutManager:(_UIFieldEditorLayoutManager *)arg3;
- (struct CGRect)rectForLayoutAtPoint:(NSObject *)arg0 inRect:(SEL)arg1 textContainer:(struct CGPoint)arg2 characterRange:(struct CGRect)arg3;
- (struct CGRect)boundsRectForContentRect:(NSObject *)arg0 inRect:(SEL)arg1 textContainer:(struct CGRect)arg2 characterRange:(struct CGSize)arg3;
- (void)_setRowSpan:(int)arg0;
- (void)_setColumnSpan:(int)arg0;
- (int)rowSpan;
- (int)startingColumn;
- (int)columnSpan;
- (NSTextTableBlock *)initWithTable:(NSTextTable *)arg0 startingRow:(int)arg1 rowSpan:(int)arg2 startingColumn:(int)arg3 columnSpan:(int)arg4;
- (int)startingRow;

@end
