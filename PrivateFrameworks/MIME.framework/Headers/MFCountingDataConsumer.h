/* Runtime dump - MFCountingDataConsumer
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFCountingDataConsumer : MFNullDataConsumer
{
    unsigned int _count;
}

@property (readonly, nonatomic) unsigned int count;

- (unsigned int)count;
- (int)appendData:(NSData *)arg0;

@end
