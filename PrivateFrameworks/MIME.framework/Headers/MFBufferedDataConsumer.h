/* Runtime dump - MFBufferedDataConsumer
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFBufferedDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer>
{
    NSMutableData * _data;
    int _fd;
    NSString * _path;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (MFBufferedDataConsumer *)init;
- (NSMutableData *)data;
- (void)done;
- (int)appendData:(NSData *)arg0;

@end
