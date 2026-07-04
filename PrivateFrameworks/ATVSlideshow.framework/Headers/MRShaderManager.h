/* Runtime dump - MRShaderManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRShaderManager : NSObject
{
    NSMutableDictionary * mGLShadersPerContext;
    NSMutableDictionary * mShadersPerContext;
    NSMutableDictionary * mShaderDescriptions;
    NSLock * mGLShadersPerContextLock;
    NSLock * mShadersPerContextLock;
}

+ (void)initialize;
+ (NSObject *)shaderKeyForShaderID:(NSObject *)arg0 andArguments:(NSDictionary *)arg1;
+ (MRShaderManager *)sharedManager;

- (void)dealloc;
- (MRShaderManager *)init;
- (void)cleanup;
- (NSObject *)shaderForShaderID:(NSObject *)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)registerShaderWithFragmentShaderSource:(NSObject *)arg0 andVertexShaderName:(NSString *)arg1 forShaderID:(NSObject *)arg2;
- (void)registerVertexShaderWithVertexShaderSource:(NSObject *)arg0 forShaderID:(NSObject *)arg1;
- (void)releaseResources;
- (void)forgetContext:(NSObject *)arg0;
- (unsigned int)_glShaderForID:(NSObject *)arg0 inBaseContext:(NSObject *)arg1 isFragmentShader:(char)arg2 withArguments:(NSDictionary *)arg3;
- (void)finalize;

@end
