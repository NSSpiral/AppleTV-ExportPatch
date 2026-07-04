/* Runtime dump - NSFileAttributes
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAttributes : NSDictionary
{
    NSMutableDictionary * dict;
    struct stat statInfo;
    struct ? catInfo;
    NSDictionary * extendedAttrs;
    int fileProtectionClass;
}

+ (NSString *)_attributesAtPath:(NSString *)arg0 partialReturn:(char)arg1 filterResourceFork:(char)arg2 error:(id *)arg3;
+ (NSFileAttributes *)attributesWithStat:(struct stat *)arg0;
+ (NSString *)attributesAtPath:(NSString *)arg0 traverseLink:(char)arg1;
+ (NSURL *)_attributesAtURL:(NSURL *)arg0 partialReturn:(char)arg1 filterResourceFork:(char)arg2 error:(id *)arg3;

- (unsigned int)fileOwnerAccountNumber;
- (NSString *)fileGroupOwnerAccountName;
- (unsigned int)fileGroupOwnerAccountNumber;
- (int)fileSystemNumber;
- (unsigned int)fileSystemFileNumber;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSEnumerator *)keyEnumerator;
- (NSString *)fileType;
- (NSDate *)fileModificationDate;
- (char)isDirectory;
- (NSString *)fileOwnerAccountName;
- (unsigned int)filePosixPermissions;
- (unsigned long long)fileSize;

@end
