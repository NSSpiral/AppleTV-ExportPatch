/* Runtime dump - SBFWallpaperOptions
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperOptions : NSObject
{
    char _supportsCropping;
    char _isPortrait;
    NSString * _name;
    float _parallaxFactor;
    float _zoomScale;
    struct CGRect _cropRect;
}

@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, nonatomic) char parallaxEnabled;
@property (readonly, nonatomic) float parallaxFactor;
@property (readonly, nonatomic) float zoomScale;
@property (readonly, nonatomic) char supportsCropping;
@property (readonly, nonatomic) struct CGRect cropRect;
@property (readonly, nonatomic) char isPortrait;

+ (NSString *)optionsWithName:(NSString *)arg0 parallaxFactor:(float)arg1 zoomScale:(float)arg2 supportsCropping:(char)arg3 cropRect:(struct CGRect)arg4 portrait:(struct CGSize)arg5;

- (char)isPortrait;
- (void)dealloc;
- (NSString *)name;
- (float)zoomScale;
- (struct CGRect)cropRect;
- (float)parallaxFactor;
- (SBFWallpaperOptions *)initWithName:(NSString *)arg0 parallaxFactor:(float)arg1 zoomScale:(float)arg2 supportsCropping:(char)arg3 cropRect:(struct CGRect)arg4 portrait:(struct CGSize)arg5;
- (char)parallaxEnabled;
- (char)supportsCropping;

@end
