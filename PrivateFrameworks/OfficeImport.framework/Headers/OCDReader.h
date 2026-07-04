/* Runtime dump - OCDReader
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCDReader : NSObject
{
    <TCCancelDelegate> * mCancelDelegate;
    <OCDReaderDelegate> * mDelegate;
    char mIsThumbnail;
    TCImportTracing * mTracing;
    NSString * mFileName;
    NSData * mData;
    NSError * mStartError;
}

@property (retain, nonatomic) NSString * fileName;
@property (retain, nonatomic) NSData * data;
@property (retain, nonatomic) NSError * startError;
@property (retain, nonatomic) <TCCancelDelegate> * cancelDelegate;
@property (nonatomic) <OCDReaderDelegate> * delegate;
@property (nonatomic) char isThumbnail;
@property (retain, nonatomic) TCImportTracing * tracing;

- (NSString *)fileName;
- (void)dealloc;
- (void)setDelegate:(<OCDReaderDelegate> *)arg0;
- (<OCDReaderDelegate> *)delegate;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (char)start;
- (char)isThumbnail;
- (void)setIsThumbnail:(char)arg0;
- (OCDReader *)initWithCancelDelegate:(<TCCancelDelegate> *)arg0 tracing:(TCImportTracing *)arg1;
- (BOOL)isBinaryReader;
- (NSObject *)read;
- (NSError *)startError;
- (char)verifyFileFormat;
- (TCImportTracing *)tracing;
- (void)setCancelDelegate:(<TCCancelDelegate> *)arg0;
- (void)setTracing:(TCImportTracing *)arg0;
- (void)setStartError:(NSError *)arg0;
- (void)setStartErrorMessageFromException:(NSException *)arg0;
- (<TCCancelDelegate> *)cancelDelegate;
- (void)setFileName:(NSString *)arg0;

@end
