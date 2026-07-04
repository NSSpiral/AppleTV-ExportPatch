/* Runtime dump - CoreDAVHrefItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVHrefItem : CoreDAVLeafItem
{
    NSURL * _baseURL;
    int _writeStyle;
}

@property (nonatomic) int writeStyle;
@property (retain, nonatomic) NSURL * baseURL;

- (void)dealloc;
- (CoreDAVHrefItem *)init;
- (NSString *)description;
- (CoreDAVHrefItem *)initWithURL:(NSString *)arg0;
- (NSURL *)baseURL;
- (void)write:(char *)arg0;
- (NSURL *)payloadAsFullURL;
- (void)parserSuggestsBaseURL:(NSURL *)arg0;
- (NSURL *)payloadAsOriginalURL;
- (int)writeStyle;
- (void)setWriteStyle:(int)arg0;
- (void)setBaseURL:(NSURL *)arg0;

@end
