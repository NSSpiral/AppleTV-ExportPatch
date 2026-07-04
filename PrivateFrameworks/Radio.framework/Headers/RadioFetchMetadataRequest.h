/* Runtime dump - RadioFetchMetadataRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioFetchMetadataRequest : RadioRequest
{
    SSURLConnectionRequest * _request;
    NSArray * _itemIDs;
    NSData * _timedMetadata;
    NSArray * _tracks;
}

@property (copy, nonatomic) NSArray * itemIDs;
@property (copy, nonatomic) NSData * timedMetadata;
@property (retain, nonatomic) NSArray * tracks;

- (NSData *)timedMetadata;
- (void)cancel;
- (void).cxx_destruct;
- (NSArray *)itemIDs;
- (void)setItemIDs:(NSArray *)arg0;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (NSArray *)_itemIDsToRadioTracks;
- (void)setTracks:(NSArray *)arg0;
- (void)setTimedMetadata:(NSData *)arg0;
- (NSArray *)tracks;

@end
