/* Runtime dump - QLPackageChecker
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPackageChecker : NSObject
{
    int _fd;
}

- (char)pathHasPackageExtension:(id)arg0;
- (void)dealloc;
- (QLPackageChecker *)initWithAnchorURL:(NSURL *)arg0;

@end
