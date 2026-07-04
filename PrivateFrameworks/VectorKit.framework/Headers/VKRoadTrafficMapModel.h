/* Runtime dump - VKRoadTrafficMapModel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadTrafficMapModel : VKVectorMapModel
{
    VKRoadMapModel * _roadModel;
    char _enabled;
    struct unique_ptr<vk::TrafficManager, std::__1::default_delete<vk::TrafficManager> > _trafficManager;
}

@property (nonatomic) char enabled;
@property (retain, nonatomic) VKRoadMapModel * roadModel;

- (void)dealloc;
- (VKRoadTrafficMapModel *)init;
- (void)setEnabled:(char)arg0;
- (char)enabled;
- (void).cxx_construct;
- (void)didReceiveMemoryWarning:(char)arg0;
- (void).cxx_destruct;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2;
- (void)setRoadModel:(VKRoadMapModel *)arg0;
- (void)stylesheetDidChange;
- (void)stylesheetDidReload;
- (unsigned long long)mapLayerPosition;
- (VKRoadMapModel *)roadModel;

@end
