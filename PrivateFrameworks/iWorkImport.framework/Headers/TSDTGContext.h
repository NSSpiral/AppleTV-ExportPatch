/* Runtime dump - TSDTGContext
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDTGContext : NSObject
{
    <TSDThumbnailConsumer> * _consumer;
    <TSDThumbnailProducer> * _producer;
    <TSDThumbnailIdentifier> * _thumbnailId;
    TSUImage * _thumbnail;
    char _continueThumbnailing;
}

@property (readonly, nonatomic) <TSDThumbnailConsumer> * consumer;
@property (readonly, nonatomic) <TSDThumbnailProducer> * producer;
@property (nonatomic) <TSDThumbnailIdentifier> * thumbnailId;
@property (nonatomic) char continueThumbnailing;
@property (retain, nonatomic) TSUImage * thumbnail;

- (<TSDThumbnailProducer> *)producer;
- (TSDTGContext *)initWithConsumer:(<TSDThumbnailConsumer> *)arg0 producer:(<TSDThumbnailProducer> *)arg1;
- (<TSDThumbnailIdentifier> *)thumbnailId;
- (void)setThumbnailId:(<TSDThumbnailIdentifier> *)arg0;
- (char)continueThumbnailing;
- (void)setContinueThumbnailing:(char)arg0;
- (void)dealloc;
- (TSUImage *)thumbnail;
- (void)setThumbnail:(TSUImage *)arg0;
- (<TSDThumbnailConsumer> *)consumer;

@end
