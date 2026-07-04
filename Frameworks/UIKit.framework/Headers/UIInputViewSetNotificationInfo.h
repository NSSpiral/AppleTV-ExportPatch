/* Runtime dump - UIInputViewSetNotificationInfo
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetNotificationInfo : NSObject
{
    char _changedAccessoryOnly;
    float _duration;
    unsigned int _options;
    struct CGPoint _beginCenter;
    struct CGPoint _endCenter;
    struct CGRect _beginFrame;
    struct CGRect _endFrame;
    struct CGRect _bounds;
}

@property (readonly, nonatomic) NSDictionary * userInfo;
@property (readonly, nonatomic) NSDictionary * privateUserInfo;
@property (nonatomic) struct CGRect beginFrame;
@property (nonatomic) struct CGRect endFrame;
@property (nonatomic) float duration;
@property (nonatomic) unsigned int options;
@property (nonatomic) char changedAccessoryOnly;
@property (nonatomic) struct CGPoint beginCenter;
@property (nonatomic) struct CGPoint endCenter;
@property (nonatomic) struct CGRect bounds;

+ (NSDictionary *)info;

- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg0;
- (float)duration;
- (void)setDuration:(float)arg0;
- (NSDictionary *)userInfo;
- (void)setEndFrame:(struct CGRect)arg0;
- (struct CGRect)endFrame;
- (void)setOptions:(unsigned int)arg0;
- (unsigned int)options;
- (struct CGRect)beginFrame;
- (void)setBeginFrame:(struct CGRect)arg0;
- (void)populateStartInfoWithFrame:(struct CGRect)arg0;
- (void)populateEndInfoWithFrame:(struct CGRect)arg0;
- (struct CGPoint)beginCenter;
- (struct CGPoint)endCenter;
- (char)changedAccessoryOnly;
- (void)setBeginCenter:(struct CGPoint)arg0;
- (void)setEndCenter:(struct CGPoint)arg0;
- (NSDictionary *)inverseInfo;
- (NSDictionary *)privateUserInfo;
- (void)logGeometry;
- (void)populateWithAnimationStyle:(NSObject *)arg0;
- (void)setChangedAccessoryOnly:(char)arg0;

@end
