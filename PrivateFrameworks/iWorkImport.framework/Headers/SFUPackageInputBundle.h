/* Runtime dump - SFUPackageInputBundle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUPackageInputBundle : NSObject <SFUInputBundle>
{
    NSString * _rootPath;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (SFUPackageInputBundle *)initWithPath:(NSString *)arg0;
- (char)hasEntryWithName:(NSString *)arg0;
- (id)inputStreamForEntry:(NSString *)arg0;
- (id)bufferedInputStreamForEntry:(NSString *)arg0;
- (long long)lengthOfEntry:(NSString *)arg0;
- (unsigned int)crc32ForEntry:(NSString *)arg0;
- (void)copyEntry:(NSString *)arg0 toFile:(NSString *)arg1;
- (NSString *)_existingPathForEntryName:(NSString *)arg0 isGz:(char *)arg1;

@end
