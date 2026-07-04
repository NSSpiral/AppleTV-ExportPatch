/* Runtime dump - RadioLoadStoreBagRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioLoadStoreBagRequest : RadioRequest
{
    char _ignoresRadioDiskCache;
}

@property (nonatomic) char ignoresRadioDiskCache;

+ (TLAccessQueue *)_accessQueue;
+ (void)_urlBagDidLoadNotification:(NSNotification *)arg0;
+ (NSNumber *)_cachedStoreBagForActiveAccount;
+ (void)_writeStoreBagToDiskCache:(NSObject *)arg0;
+ (NSNumber *)_cachedBagFilenameForActiveAccount;
+ (RadioLoadStoreBagRequest *)_pathForCachedStoreBags;

- (void)loadStoreBagWithOptions:(int)arg0 completionHandler:(id /* block */)arg1;
- (void)_handleFinishedLoadingBag:(id)arg0 withError:(NSError *)arg1 didLoadFromNonDiskCache:(char)arg2 completionHandler:(id /* block */)arg3;
- (char)ignoresRadioDiskCache;
- (void)setIgnoresRadioDiskCache:(char)arg0;

@end
