/* Runtime dump - NSGZipDecoder
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder>
{
    struct z_stream_s _stream;
    unsigned int _modificationTime;
    NSString * _filename;
    char _streamInitialized;
    char _decodedHeader;
    char _finishedInflating;
    char _pad;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)decodeDownloadHeader:(NSString *)arg0 headerLength:(int *)arg1 modificationTime:(unsigned int *)arg2 filename:(id *)arg3;
+ (char)canDecodeDownloadHeaderData:(NSData *)arg0;
+ (NSString *)MIMEType;

- (NSData *)decodeData:(NSData *)arg0;
- (NSString *)filenameWithOriginalFilename:(NSString *)arg0;
- (char)decodeDownloadData:(NSData *)arg0 dataForkData:(id *)arg1 resourceForkData:(id *)arg2;
- (char)finishDownloadDecoding;
- (void)dealloc;
- (NSGZipDecoder *)init;
- (void).cxx_construct;
- (NSDictionary *)fileAttributes;
- (char)isFinishedDecoding;
- (void)finalize;

@end
