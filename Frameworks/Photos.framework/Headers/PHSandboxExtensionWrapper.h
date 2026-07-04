/* Runtime dump - PHSandboxExtensionWrapper
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHSandboxExtensionWrapper : NSObject
{
    long long _handle;
}

@property long long handle;

+ (PHSandboxExtensionWrapper *)objectWithHandle:(long long)arg0;

- (void)dealloc;
- (long long)handle;
- (void)setHandle:(long long)arg0;

@end
