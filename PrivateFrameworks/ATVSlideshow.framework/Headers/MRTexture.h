/* Runtime dump - MRTexture
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTexture : NSObject
{
    EAGLContext * mParentGLContext;
    MRContextState * mInnerState;
    unsigned long mWidth;
    unsigned long mHeight;
    unsigned int mTextureName;
    unsigned int mTextureTarget;
    unsigned long mPixelFormat;
    double mTimestamp;
    unsigned int mFramebufferName;
    EAGLContext * mGLContext;
    int mMinFilter;
    int mMagFilter;
    int mWrapS;
    int mWrapT;
    id mBorderColor;
    char mTextureNameIsNotOurs;
}

@property (readonly) MRContextState * innerState;
@property (readonly, nonatomic) unsigned long width;
@property (readonly, nonatomic) unsigned long height;
@property (readonly, nonatomic) unsigned long pixelFormat;
@property (readonly, nonatomic) unsigned int textureName;
@property (readonly, nonatomic) unsigned int textureTarget;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned int framebufferName;
@property (readonly, nonatomic) EAGLContext * glContext;
@property (nonatomic) int minFilter;
@property (nonatomic) int magFilter;
@property (nonatomic) int wrapS;
@property (nonatomic) int wrapT;

- (int)wrapS;
- (void)setWrapS:(int)arg0;
- (int)wrapT;
- (void)setWrapT:(int)arg0;
- (unsigned int)textureTarget;
- (void)dealloc;
- (double)timestamp;
- (void)setTimestamp:(double)arg0;
- (unsigned long)width;
- (unsigned long)height;
- (void)setLabel:(NSString *)arg0;
- (void)cleanup;
- (EAGLContext *)glContext;
- (MRContextState *)innerState;
- (unsigned int)textureName;
- (int)minFilter;
- (int)magFilter;
- (void)setMinFilter:(int)arg0;
- (void)setMagFilter:(int)arg0;
- (unsigned int)framebufferName;
- (unsigned long)pixelFormat;
- (MRTexture *)initWithIOSurface:(struct __IOSurface *)arg0 inGLContext:(NSObject *)arg1 options:(struct ? *)arg2;
- (MRTexture *)initWithTextureName:(unsigned int)arg0 textureTarget:(unsigned int)arg1 size:(struct CGSize)arg2 inGLContext:(NSObject *)arg3 options:(struct ? *)arg4;
- (MRTexture *)initWithData:(void *)arg0 width:(unsigned long)arg1 height:(unsigned long)arg2 rowBytes:(unsigned long)arg3 inGLContext:(NSObject *)arg4 options:(struct ? *)arg5;
- (MRTexture *)initWithDatas:(void * *)arg0 dataCount:(void)arg1 width:(unsigned int)arg2 height:(unsigned long)arg3 rowBytes:(unsigned long)arg4 inGLContext:(unsigned long)arg5 options:(NSDictionary *)arg6;
- (MRTexture *)initWithSize:(struct CGSize)arg0 inGLContext:(NSObject *)arg1 options:(struct ? *)arg2;
- (void)uploadData:(void *)arg0 rowBytes:(unsigned int)arg1 toRect:(struct CGRect)arg2;
- (void)finalize;

@end
