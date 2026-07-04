/* Runtime dump - QLDisplayBundleLoader
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLDisplayBundleLoader : NSObject
{
    NSMutableDictionary * _displayBundlesById;
}

+ (QLDisplayBundleLoader *)sharedLoader;

- (void)_lookForDisplayBundles;
- (Class)loadDisplayBundle:(NSObject *)arg0;
- (Class)displayBundleClassForDocumentType:(NSObject *)arg0;
- (NSObject *)copyDisplayBundleWithPreviewItem:(<QLPreviewItem> *)arg0 displayBundleIdentifier:(NSString *)arg1;
- (void)dealloc;
- (QLDisplayBundleLoader *)init;

@end
