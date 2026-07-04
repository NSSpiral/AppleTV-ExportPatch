/* Runtime dump - TCBundleResourceManager
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCBundleResourceManager : NSObject
{
    NSMutableDictionary * mPackageMap;
}

+ (TCBundleResourceManager *)instance;
+ (void)disposeInstance;

- (void)dealloc;
- (TCBundleResourceManager *)init;
- (NSString *)packageWithName:(NSString *)arg0 cacheResult:(char)arg1;
- (NSObject *)dataForResource:(NSObject *)arg0 ofType:(NSString *)arg1 inPackage:(CAPackage *)arg2 cacheResult:(char)arg3;
- (struct _xmlDoc *)xmlDocumentForResource:(struct _xmlNode *)arg0 ofType:(struct _xmlNode *)arg1 inPackage:(struct _xmlDoc *)arg2 cacheResult:(int)arg3;

@end
