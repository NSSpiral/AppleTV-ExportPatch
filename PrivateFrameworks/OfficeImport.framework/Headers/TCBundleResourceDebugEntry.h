/* Runtime dump - TCBundleResourceDebugEntry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCBundleResourceDebugEntry : NSObject
{
    unsigned int mCacheCount;
    unsigned int mUncachedCount;
}

+ (void)addEntry:(QLZipArchiveEntry *)arg0 ofType:(NSString *)arg1 inPackage:(CAPackage *)arg2 cacheResult:(char)arg3;
+ (void)dumpUsage;

@end
