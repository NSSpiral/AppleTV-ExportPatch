/* Runtime dump - CHDLine3DType
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDLine3DType : CHDLineType
{
    int mGapDepth;
}

+ (BOOL)is3DType;

- (CHDLine3DType *)initWithChart:(GQHChart *)arg0;
- (void)setGapDepth:(int)arg0;
- (int)gapDepth;

@end
