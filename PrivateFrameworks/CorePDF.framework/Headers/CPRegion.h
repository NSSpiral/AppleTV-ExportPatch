/* Runtime dump - CPRegion
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPRegion : CPChunk
{
    char isTextRegion;
    char isImageRegion;
    char isCompoundShape;
    CPRegion * nextRegion;
    int order;
    id link;
}

- (void)dealloc;
- (CPRegion *)copyWithZone:(struct _NSZone *)arg0;
- (char)isRotated;
- (void)setOrder:(int)arg0;
- (int)order;
- (void)setLink:(IKLink *)arg0;
- (NSString *)link;
- (void)accept:(id)arg0;
- (char)isIndivisible;
- (char)isBoxRegion;
- (char)isGraphicalRegion;
- (char)isRowRegion;
- (void)setIsImageRegion:(char)arg0;
- (char)isImageRegion;
- (char)isShapeRegion;
- (char)isParagraphRegion;
- (char)isListItemRegion;
- (char)isTextRegion;
- (void)setIsTextRegion:(char)arg0;
- (char)isTableCellRegion;
- (char)isBodyZone;
- (char)isCompoundShape;
- (void)setIsCompoundShape:(char)arg0;
- (char)isZone;
- (CPRegion *)nextRegion;
- (void)setNextRegion:(CPRegion *)arg0;

@end
