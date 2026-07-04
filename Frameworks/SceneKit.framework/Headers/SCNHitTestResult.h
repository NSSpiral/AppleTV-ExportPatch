/* Runtime dump - SCNHitTestResult
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNHitTestResult : NSObject
{
    id _reserved;
    struct __C3DHitTestResult * _result;
}

@property (readonly, nonatomic) SCNNode * node;
@property (readonly, nonatomic) int geometryIndex;
@property (readonly, nonatomic) int faceIndex;
@property (readonly, nonatomic) struct SCNVector3 localCoordinates;
@property (readonly, nonatomic) struct SCNVector3 worldCoordinates;
@property (readonly, nonatomic) struct SCNVector3 localNormal;
@property (readonly, nonatomic) struct SCNVector3 worldNormal;
@property (readonly, nonatomic) struct SCNMatrix4 modelTransform;

+ (NSObject *)SCNJSExportProtocol;
+ (SCNHitTestResult *)hitTestResultsFromHitTestResultRef:(struct __CFArray *)arg0;

- (struct CGPoint)textureCoordinatesWithMappingChannel:(int)arg0;
- (int)geometryIndex;
- (int)faceIndex;
- (struct SCNVector3)localCoordinates;
- (struct SCNVector3)worldCoordinates;
- (struct SCNVector3)localNormal;
- (struct SCNVector3)worldNormal;
- (struct CGPoint)textureCoordinate;
- (struct SCNMatrix4)modelTransform;
- (void)dealloc;
- (NSString *)description;
- (SCNNode *)node;
- (SCNHitTestResult *)initWithResult:(struct __C3DHitTestResult *)arg0;

@end
