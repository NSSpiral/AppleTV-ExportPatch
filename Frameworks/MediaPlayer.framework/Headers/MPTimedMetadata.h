/* Runtime dump - MPTimedMetadata
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTimedMetadata : NSObject
{
    AVMetadataItem * _metadataItem;
}

@property (readonly, nonatomic) NSString * key;
@property (readonly, nonatomic) NSString * keyspace;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSDictionary * allMetadata;

- (NSObject *)_initWithMetadataItem:(AVMetadataItem *)arg0;
- (NSString *)keyspace;
- (NSDictionary *)allMetadata;
- (MPTimedMetadata *)init;
- (double)timestamp;
- (NSString *)key;
- (void *)value;
- (void).cxx_destruct;

@end
