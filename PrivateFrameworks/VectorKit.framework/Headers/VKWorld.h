/* Runtime dump - VKWorld
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKWorld : NSObject
{
    <VKWorldDelegate> * _delegate;
    VKModelObject * _modelRoot;
}

@property (readonly, nonatomic) VKModelObject * modelRoot;
@property (nonatomic) <VKWorldDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<VKWorldDelegate> *)arg0;
- (VKWorld *)init;
- (NSString *)description;
- (<VKWorldDelegate> *)delegate;
- (void)didReceiveMemoryWarning:(char)arg0;
- (void)gglLayoutScene:(NSObject *)arg0 withContext:(NSObject *)arg1 renderQueue:(struct RenderQueue *)arg2 dispatchQueue:(struct __shared_weak_count *)arg3;
- (void)runAnimation:(VKAnimation *)arg0;
- (VKModelObject *)modelRoot;
- (void)worldLayoutDidChange;
- (void)worldDisplayDidChange;

@end
