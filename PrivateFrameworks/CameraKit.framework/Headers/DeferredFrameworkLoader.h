/* Runtime dump - DeferredFrameworkLoader
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface DeferredFrameworkLoader : NSObject
{
    NSString * _path;
    void * _frameworkHandle;
    long _frameworkLoadedToken;
}

@property (retain, nonatomic) NSString * path;
@property (nonatomic) void * frameworkHandle;
@property (nonatomic) long frameworkLoadedToken;

+ (NSString *)PhotosUIFrameworkPath;

- (void)dealloc;
- (NSString *)path;
- (void)setPath:(NSString *)arg0;
- (DeferredFrameworkLoader *)initWithPath:(NSString *)arg0;
- (void).cxx_destruct;
- (Class)classFromString:(NSString *)arg0;
- (void *)frameworkHandle;
- (void)setFrameworkHandle:(void *)arg0;
- (long)frameworkLoadedToken;
- (void)setFrameworkLoadedToken:(long)arg0;

@end
