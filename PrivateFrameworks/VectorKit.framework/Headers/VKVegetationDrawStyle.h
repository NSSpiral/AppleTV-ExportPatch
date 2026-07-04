/* Runtime dump - VKVegetationDrawStyle
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKVegetationDrawStyle : VKRenderStyle

@property (readonly, nonatomic) float brightness;
@property (readonly, nonatomic) char visible;

+ (int)renderStyleID;

- (char)visible;
- (float)brightness;

@end
