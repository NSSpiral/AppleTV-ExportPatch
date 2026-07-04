/* Runtime dump - TSDGLFrameBuffer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLFrameBuffer : NSObject
{
    NSArray * _textureConfigs;
    NSDictionary * _namesToTextureDict;
    NSMutableArray * _currentTextureLookupInfoByAttachment;
    NSMutableArray * _desiredTextureLookupInfoByAttachment;
    NSArray * _textureConfigsByAttachment;
    NSArray * _textureLookupInfosByAttachment;
    int _currentBindingOption;
    id _currentDrawBuffers;
    int _currentDrawBufferCount;
    unsigned int _currentReadBuffer;
    unsigned int _framebuffer;
    char _isUsingNonDefaultAttachments;
    char _isBound;
    char _shouldDeleteTexturesOnTeardown;
    NSString * _name;
    struct CGSize _size;
}

@property (readonly, nonatomic) unsigned int currentGLTexture;
@property (readonly, nonatomic) NSString * currentGLTextureName;
@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) char isBound;
@property (nonatomic) char shouldDeleteTexturesOnTeardown;
@property (copy, nonatomic) NSString * name;

+ (void)setCurrentGLFramebuffer:(int)arg0;
+ (int)currentGLFramebufferWithBindingOption:(int)arg0;
+ (void)setCurrentGLFramebuffer:(int)arg0 withBindingOption:(int)arg1;
+ (int)currentGLFramebuffer;

- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg0;
- (void)setCurrentTextureNamed:(id)arg0 atAttachment:(unsigned int)arg1;
- (void)bindFramebuffer;
- (unsigned int)GLTextureNamed:(id)arg0;
- (void)setCurrentTextureNamed:(id)arg0;
- (void)bindFramebufferWithBindingOption:(int)arg0;
- (TSDGLFrameBuffer *)initWithSize:(struct CGSize)arg0 textureConfigs:(NSArray *)arg1;
- (void)setupFramebufferIfNecessary;
- (TSDGLFrameBuffer *)initWithSize:(struct CGSize)arg0 textureCount:(unsigned int)arg1;
- (char)p_isCurrentDrawBuffersEqualToDrawbuffers:(unsigned int *)arg0 count:(int)arg1;
- (void)p_setDrawBuffersAndReadBuffer;
- (void)p_setFramebufferTextureAtAttachmentIndex:(int)arg0 bindingOption:(int)arg1;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg0 withBindingOption:(int)arg1;
- (void)setCurrentTextureIndex:(unsigned int)arg0 atAttachment:(unsigned int)arg1;
- (int)currentTextureIndexAtAttachment:(unsigned int)arg0;
- (void)setCurrentTextureToNextAtAttachment:(unsigned int)arg0;
- (unsigned int)GLTextureAtIndex:(unsigned int)arg0 attachment:(unsigned int)arg1;
- (char)shouldDeleteTexturesOnTeardown;
- (NSObject *)p_currentTextureLookupInfoAtAttachment:(unsigned int)arg0;
- (void)setCurrentTextureIndex:(unsigned int)arg0;
- (void)setCurrentTexturesToNext;
- (unsigned int)GLTextureAtIndex:(unsigned int)arg0;
- (struct CGSize)sizeOfGLTextureNamed:(id)arg0;
- (unsigned int)currentGLTextureAtAttachment:(unsigned int)arg0;
- (unsigned int)currentGLTexture;
- (NSString *)currentGLTextureName;
- (void)setShouldDeleteTexturesOnTeardown:(char)arg0;
- (void)dealloc;
- (struct CGSize)size;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (TSDGLFrameBuffer *)initWithSize:(struct CGSize)arg0;
- (char)isBound;
- (void)teardown;

@end
