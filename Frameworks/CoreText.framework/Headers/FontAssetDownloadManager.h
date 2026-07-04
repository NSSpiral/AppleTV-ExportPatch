/* Runtime dump - FontAssetDownloadManager
 * Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface FontAssetDownloadManager : NSObject
{
    struct TCFRef<const __CFArray *> fDescriptors;
    struct TCFRef<const __CFSet *> fMandatoryAttributes;
    id fProgressCallbackBlock;
    NSMutableDictionary * fProgressParams;
    NSMutableDictionary * fDownloadOptions;
    NSSet * fPreciousFontLanguages;
}

+ (Class)getASAssetQueryClass;
+ (char)shouldIgnoreFontAsset:(NSSet *)arg0;
+ (char)shouldTryServer;
+ (char)shouldRetryWithServer;
+ (NSArray *)enabledKeyboardLanguages;
+ (FontAssetDownloadManager *)displayNameForCurrentUser:(id)arg0;
+ (NSArray *)availableFontAttributesArray;

- (char)callProgressCallbak:(unsigned int)arg0;
- (NSArray *)getUnmatchedDescriptors;
- (id)mobileAssetsForUnmatched:(id)arg0 andFontFilePaths:(NSArray *)arg1;
- (unsigned long)calculateDownloadSize:(NSObject *)arg0;
- (void)setProgressParam:(id)arg0 forKey:(NSString *)arg1;
- (char)executeDownloadingFontAssets:(NSArray *)arg0 forDescriptors:(NSArray *)arg1 andFontFilePaths:(NSArray *)arg2;
- (id)doFinalMatching;
- (NSArray *)availableMobileAssets:(char)arg0 error:(id *)arg1;
- (NSObject *)extractMatchingAssetsForDescriptor:(struct __CTFontDescriptor *)arg0 from:(NSObject *)arg1 withFailInfo:(char *)arg2 andFontFilePaths:(NSArray *)arg3;
- (void)setDownloadOptionsForMobileAsset;
- (char)assetStalled:(id)arg0;
- (void)setGarbageCollectionBehaviorForAsset:(NSSet *)arg0;
- (char)activateFontsFromAssetURL:(NSURL *)arg0;
- (NSArray *)preciousFontLanguages;
- (FontAssetDownloadManager *)initWithDescriptors:(struct __CFArray *)arg0 andMandatoryAttributes:(struct __CFSet *)arg1 withBlock:(id /* block */)arg2;
- (void)downloadFontAssets;
- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
