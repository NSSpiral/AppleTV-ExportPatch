/* Runtime dump - OCPZipPackage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCPZipPackage : OCPPackage
{
    OISFUZipArchive * mArchive;
    NSMutableDictionary * mParts;
}

- (void)dealloc;
- (OCPZipPackage *)initWithData:(NSData *)arg0;
- (OCPZipPackage *)initWithPath:(NSString *)arg0;
- (NSObject *)partForLocation:(NSObject *)arg0;
- (void)resetPartForLocation:(NSObject *)arg0;
- (OCPZipPackage *)initWithArchive:(GQZArchive *)arg0;

@end
