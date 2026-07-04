/* Runtime dump - CPChunk
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPChunk : CPObject
{
    struct CGRect bounds;
    char shrinksWithChildren;
    char dirtyBounds;
    unsigned int position;
    long insertionOrder;
}

+ (float)chooseReferenceFontSizeFrom:(float)arg0 and:(float)arg1;

- (struct CGRect)bounds;
- (CPChunk *)init;
- (void)setBounds:(struct CGRect)arg0;
- (CPChunk *)copyWithZone:(struct _NSZone *)arg0;
- (float)center;
- (void)sortUsingSelector:(SEL)arg0;
- (struct CGPoint)anchor;
- (void)setAnchor:(struct CGPoint)arg0;
- (float)fontSize;
- (void)removeAll;
- (struct CGSize)advance;
- (int)compareTopDescending:(id)arg0;
- (NSObject *)copyAndSplitChildrenAtIndex:(unsigned int)arg0;
- (void)resizeWith:(SKResize *)arg0;
- (void)add:(int)arg0 atIndex:(unsigned int)arg1;
- (void)addChildrenOf:(TSPUnknownFieldTreeNodeWithChildren *)arg0;
- (void)fitBoundsToChildren;
- (NSArray *)newTakeChildren;
- (id)newTakeChildrenAmong:(id)arg0;
- (struct CGRect)renderedBounds;
- (float)absoluteGapTo:(id)arg0;
- (float)advanceDeltaAfterSpace;
- (long)insertionOrder;
- (unsigned int)chunkPosition;
- (void)accept:(id)arg0;
- (float)opticalLeading;
- (struct CGRect)adjustToPointBoundary:(id)arg0;
- (id)describeBounds;
- (float)clusterGapTo:(id)arg0;
- (float)referenceAdvanceWidth;
- (void)setInsertionOrder:(long)arg0;
- (int)compareAnchorY:(id)arg0;
- (int)compareAnchorX:(id)arg0;
- (int)compareAnchorYDescending:(id)arg0;
- (int)compareX:(id)arg0;
- (int)compareInsertionOrder:(id)arg0;
- (int)compareZ:(id)arg0;
- (int)compareZDescending:(id)arg0;
- (int)compareXBounds:(id)arg0;
- (int)compareLinearBounds:(id)arg0;
- (int)compareY:(id)arg0;
- (int)compareYBounds:(id)arg0;
- (int)compareYDescending:(id)arg0;
- (int)compareYDescendingX:(id)arg0;
- (int)compareChunkPosition:(NSObject *)arg0;
- (int)clusterLevelHint;
- (void)orderedInsert:(id)arg0 usingSelector:(SEL)arg1;
- (char)overlapsHorizontallyWith:(id)arg0;
- (char)overlapsVerticallyWith:(id)arg0;
- (char)geometricallyContains:(id)arg0;
- (char)boundsEqualsRect:(struct CGRect)arg0 accuracy:(struct CGSize)arg1;
- (char)shrinksWithChildren;
- (void)setShrinksWithChildren:(char)arg0;
- (char)intersectsChild:(struct CGRect)arg0;
- (void)translateObjectYBy:(float)arg0;
- (void)setChunkPosition:(unsigned int)arg0;
- (void)setChildren:(NSArray *)arg0;
- (float)rotationAngle;
- (float)bottom;
- (float)left;
- (float)right;
- (float)top;
- (void)add:(int)arg0;
- (void)remove:(NSIndexSet *)arg0;

@end
