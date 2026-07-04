/* Runtime dump - SFUZipInputBundle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUZipInputBundle : NSObject <SFUInputBundle>
{
    SFUZipArchive * _zipArchive;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (char)hasEntryWithName:(NSString *)arg0;
- (id)inputStreamForEntry:(NSString *)arg0;
- (id)bufferedInputStreamForEntry:(NSString *)arg0;
- (long long)lengthOfEntry:(NSString *)arg0;
- (unsigned int)crc32ForEntry:(NSString *)arg0;
- (void)copyEntry:(NSString *)arg0 toFile:(NSString *)arg1;
- (SFUZipInputBundle *)initWithZipArchive:(SFUZipArchive *)arg0;

@end
