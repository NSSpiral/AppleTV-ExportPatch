/* Runtime dump - VKSkyDrawStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKSkyDrawStyle : VKRenderStyle

@property (readonly, nonatomic) struct Matrix<float, 4, 1> fillColor;
@property (readonly, nonatomic) struct Matrix<float, 4, 1> horizonColor;

+ (int)renderStyleID;

- (struct Matrix<float, 4, 1>)fillColor;
- (struct Matrix<float, 4, 1>)horizonColor;

@end
