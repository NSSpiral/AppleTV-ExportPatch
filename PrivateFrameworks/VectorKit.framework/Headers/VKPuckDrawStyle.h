/* Runtime dump - VKPuckDrawStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPuckDrawStyle : VKRenderStyle

@property (readonly, nonatomic) float circleBrightness;
@property (readonly, nonatomic) float arrowBrightness;
@property (readonly, nonatomic) struct Matrix<float, 4, 1> arrowColor;
@property (readonly, nonatomic) struct Matrix<float, 4, 1> arrowColorStale;
@property (readonly, nonatomic) float size;
@property (readonly, nonatomic) float offset;
@property (readonly, nonatomic) char hasCircleBrightness;
@property (readonly, nonatomic) char hasArrowBrightness;
@property (readonly, nonatomic) char hasArrowColor;
@property (readonly, nonatomic) char hasArrowColorStale;
@property (readonly, nonatomic) char hasSize;
@property (readonly, nonatomic) char hasOffset;

+ (int)renderStyleID;

- (float)size;
- (float)offset;
- (struct Matrix<float, 4, 1>)arrowColor;
- (char)hasArrowColor;
- (char)hasCircleBrightness;
- (float)circleBrightness;
- (char)hasArrowColorStale;
- (struct Matrix<float, 4, 1>)arrowColorStale;
- (char)hasArrowBrightness;
- (float)arrowBrightness;
- (char)hasSize;
- (char)hasOffset;

@end
