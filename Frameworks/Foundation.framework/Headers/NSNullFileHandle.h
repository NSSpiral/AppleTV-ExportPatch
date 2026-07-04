/* Runtime dump - NSNullFileHandle
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNullFileHandle : NSFileHandle

- (NSData *)availableData;
- (NSString *)readDataToEndOfFile;
- (unsigned long long)offsetInFile;
- (id /* block */)writeabilityHandler;
- (void)setWriteabilityHandler:(id /* block */)arg0;
- (id /* block */)readabilityHandler;
- (void)setReadabilityHandler:(id /* block */)arg0;
- (id)readDataOfLength:(unsigned int)arg0;
- (int)fileDescriptor;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg0;
- (unsigned long long)seekToEndOfFile;
- (void)writeData:(NSData *)arg0;
- (void)closeFile;
- (void)seekToFileOffset:(unsigned long long)arg0;

@end
