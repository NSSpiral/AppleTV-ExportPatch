/* Runtime dump - TCBundleResourcePackage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCBundleResourcePackage : NSObject
{
    OISFUZipArchive * mZipArchive;
    NSMutableDictionary * mEntryMap;
}

- (void)dealloc;
- (TCBundleResourcePackage *)initWithZipArchive:(NSString *)arg0;
- (NSString *)entryWithName:(NSString *)arg0 cacheResult:(char)arg1;

@end
