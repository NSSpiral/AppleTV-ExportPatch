/* Runtime dump - TSDGLFrameBufferTextureConfig
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLFrameBufferTextureConfig : NSObject
{
    char _isTextureNameGenerated;
    int _GLInternalFormat;
    unsigned int _GLFormat;
    unsigned int _GLType;
    NSString * _name;
    unsigned int _attachment;
    NSArray * _textureParameters;
    struct CGSize _size;
}

@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) int GLInternalFormat;
@property (readonly, nonatomic) unsigned int GLFormat;
@property (readonly, nonatomic) unsigned int GLType;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) unsigned int attachment;
@property (readonly, nonatomic) NSArray * textureParameters;

+ (NSObject *)textureConfigWithSize:(struct CGSize)arg0 attachment:(unsigned int)arg1 textureParameters:(NSArray *)arg2 name:(NSString *)arg3;
+ (NSObject *)textureConfigWithSize:(struct CGSize)arg0 name:(NSString *)arg1;
+ (NSObject *)textureConfigWithSize:(struct CGSize)arg0 textureParameters:(NSArray *)arg1 name:(NSString *)arg2;
+ (NSObject *)textureConfigWithSize:(struct CGSize)arg0 internalFormat:(int)arg1 format:(unsigned int)arg2 type:(unsigned int)arg3 attachment:(unsigned int)arg4 textureParameters:(NSArray *)arg5 name:(NSString *)arg6;

- (TSDGLFrameBufferTextureConfig *)initWithSize:(struct CGSize)arg0 internalFormat:(int)arg1 format:(unsigned int)arg2 type:(unsigned int)arg3 attachment:(unsigned int)arg4 textureParameters:(NSArray *)arg5 name:(NSString *)arg6;
- (int)GLInternalFormat;
- (unsigned int)GLFormat;
- (unsigned int)GLType;
- (NSArray *)textureParameters;
- (void)dealloc;
- (struct CGSize)size;
- (NSString *)name;
- (TSDGLFrameBufferTextureConfig *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)attachment;

@end
