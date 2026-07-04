/* Runtime dump - MFPartialNetworkDataConsumer
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer>
{
    <MFGuaranteedCollectingDataConsumer> * _rawDataConsumer;
    NSData * _strippedData;
    unsigned int _length;
    id _seenNetworkLineEndings;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (MFPartialNetworkDataConsumer *)init;
- (unsigned int)length;
- (NSData *)data;
- (void)done;
- (int)appendData:(NSData *)arg0;
- (void)purge;
- (id)copyDataWithUnixLineEndings;

@end
