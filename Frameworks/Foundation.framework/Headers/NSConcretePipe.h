/* Runtime dump - NSConcretePipe
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcretePipe : NSPipe
{
    NSFileHandle * _readHandle;
    NSFileHandle * _writeHandle;
}

- (NSFileHandle *)fileHandleForReading;
- (NSFileHandle *)fileHandleForWriting;
- (void)dealloc;
- (NSConcretePipe *)init;
- (NSConcretePipe *)copyWithZone:(struct _NSZone *)arg0;

@end
