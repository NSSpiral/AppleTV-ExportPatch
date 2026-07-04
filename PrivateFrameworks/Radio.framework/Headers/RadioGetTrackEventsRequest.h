/* Runtime dump - RadioGetTrackEventsRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetTrackEventsRequest : RadioRequest
{
    SSURLConnectionRequest * _request;
    NSArray * _stationTrackIDs;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (RadioGetTrackEventsRequest *)initWithStationTrackIDs:(NSArray *)arg0;

@end
