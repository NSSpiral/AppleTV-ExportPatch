/* Runtime dump - CPCompoundGraphicMaker
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPCompoundGraphicMaker : NSObject <CPDisposable>
{
    CPChunk * parentChunk;
    char shapesAreVectorGraphics;
    unsigned int shapeCount;
    id * shapes;
    double pageSpread;
    CPCluster * cluster;
    unsigned int groupInfoCount;
    struct ? * groupInfoArray;
    char disposed;
}

+ (char)makeCompoundGraphicsInZonesOf:(id)arg0;

- (void)dealloc;
- (void)dispose;
- (CPCompoundGraphicMaker *)initWithGraphicsIn:(UIKeyboardEmojiGraphics *)arg0 ofClass:(Class)arg1;
- (char)makeCompoundGraphics;
- (void)coalesceShapeGroups;
- (void)makeCompoundGraphicFromShapesAtIndex:(unsigned int)arg0 count:(unsigned int)arg1;
- (void)addGroupInfoWithIndex:(unsigned int)arg0 bounds:(struct CGRect)arg1;
- (char)makeCompoundGraphicsFromShapeGroups;
- (char)findClusterLevel;
- (char)groupOverlappingGraphics;
- (void)finalize;

@end
