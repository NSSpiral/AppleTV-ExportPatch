/* Runtime dump - MPStoreCompletionOfferResponse
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreCompletionOfferResponse : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _itemsByVariant;
    NSDictionary * _responseDictionary;
}

@property (readonly, nonatomic) NSDictionary * responseDictionary;

- (MPStoreCompletionOfferResponse *)initWithResponseDictionary:(NSDictionary *)arg0;
- (id)mediaItemsWithStoreOfferVariant:(int)arg0;
- (void).cxx_destruct;
- (NSDictionary *)responseDictionary;

@end
