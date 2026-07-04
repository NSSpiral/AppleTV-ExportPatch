/* Runtime dump - CFPDContainerSource
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDContainerSource : CFPDSource
{
    struct __CFString * _containerPath;
}

- (CFPDContainerSource *)initWithDomain:(struct __CFString *)arg0 userName:(struct __CFString *)arg1 container:(struct __CFString *)arg2 byHost:(char)arg3 managed:(char)arg4 shmemIndex:(short)arg5;
- (struct __CFString *)container;

@end
