/* Runtime dump - TSUReadChannelInputStreamAdapter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream>
{
    <TSUReadChannel> * _readChannel;
    NSObject<OS_dispatch_data> * _leftoverData;
    long long _offset;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSUReadChannelInputStreamAdapter *)initWithReadChannel:(<TSUReadChannel> *)arg0;
- (void)dealloc;
- (long long)offset;
- (void)close;
- (void).cxx_destruct;
- (void)seekToOffset:(long long)arg0;
- (unsigned long)readToBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (NSObject *)closeLocalStream;
- (char)canSeek;

@end
