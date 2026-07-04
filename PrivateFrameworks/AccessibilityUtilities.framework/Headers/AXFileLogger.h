/* Runtime dump - AXFileLogger
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXFileLogger : NSObject
{
    NSString * _filePath;
}

@property (copy, nonatomic) NSString * filePath;

+ (AXFileLogger *)defaultFileLogger;

- (void)log:(NSData *)arg0;
- (void)dealloc;
- (void)setFilePath:(NSString *)arg0;
- (NSString *)filePath;
- (AXFileLogger *)initWithFilePath:(NSString *)arg0;

@end
