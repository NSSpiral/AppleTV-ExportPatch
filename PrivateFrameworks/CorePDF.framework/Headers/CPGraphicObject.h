/* Runtime dump - CPGraphicObject
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPGraphicObject : CPChunk
{
    unsigned int clipIndex;
    struct CGRect renderedBounds;
    char isInZoneBorder;
    int zoneGraphicType;
    CPTextLine * anchoringTextLine;
    CPParagraph * anchoringParagraph;
    CPChunk<CPGraphicUser> * user;
}

@property (nonatomic) unsigned int clipIndex;
@property (retain, nonatomic) CPParagraph * anchoringParagraph;

- (void)dealloc;
- (CPGraphicObject *)init;
- (char)isVisible;
- (CPChunk<CPGraphicUser> *)user;
- (void)setUser:(CPChunk<CPGraphicUser> *)arg0;
- (void)setClipIndex:(unsigned int)arg0;
- (struct CGRect)renderedBounds;
- (unsigned short)unicode;
- (char)isNarrow;
- (char)canBeContainer;
- (char)isIndivisible;
- (char)isInZoneBorder;
- (void)setIsInZoneBorder:(char)arg0;
- (int)zoneGraphicType;
- (void)setZoneGraphicType:(int)arg0;
- (void)setAnchoringTextLine:(CPTextLine *)arg0;
- (CPTextLine *)anchoringTextLine;
- (unsigned int)clipIndex;
- (CPParagraph *)anchoringParagraph;
- (void)setAnchoringParagraph:(CPParagraph *)arg0;

@end
