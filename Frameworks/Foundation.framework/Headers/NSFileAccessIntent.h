/* Runtime dump - NSFileAccessIntent
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessIntent : NSObject
{
    NSURL * _url;
    char _isRead;
    int _options;
}

@property (copy) NSURL * URL;
@property (readonly) char isRead;
@property (readonly) unsigned int readingOptions;
@property (readonly) unsigned int writingOptions;

+ (NSURL *)writingIntentWithURL:(NSString *)arg0 options:(unsigned int)arg1;
+ (NSURL *)readingIntentWithURL:(NSString *)arg0 options:(unsigned int)arg1;

- (unsigned int)readingOptions;
- (unsigned int)writingOptions;
- (void)dealloc;
- (NSString *)description;
- (NSURL *)URL;
- (void)setURL:(NSString *)arg0;
- (char)isRead;

@end
