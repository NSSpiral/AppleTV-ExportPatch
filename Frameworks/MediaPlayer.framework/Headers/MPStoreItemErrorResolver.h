/* Runtime dump - MPStoreItemErrorResolver
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemErrorResolver : MPAVErrorResolver
{
    SSKeybagRequest * _request;
    MPAVItem * _item;
    NSNumber * _storeAccountIdentifier;
}

@property (readonly, nonatomic) MPAVItem * item;
@property (readonly, copy, nonatomic) NSNumber * storeAccountIdentifier;

- (void)resolveError:(NSError *)arg0;
- (MPStoreItemErrorResolver *)initWithItem:(MPAVItem *)arg0 storeAccountIdentifier:(NSNumber *)arg1;
- (NSNumber *)storeAccountIdentifier;
- (void)dealloc;
- (MPAVItem *)item;
- (void).cxx_destruct;

@end
