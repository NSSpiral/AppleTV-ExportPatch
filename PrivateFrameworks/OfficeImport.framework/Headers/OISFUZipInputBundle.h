/* Runtime dump - OISFUZipInputBundle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUZipInputBundle : NSObject <SFUInputBundle>
{
    OISFUZipArchive * _zipArchive;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (char)hasEntryWithName:(NSString *)arg0;
- (id)inputStreamForEntry:(NSString *)arg0;
- (OISFUBufferedInputStream *)bufferedInputStreamForEntry:(NSString *)arg0;
- (long long)lengthOfEntry:(NSString *)arg0;
- (unsigned int)crc32ForEntry:(NSString *)arg0;
- (void)copyEntry:(NSString *)arg0 toFile:(NSString *)arg1;
- (OISFUZipInputBundle *)initWithZipArchive:(OISFUZipArchive *)arg0;

@end
