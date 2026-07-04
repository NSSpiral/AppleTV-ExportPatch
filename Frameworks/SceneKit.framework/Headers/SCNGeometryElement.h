/* Runtime dump - SCNGeometryElement
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNGeometryElement : NSObject <NSSecureCoding>
{
    id _reserved;
    struct __C3DMeshElement * _meshElement;
    NSData * _elementData;
    int _primitiveType;
    int _primitiveCount;
    int _bytesPerIndex;
}

@property (readonly, nonatomic) NSData * data;
@property (readonly, nonatomic) int primitiveType;
@property (readonly, nonatomic) int primitiveCount;
@property (readonly, nonatomic) int bytesPerIndex;

+ (NSObject *)SCNJSExportProtocol;
+ (NSData *)geometryElementWithData:(NSData *)arg0 primitiveType:(int)arg1 primitiveCount:(int)arg2 bytesPerIndex:(int)arg3;
+ (char)supportsSecureCoding;

- (struct __C3DMeshElement *)meshElement;
- (SCNGeometryElement *)initWithMeshElement:(struct __C3DMeshElement *)arg0;
- (SCNGeometryElement *)initWithData:(NSData *)arg0 primitiveType:(int)arg1 primitiveCount:(int)arg2 bytesPerIndex:(int)arg3;
- (int)primitiveCount;
- (int)bytesPerIndex;
- (void)dealloc;
- (SCNGeometryElement *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNGeometryElement *)init;
- (NSData *)data;
- (int)primitiveType;

@end
