/* Runtime dump - VKLabelNavRoadLabel
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavRoadLabel : NSObject
{
    struct shared_ptr<vk::NavLabel> _label;
    int _navLabelType;
    <VKLabelNavFeature> * _navFeature;
    NSString * _displayGroup;
    int _alignment;
    float _desiredOffsetDistance;
    unsigned int _displayID;
}

@property (nonatomic) <VKLabelNavFeature> * navFeature;
@property (readonly, nonatomic) struct shared_ptr<vk::NavLabel> * label;
@property (nonatomic) int alignment;
@property (nonatomic) float desiredOffsetDistance;
@property (nonatomic) unsigned int displayID;
@property (readonly, nonatomic) char isShieldLabel;
@property (readonly, nonatomic) char isRoadLabel;
@property (readonly, nonatomic) char isJunctionLabel;

- (void)setAlignment:(int)arg0;
- (void)dealloc;
- (NSString *)description;
- (struct shared_ptr<vk::NavLabel> *)label;
- (int)alignment;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setNavFeature:(<VKLabelNavFeature> *)arg0;
- (float)desiredOffsetDistance;
- (void)setDesiredOffsetDistance:(float)arg0;
- (void)setDisplayID:(unsigned int)arg0;
- (VKLabelNavRoadLabel *)initWithNavFeature:(<VKLabelNavFeature> *)arg0 label:(struct shared_ptr<vk::NavLabel> *)arg1 navLabelType:(struct shared_ptr<vk::NavLabel>)arg2;
- (<VKLabelNavFeature> *)navFeature;
- (NSString *)displayGroup;
- (char)isShieldLabel;
- (char)isJunctionLabel;
- (char)isRoadLabel;
- (unsigned int)displayID;

@end
