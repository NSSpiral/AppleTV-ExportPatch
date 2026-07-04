/* Runtime dump - MRContextState
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRContextState : NSObject
{
    id modelViewMatrix;
    id textureMatrix;
    id normal;
    unsigned int currentVBO;
    int currentVBOStride;
    int inSpriteCoordinatesStride;
    id textureCoordinatesStride;
    float * vertex2DPointer;
    float * vertex3DPointer;
    float * colorsPointer;
    float * normalsPointer;
    id textureCoordinatesPointer;
    float * inSpriteCoordinatesPointer;
    char vertexArrayIsEnabled;
    char foreColorArrayIsEnabled;
    char normalArrayIsEnabled;
    id textureCoordinatesArrayIsEnabled;
    char inSpriteCoordinatesArrayIsEnabled;
    id foreColor;
    id backColor;
    id textureTargetOnUnit;
    id textureNameOnUnit;
    id textureTimestampOnUnit;
    char blendingIsEnabled;
    int blendingType;
    char cullingIsEnabled;
    char cullFrontfacing;
    char depthTestIsEnabled;
    NSString * _shaderID;
    NSDictionary * _shaderArguments;
    NSMutableDictionary * _vertexAttributes;
    NSMutableDictionary * _temporaryUniforms;
}

@property (copy) NSString * shaderID;
@property (copy) NSDictionary * shaderArguments;
@property (readonly) NSMutableDictionary * vertexAttributes;
@property (readonly) NSMutableDictionary * temporaryUniforms;

- (void)dealloc;
- (MRContextState *)init;
- (NSString *)shaderID;
- (void)setShaderID:(NSString *)arg0;
- (NSDictionary *)shaderArguments;
- (void)setShaderArguments:(NSDictionary *)arg0;
- (NSMutableDictionary *)vertexAttributes;
- (NSMutableDictionary *)temporaryUniforms;

@end
