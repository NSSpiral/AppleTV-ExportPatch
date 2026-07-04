/* Runtime dump - MFProgressFilterDataConsumer
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer
{
    unsigned int _expectedSize;
    unsigned int _currentBytes;
    id _progressBlock;
}

@property (copy, nonatomic) id progressBlock;
@property (readonly) unsigned int expectedSize;

- (void)dealloc;
- (int)appendData:(NSData *)arg0;
- (unsigned int)expectedSize;
- (MFProgressFilterDataConsumer *)initWithConsumer:(NSObject *)arg0 expectedSize:(unsigned int)arg1;
- (MFProgressFilterDataConsumer *)initWithConsumers:(NSArray *)arg0 expectedSize:(unsigned int)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg0;

@end
