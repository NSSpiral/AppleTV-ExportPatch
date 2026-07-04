/* Runtime dump - NSPipe
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPipe : NSObject

@property (readonly, retain) NSFileHandle * fileHandleForReading;
@property (readonly, retain) NSFileHandle * fileHandleForWriting;

+ (NSPipe *)pipe;
+ (NSPipe *)allocWithZone:(struct _NSZone *)arg0;

- (NSFileHandle *)fileHandleForReading;
- (NSFileHandle *)fileHandleForWriting;
- (NSPipe *)init;

@end
