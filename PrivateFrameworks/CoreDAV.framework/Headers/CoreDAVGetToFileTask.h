/* Runtime dump - CoreDAVGetToFileTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVGetToFileTask : CoreDAVGetTask
{
    NSFileHandle * _destinationFile;
}

@property (retain, nonatomic) NSFileHandle * destinationFile;

- (void)dealloc;
- (char)shouldLogResponseBody;
- (NSObject *)copyDefaultParserForContentType:(NSObject *)arg0;
- (NSFileHandle *)destinationFile;
- (CoreDAVGetToFileTask *)initWithURL:(NSString *)arg0 destinationFile:(NSFileHandle *)arg1;
- (void)setDestinationFile:(NSFileHandle *)arg0;

@end
