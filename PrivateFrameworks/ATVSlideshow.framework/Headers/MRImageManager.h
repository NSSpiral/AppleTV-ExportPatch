/* Runtime dump - MRImageManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRImageManager : NSObject
{
    MRContext * mBaseContext;
    EAGLContext * mImageGLContext;
    NSMutableDictionary * mImageInfos;
    NSLock * mImageInfosLock;
    NSMutableDictionary * mFBOs;
    NSMutableSet * mAvailableFBOs;
    NSMutableSet * mRecyclableFBOs;
    NSMutableSet * mRemoteKeysToRelease;
    unsigned long long mHostTime;
}

@property (nonatomic) unsigned long long hostTime;
@property (readonly) MRContext * baseContext;
@property (readonly) EAGLContext * imageGLContext;

+ (void)initialize;
+ (void)cleanupPictureCache;

- (void)dealloc;
- (MRImageManager *)initWithBaseContext:(MRContext *)arg0;
- (NSObject *)retainedByUserImageWithSize:(struct CGSize)arg0 andColor:(float *)arg1;
- (MRContext *)baseContext;
- (void)purgeResources:(char)arg0;
- (NSString *)retainedByUserImageWithCGContext:(struct CGContext *)arg0;
- (void)recycleFBOTexture:(NSObject *)arg0;
- (void)tryReleaseImageBufferForImage:(UIImage *)arg0;
- (EAGLContext *)imageGLContext;
- (NSObject *)fboTextureWithSize:(struct CGSize)arg0;
- (void)releaseStuffForRemoteKey:(NSString *)arg0;
- (struct __IOSurface *)IOSurfaceWithData:(NSData *)arg0 withOriginalSize:(struct CGSize)arg1 forSize:(struct CGSize)arg2 orientation:(char *)arg3;
- (struct __IOSurface *)IOSurfaceWithPath:(NSString *)arg0 withOriginalSize:(struct CGSize)arg1 forSize:(struct CGSize)arg2 orientation:(char *)arg3;
- (struct CGImage *)CGImageWithData:(NSData *)arg0 withOriginalSize:(struct CGSize)arg1 forSize:(struct CGSize)arg2 orientation:(char *)arg3;
- (struct CGImage *)CGImageWithPath:(NSString *)arg0 withOriginalSize:(struct CGSize)arg1 forSize:(struct CGSize)arg2 orientation:(char *)arg3;
- (struct __IOSurface *)IOSurfaceWithMoviePath:(MIPMovie *)arg0 withOriginalSize:(struct CGSize)arg1 forSize:(struct CGSize)arg2 atTime:(double)arg3 orientation:(char *)arg4;
- (struct CGImage *)CGImageWithMoviePath:(MIPMovie *)arg0 withOriginalSize:(struct CGSize)arg1 forSize:(struct CGSize)arg2 atTime:(double)arg3 orientation:(char *)arg4;
- (char)configureMovieAtPath:(NSString *)arg0 forSize:(struct CGSize)arg1 time:(double)arg2 intoImageInfo:(NSDictionary *)arg3;
- (NSDictionary *)imageFromMovieWithImageInfo:(NSDictionary *)arg0 atTime:(double)arg1;
- (NSSet *)retainedByUserImageForAsset:(NSSet *)arg0 atSize:(struct CGSize)arg1 andTime:(double)arg2 previousImageBufferKey:(NSString *)arg3 options:(NSDictionary *)arg4;
- (void)play:(char)arg0 forImageKey:(NSString *)arg1;
- (void)setTime:(double)arg0 forImageKey:(NSString *)arg1;
- (unsigned long long)hostTime;
- (void)setHostTime:(unsigned long long)arg0;
- (NSString *)optimizedPath:(NSString *)arg0 forSize:(struct CGSize)arg1;

@end
