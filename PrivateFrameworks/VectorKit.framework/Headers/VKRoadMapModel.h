/* Runtime dump - VKRoadMapModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadMapModel : VKVectorMapModel <VKStyleManagerObserver>
{
    struct unique_ptr<vk::RoadManager, std::__1::default_delete<vk::RoadManager> > _roadManager;
    struct unique_ptr<vk::PatternedManager, std::__1::default_delete<vk::PatternedManager> > _patternedRibbonManager;
    unsigned long long _mapLayerPosition;
}

@property (nonatomic) unsigned long long mapLayerPosition;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) VKStyleManager * styleManager;

- (void)dealloc;
- (VKRoadMapModel *)init;
- (void).cxx_construct;
- (void)didReceiveMemoryWarning:(char)arg0;
- (void).cxx_destruct;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)setMapLayerPosition:(unsigned long long)arg0;
- (void)stylesheetDidChange;
- (unsigned long long)mapLayerPosition;
- (unsigned char)commandBufferId;

@end
