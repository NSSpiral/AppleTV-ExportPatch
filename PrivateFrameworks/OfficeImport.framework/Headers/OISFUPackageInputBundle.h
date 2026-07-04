/* Runtime dump - OISFUPackageInputBundle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUPackageInputBundle : NSObject <SFUInputBundle>
{
    NSString * _rootPath;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (OISFUPackageInputBundle *)initWithPath:(NSString *)arg0;
- (char)hasEntryWithName:(NSString *)arg0;
- (id)inputStreamForEntry:(NSString *)arg0;
- (OISFUBufferedInputStream *)bufferedInputStreamForEntry:(NSString *)arg0;
- (long long)lengthOfEntry:(NSString *)arg0;
- (unsigned int)crc32ForEntry:(NSString *)arg0;
- (void)copyEntry:(NSString *)arg0 toFile:(NSString *)arg1;
- (NSString *)_existingPathForEntryName:(NSString *)arg0 isGz:(char *)arg1;

@end
