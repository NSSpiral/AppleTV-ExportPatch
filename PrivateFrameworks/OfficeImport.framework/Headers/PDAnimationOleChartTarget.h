/* Runtime dump - PDAnimationOleChartTarget
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimationOleChartTarget : PDAnimationShapeTarget
{
    int mLevel;
    int mChartSubElementType;
}

- (PDAnimationOleChartTarget *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setLevel:(int)arg0;
- (int)level;
- (int)chartSubElementType;
- (void)setChartSubElementType:(int)arg0;

@end
