/* Runtime dump - GLKShadingHash
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKShadingHash : NSObject
{
    NSObject<OS_dispatch_queue> * _vshQueue;
    NSObject<OS_dispatch_queue> * _fshQueue;
    NSMutableDictionary * _compiledVshs;
    NSMutableDictionary * _compiledFshs;
}

- (void)purgeAllShaders;
- (NSString *)compiledVshForKey:(NSString *)arg0;
- (void)setCompiledVsh:(id)arg0 forKey:(NSString *)arg1;
- (NSString *)compiledFshForKey:(NSString *)arg0;
- (void)setCompiledFsh:(id)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (GLKShadingHash *)init;

@end
