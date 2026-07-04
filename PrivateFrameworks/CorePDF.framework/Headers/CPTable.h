/* Runtime dump - CPTable
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTable : CPChunk <CPDisposable, CPGraphicUser>
{
    struct CGRect tableBounds;
    unsigned int rowCount;
    float * rowY;
    unsigned int columnCount;
    float * columnX;
    struct CGColor * backgroundColor;
    unsigned int backgroundGraphicCount;
    id * backgroundGraphics;
    unsigned int usedGraphicCount;
    char disposed;
}

@property (readonly, nonatomic) struct CGRect tableBounds;
@property (nonatomic) unsigned int rowCount;
@property (readonly, nonatomic) float * rowY;
@property (nonatomic) unsigned int columnCount;
@property (readonly, nonatomic) float * columnX;
@property (readonly, nonatomic) unsigned int backgroundGraphicCount;

- (CPTable *)initWithBounds:(struct CGRect)arg0;
- (void)dealloc;
- (struct CGColor *)backgroundColor;
- (unsigned int)columnCount;
- (void)setColumnCount:(unsigned int)arg0;
- (void)dispose;
- (struct CGRect)tableBounds;
- (void)incrementUsedGraphicCount;
- (unsigned int)usedGraphicCount;
- (float *)rowY;
- (float *)columnX;
- (void)setRowCount:(unsigned int)arg0;
- (void)setBackgroundGraphics:(id *)arg0;
- (NSObject *)backgroundGraphicAtIndex:(unsigned int)arg0;
- (unsigned int)backgroundGraphicCount;
- (unsigned int)rowCount;
- (void)finalize;

@end
