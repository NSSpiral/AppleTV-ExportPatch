/* Runtime dump - VKMapRasterizerRoot
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapRasterizerRoot : VKModelObject
{
    struct ClearItem _clearItem;
    VKMapRasterizer * _mapRasterizer;
}

@property (nonatomic) struct Matrix<float, 4, 1> backgroundColor;

- (void)setBackgroundColor:(struct Matrix<float, 4, 1>)arg0;
- (struct Matrix<float, 4, 1>)backgroundColor;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)stylesheetDidChange;
- (VKMapRasterizerRoot *)initWithMapRasterizer:(VKMapRasterizer *)arg0;

@end
