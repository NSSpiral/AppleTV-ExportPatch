/* Runtime dump - PKPhysicsGrid
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsGrid : NSObject
{
    struct shared_ptr<PKCGrid> grid;
    PKQuadTree * quadTree;
}

@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (nonatomic) struct shared_ptr<PKCGrid> gridPtr;

+ (NSArray *)gridFromOccupancyArray:(char *)arg0 bytePitch:(int)arg1 width:(int)arg2 height:(int)arg3;
+ (NSData *)gridFromRGBAU8PixelData:(char *)arg0 imageWidth:(int)arg1 imageHeight:(int)arg2 alphaThreshold:(float)arg3 accuracy:(float)arg4;
+ (NSData *)vectorGridFromRGBAU8PixelData:(char *)arg0 imageWidth:(int)arg1 imageHeight:(int)arg2 accuracy:(float)arg3;

- (unsigned char)gridDataAtX:(int)arg0 y:(int)arg1 z:(int)arg2;
- (BOOL)isGridRegionOccupied:(int)arg0 y:(int)arg1 width:(int)arg2 height:(int)arg3;
- (struct shared_ptr<PKPath>)pathFromOutlineWithSmoothingThreshold:(id)arg0 bounds:(SEL)arg1;
- (id)physicsBodyFromLVS0:(struct CGRect)arg0;
- (id)physicsBodyFromSmoothedOutline:(float)arg0 size:(struct CGSize)arg1;
- (int)width;
- (int)height;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<PKCGrid>)gridPtr;
- (void)setGridPtr:(struct shared_ptr<PKCGrid>)arg0;

@end
