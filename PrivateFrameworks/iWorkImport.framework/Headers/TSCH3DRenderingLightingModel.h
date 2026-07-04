/* Runtime dump - TSCH3DRenderingLightingModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRenderingLightingModel : NSObject
{
    TSCH3DLightingModel * mLightingModel;
    NSNumber * mPercentage;
    char mHasTransparency;
}

@property (readonly, nonatomic) TSCH3DLightingModel * lightingModel;
@property (readonly, nonatomic) char hasTransparency;

+ (TSCH3DRenderingLightingModel *)renderingLightingModelWithFill:(id)arg0 lightings:(TSCH3DLightingPackage *)arg1;
+ (NSObject *)renderingLightingModelWithLightingModel:(TSCH3DLightingModel *)arg0 percentage:(id)arg1 hasTransparency:(char)arg2;
+ (TSCH3DRenderingLightingModel *)p_lightingModelFromFill:(id)arg0 lightings:(TSCH3DLightingPackage *)arg1 returningTransparency:(char *)arg2;

- (TSCH3DLightingModel *)lightingModel;
- (void)affect:(id)arg0 states:(NSArray *)arg1 scene:(NSObject *)arg2 texturePool:(struct unique_ptr<ggl::TexturePool, std::__1::default_delete<ggl::TexturePool> >)arg3;
- (char)hasTransparency;
- (TSCH3DRenderingLightingModel *)initWithLightingModel:(TSCH3DLightingModel *)arg0 percentage:(id)arg1 hasTransparency:(char)arg2;
- (void)dealloc;

@end
