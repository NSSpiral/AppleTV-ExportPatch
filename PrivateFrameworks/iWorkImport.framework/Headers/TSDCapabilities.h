/* Runtime dump - TSDCapabilities
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCapabilities : NSObject
{
    int _platform;
    int _deviceType;
    int _device;
    int _renderer;
}

@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) int deviceType;
@property (readonly, nonatomic) int device;
@property (readonly, nonatomic) int renderer;
@property (readonly, nonatomic) char isRendererH3OrBelow;
@property (readonly, nonatomic) char isRendererH4OrBelow;
@property (readonly, nonatomic) char isRendererH5OrBelow;
@property (readonly, nonatomic) char hasLightningPort;
@property (readonly, nonatomic) struct CGSize maximumHardcodedTextureSize;

+ (TSDCapabilities *)currentCapabilities;

- (struct CGSize)maximumTextureSizeWithGLContext:(NSObject *)arg0;
- (void)p_setupPlatform;
- (void)p_setupDevice;
- (struct CGSize)maximumHardcodedTextureSize;
- (char)isRendererH3OrBelow;
- (char)isRendererH4OrBelow;
- (char)isRendererH5OrBelow;
- (char)hasLightningPort;
- (TSDCapabilities *)init;
- (int)platform;
- (int)deviceType;
- (int)device;
- (int)renderer;

@end
