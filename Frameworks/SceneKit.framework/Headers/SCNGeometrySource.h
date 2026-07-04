/* Runtime dump - SCNGeometrySource
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNGeometrySource : NSObject <NSSecureCoding>
{
    id _reserved;
    struct __C3DMeshSource * _meshSource;
    NSData * _data;
    NSString * _semantic;
    int _vectorCount;
    char _floatComponents;
    int _componentsPerVector;
    int _bytesPerComponent;
    int _dataOffset;
    int _dataStride;
}

@property (readonly, nonatomic) NSData * data;
@property (readonly, nonatomic) NSString * semantic;
@property (readonly, nonatomic) int vectorCount;
@property (readonly, nonatomic) char floatComponents;
@property (readonly, nonatomic) int componentsPerVector;
@property (readonly, nonatomic) int bytesPerComponent;
@property (readonly, nonatomic) int dataOffset;
@property (readonly, nonatomic) int dataStride;

+ (NSObject *)SCNJSExportProtocol;
+ (NSData *)geometrySourceWithData:(NSData *)arg0 semantic:(NSString *)arg1 vectorCount:(int)arg2 floatComponents:(char)arg3 componentsPerVector:(int)arg4 bytesPerComponent:(int)arg5 dataOffset:(int)arg6 dataStride:(int)arg7;
+ (NSArray *)dataWithVector3Array:(struct SCNVector3 *)arg0 count:(struct SCNVector3)arg1 bytesPerComponent:(int)arg2;
+ (NSArray *)dataWithPointArray:(struct CGPoint *)arg0 count:(struct CGPoint)arg1 bytesPerComponent:(int)arg2;
+ (SCNGeometrySource *)geometrySourceWithVertices:(struct SCNVector3 *)arg0 count:(struct SCNVector3)arg1;
+ (SCNGeometrySource *)geometrySourceWithNormals:(struct SCNVector3 *)arg0 count:(struct SCNVector3)arg1;
+ (SCNGeometrySource *)geometrySourceWithTextureCoordinates:(struct CGPoint *)arg0 count:(struct CGPoint)arg1;
+ (char)supportsSecureCoding;

- (struct __C3DMeshSource *)meshSource;
- (SCNGeometrySource *)initWithMeshSource:(struct __C3DMeshSource *)arg0;
- (NSString *)semantic;
- (int)vectorCount;
- (int)componentsPerVector;
- (char)floatComponents;
- (int)bytesPerComponent;
- (int)dataStride;
- (SCNGeometrySource *)initWithData:(NSData *)arg0 semantic:(NSString *)arg1 vectorCount:(int)arg2 floatComponents:(char)arg3 componentsPerVector:(int)arg4 bytesPerComponent:(int)arg5 dataOffset:(int)arg6 dataStride:(int)arg7;
- (short)baseTypeForDataFormat;
- (int)dataOffset;
- (void)dealloc;
- (SCNGeometrySource *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SCNGeometrySource *)init;
- (NSString *)description;
- (NSData *)data;

@end
