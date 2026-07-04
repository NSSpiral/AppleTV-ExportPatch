/* Runtime dump - CHDArea3DType
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDArea3DType : CHDArea2DType
{
    int mGapDepth;
}

+ (BOOL)is3DType;

- (CHDArea3DType *)initWithChart:(GQHChart *)arg0;
- (void)setGapDepth:(int)arg0;
- (int)gapDepth;

@end
