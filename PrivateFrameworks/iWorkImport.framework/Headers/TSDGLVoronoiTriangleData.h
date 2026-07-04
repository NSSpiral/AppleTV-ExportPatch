/* Runtime dump - TSDGLVoronoiTriangleData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLVoronoiTriangleData : NSObject
{
    unsigned int * _triangleIndexToCellIndexMappingTable;
    unsigned int * _triangleIndexToCellTriangleIndexMappingTable;
    unsigned int _triangleIndexToCellMappingTableCount;
    unsigned int _triangleCount;
    NSArray * _cells;
    struct CGRect _bounds;
}

@property (readonly, nonatomic) unsigned int triangleCount;
@property (readonly, nonatomic) NSArray * cells;
@property (readonly, nonatomic) unsigned int cellCount;
@property (readonly, nonatomic) struct CGRect bounds;

- (unsigned int)triangleCount;
- (void)p_setupDataWithPointCount:(unsigned int)arg0 clippedToRect:(struct CGRect)arg1 percentOfCellsToSplit:(struct CGSize)arg2;
- (unsigned int)cellIndexFromTriangleIndex:(unsigned int)arg0;
- (TSDGLVoronoiTriangleData *)initWithPoints:(unsigned int)arg0 clippedToRect:(struct CGRect)arg1 percentOfCellsToSplit:(struct CGSize)arg2;
- (NSObject *)cellFromTriangleIndex:(unsigned int)arg0;
- (unsigned int)triangleIndexInCellFromGlobalTriangleIndex:(unsigned int)arg0;
- (void)dealloc;
- (struct CGRect)bounds;
- (void).cxx_construct;
- (unsigned int)cellCount;
- (NSArray *)cells;

@end
