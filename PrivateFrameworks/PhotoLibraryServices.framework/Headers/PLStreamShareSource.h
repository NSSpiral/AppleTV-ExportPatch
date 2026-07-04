/* Runtime dump - PLStreamShareSource
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLStreamShareSource : NSObject
{
    NSData * _mediaData;
    NSString * _fileExtension;
    NSURL * _mediaURL;
    int _mediaType;
}

@property (retain, nonatomic) NSData * mediaData;
@property (retain, nonatomic) NSString * fileExtension;
@property (retain, nonatomic) NSURL * mediaURL;
@property (nonatomic) int mediaType;

- (PLStreamShareSource *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)fileExtension;
- (NSData *)mediaData;
- (int)mediaType;
- (void)setMediaData:(NSData *)arg0;
- (NSURL *)mediaURL;
- (void)setFileExtension:(NSString *)arg0;
- (void)setMediaType:(int)arg0;
- (void)setMediaURL:(NSURL *)arg0;
- (NSDictionary *)serializedDictionary;

@end
