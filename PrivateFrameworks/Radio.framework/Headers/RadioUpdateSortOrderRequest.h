/* Runtime dump - RadioUpdateSortOrderRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioUpdateSortOrderRequest : RadioSyncRequest
{
    NSArray * _stationSortOrdering;
}

- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (NSArray *)changeList;
- (RadioUpdateSortOrderRequest *)initWithStationSortOrdering:(NSArray *)arg0;

@end
