/* Runtime dump - PKSandboxExtension
 * Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKSandboxExtension : NSObject
{
    NSString * _token;
    long long _handle;
}

@property (retain) NSString * token;
@property long long handle;

- (void)dealloc;
- (void).cxx_destruct;
- (NSString *)token;
- (void)setToken:(NSString *)arg0;
- (long long)handle;
- (void)setHandle:(long long)arg0;
- (PKSandboxExtension *)initWithExtension:(NSExtension *)arg0;
- (void)consume;
- (void)expel;

@end
