/* Runtime dump - NSFileHandle
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileHandle : NSObject <NSSecureCoding>

@property (readonly, copy) NSData * availableData;
@property (readonly) unsigned long long offsetInFile;

+ (NSFileHandle *)fileHandleForReadingAtPath:(NSString *)arg0;
+ (NSFileHandle *)fileHandleWithNullDevice;
+ (NSFileHandle *)fileHandleWithStandardInput;
+ (NSFileHandle *)fileHandleWithStandardOutput;
+ (NSFileHandle *)fileHandleWithStandardError;
+ (NSFileHandle *)fileHandleForWritingToURL:(NSURL *)arg0 error:(id *)arg1;
+ (NSFileHandle *)fileHandleForUpdatingURL:(NSURL *)arg0 error:(id *)arg1;
+ (NSFileHandle *)fileHandleForReadingFromURL:(NSURL *)arg0 mode:(unsigned short)arg1 error:(id *)arg2;
+ (NSFileHandle *)fileHandleForWritingToURL:(NSURL *)arg0 mode:(unsigned short)arg1 error:(id *)arg2;
+ (NSFileHandle *)fileHandleForUpdatingURL:(NSURL *)arg0 mode:(unsigned short)arg1 error:(id *)arg2;
+ (void)initialize;
+ (NSFileHandle *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;
+ (NSFileHandle *)fileHandleForReadingFromURL:(NSURL *)arg0 error:(id *)arg1;
+ (NSFileHandle *)fileHandleForWritingAtPath:(NSString *)arg0;
+ (NSFileHandle *)fileHandleForUpdatingAtPath:(NSString *)arg0;

- (void)ml_lock;
- (void)ml_unlock;
- (NSFileHandle *)initWithPath:(NSString *)arg0 flags:(int)arg1 createMode:(int)arg2 error:(id *)arg3;
- (NSFileHandle *)initWithPath:(NSString *)arg0 flags:(int)arg1 createMode:(int)arg2;
- (NSFileHandle *)initWithURL:(NSString *)arg0 flags:(int)arg1 createMode:(int)arg2 error:(id *)arg3;
- (NSData *)availableData;
- (NSString *)readDataToEndOfFile;
- (unsigned long long)offsetInFile;
- (id /* block */)writeabilityHandler;
- (void)setWriteabilityHandler:(id /* block */)arg0;
- (id /* block */)readabilityHandler;
- (void)setReadabilityHandler:(id /* block */)arg0;
- (NSFileHandle *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (Class)classForCoder;
- (id)readDataOfLength:(unsigned int)arg0;
- (int)fileDescriptor;
- (NSFileHandle *)initWithFileDescriptor:(int)arg0 closeOnDealloc:(char)arg1;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg0;
- (NSFileHandle *)initWithFileDescriptor:(int)arg0;
- (unsigned long long)seekToEndOfFile;
- (void)writeData:(NSData *)arg0;
- (void)closeFile;
- (void)seekToFileOffset:(unsigned long long)arg0;

@end
