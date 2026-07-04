/* Runtime dump - CHDBar3DType
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDBar3DType : CHDBar2DType
{
    int mGapDepth;
    int mShapeType;
}

+ (BOOL)is3DType;
+ (NSObject *)stringWithShapeType:(int)arg0;

- (void)setShapeType:(int)arg0;
- (CHDBar3DType *)initWithChart:(GQHChart *)arg0;
- (void)setGapDepth:(int)arg0;
- (int)gapDepth;
- (int)shapeType;

@end
