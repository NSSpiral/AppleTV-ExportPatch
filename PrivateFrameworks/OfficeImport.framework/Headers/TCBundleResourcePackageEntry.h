/* Runtime dump - TCBundleResourcePackageEntry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCBundleResourcePackageEntry : NSObject
{
    OISFUZipEntry * mZipEntry;
    struct _xmlDoc * mXmlDocument;
}

- (void)dealloc;
- (NSData *)data;
- (struct _xmlDoc *)xmlDocument;
- (TCBundleResourcePackageEntry *)initWithZipEntry:(OISFUZipEntry *)arg0;

@end
