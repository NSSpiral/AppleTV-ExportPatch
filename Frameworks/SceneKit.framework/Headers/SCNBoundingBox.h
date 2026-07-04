/* Runtime dump - SCNBoundingBox
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNBoundingBox : NSObject
{
    struct SCNVector3 min;
    struct SCNVector3 max;
}

@property (nonatomic) struct SCNVector3 min;
@property (nonatomic) struct SCNVector3 max;

+ (NSObject *)SCNJSExportProtocol;

- (NSString *)description;
- (struct SCNVector3)max;
- (void)setMax:(struct SCNVector3)arg0;
- (struct SCNVector3)min;
- (void)setMin:(struct SCNVector3)arg0;

@end
