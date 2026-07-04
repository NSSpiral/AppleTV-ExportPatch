/* Runtime dump - MPMediaQueryQueueFeederItemIdentifier
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQueryQueueFeederItemIdentifier : NSObject <MPAVItemQueueIdentifier, NSSecureCoding>
{
    MPMediaItem * _mediaItem;
    unsigned int _repeatIndex;
    unsigned long long _feederRevisionID;
}

@property (readonly, nonatomic) unsigned long long feederRevisionID;
@property (readonly, nonatomic) MPMediaItem * mediaItem;
@property (readonly, nonatomic) unsigned int repeatIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (MPMediaQueryQueueFeederItemIdentifier *)initWithMediaItem:(MPMediaItem *)arg0 repeatIndex:(unsigned int)arg1 feederRevisionID:(unsigned long long)arg2;
- (unsigned long long)feederRevisionID;
- (unsigned int)repeatIndex;
- (MPMediaQueryQueueFeederItemIdentifier *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (MPMediaQueryQueueFeederItemIdentifier *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (MPMediaItem *)mediaItem;

@end
