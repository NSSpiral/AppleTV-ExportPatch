/* Runtime dump - VKGridDrawStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGridDrawStyle : VKRenderStyle

@property (readonly, nonatomic) NSString * texture;
@property (readonly, nonatomic) struct Matrix<float, 4, 1> fillColor;
@property (readonly, nonatomic) struct Matrix<float, 4, 1> lineColor;

+ (int)renderStyleID;

- (struct Matrix<float, 4, 1>)fillColor;
- (struct Matrix<float, 4, 1>)lineColor;
- (NSString *)texture;

@end
