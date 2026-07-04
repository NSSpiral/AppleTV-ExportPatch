/* Runtime dump - PLSandboxedURL
 * Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLSandboxedURL : NSURL
{
    long long _sandboxExtensionHandle;
}

- (void)dealloc;
- (PLSandboxedURL *)initWithURL:(NSString *)arg0 sandboxExtensionToken:(NSString *)arg1;

@end
