/* Runtime dump - OCPZipPackagePart
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCPZipPackagePart : OCPPackagePart
{
    OISFUZipEntry * mEntry;
}

@property (readonly, nonatomic) OISFUZipEntry * zipEntry;

- (void)dealloc;
- (NSData *)data;
- (struct _xmlDoc *)xmlDocument;
- (struct _xmlTextReader *)xmlReader;
- (void)copyToFile:(NSString *)arg0;
- (OISFUZipEntry *)zipEntry;
- (OCPZipPackagePart *)initWithArchive:(GQZArchive *)arg0 location:(struct CGPoint)arg1 package:(TSPDirectoryPackage *)arg2;

@end
