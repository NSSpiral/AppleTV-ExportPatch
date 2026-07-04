/* Runtime dump - MTLCompiler
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCompiler : NSObject
{
    NSString * _pluginPath;
    NSObject<OS_dispatch_queue> * _compilerQueue;
    struct MTLCompilerConnectionManager * _compilerConnectionManager;
    struct ? _cacheUUID;
}

@property (readonly, copy) NSString * pluginPath;
@property (readonly) struct ? cacheUUID;
@property NSObject<OS_dispatch_queue> * compilerQueue;
@property struct MTLCompilerConnectionManager * compilerConnectionManager;

- (MTLCompiler *)initWithTargetData:(struct ?)arg0 cacheUUID:(struct ? *)arg1 pluginPath:(NSString *)arg2;
- (struct MTLCompilerConnectionManager *)compilerConnectionManager;
- (void)compileFunction:(id)arg0 serializedPipelineData:(NSData *)arg1 stateData:(NSMutableDictionary *)arg2 options:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (MTLCompiler *)initWithArch:(unsigned int)arg0 cacheUUID:(struct ? *)arg1 pluginPath:(NSString *)arg2;
- (void)compileRequest:(NSURLRequest *)arg0 completionHandler:(id /* block */)arg1;
- (void)compileVertexFunction:(id)arg0 serializedVertexDescriptor:(NSObject *)arg1 stateData:(NSMutableDictionary *)arg2 options:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)compileVertexFunction:(id)arg0 serializedPipelineDescriptorData:(NSData *)arg1 stateData:(NSMutableDictionary *)arg2 options:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)compileVertexFunction:(id)arg0 serializedVertexDescriptor:(NSObject *)arg1 stateData:(NSMutableDictionary *)arg2 completionHandler:(id /* block */)arg3;
- (void)compileFragmentFunction:(id)arg0 serializedPixelFormat:(NSString *)arg1 stateData:(NSMutableDictionary *)arg2 options:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)compileFragmentFunction:(id)arg0 serializedPixelFormat:(NSString *)arg1 stateData:(NSMutableDictionary *)arg2 completionHandler:(id /* block */)arg3;
- (void)compileFunction:(id)arg0 stateData:(NSMutableDictionary *)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)compileFunction:(id)arg0 stateData:(NSMutableDictionary *)arg1 completionHandler:(id /* block */)arg2;
- (void)reflectionWithFunction:(id)arg0 options:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (NSString *)pluginPath;
- (struct ?)cacheUUID;
- (NSObject<OS_dispatch_queue> *)compilerQueue;
- (void)setCompilerQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setCompilerConnectionManager:(struct MTLCompilerConnectionManager *)arg0;
- (void)dealloc;
- (void).cxx_construct;

@end
