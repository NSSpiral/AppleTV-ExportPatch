/* Runtime dump - CPTableCell
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTableCell : CPChunk <CPDisposable>
{
    struct CGRect cellBounds;
    struct ? rowSpan;
    struct ? columnSpan;
    struct ? * borders;
    struct CGColor * backgroundColor;
    unsigned int backgroundGraphicCount;
    id * backgroundGraphics;
}

@property (readonly, nonatomic) struct CGRect cellBounds;
@property (nonatomic) struct ? rowSpan;
@property (nonatomic) struct ? columnSpan;
@property (readonly, nonatomic) unsigned int backgroundGraphicCount;

- (CPTableCell *)initWithBounds:(struct CGRect)arg0;
- (void)dealloc;
- (struct CGColor *)backgroundColor;
- (void)dispose;
- (struct CGRect)cellBounds;
- (struct CGRect)boundsOfBorder:(id)arg0;
- (struct CGColor *)colorOfBorder:(int)arg0;
- (void)setBackgroundGraphics:(id *)arg0;
- (NSObject *)backgroundGraphicAtIndex:(unsigned int)arg0;
- (unsigned int)backgroundGraphicCount;
- (void)setBorder:(int)arg0 bounds:(struct CGRect)arg1 graphics:(struct CGSize)arg2;
- (unsigned int)graphicCountOfBorder:(int)arg0;
- (id)graphicObjectOfBorder:(int)arg0 atIndex:(unsigned int)arg1;
- (int)compareCellOrdinal:(id)arg0;
- (void)setColumnSpan:(struct ?)arg0;
- (void)finalize;
- (struct ?)rowSpan;
- (void)setRowSpan:(struct ?)arg0;
- (struct ?)columnSpan;

@end
