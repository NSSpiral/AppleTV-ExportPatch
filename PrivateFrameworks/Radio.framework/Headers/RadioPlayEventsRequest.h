/* Runtime dump - RadioPlayEventsRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlayEventsRequest : RadioRequest
{
    SSURLConnectionRequest * _request;
    RadioPlayEventCollection * _playEventCollection;
}

@property (readonly, copy, nonatomic) RadioPlayEventCollection * playEventCollection;

- (RadioPlayEventsRequest *)init;
- (void).cxx_destruct;
- (NSString *)deviceName;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (RadioPlayEventCollection *)playEventCollection;
- (RadioPlayEventsRequest *)initWithStationHash:(NSString *)arg0 stationID:(long long)arg1 playEvents:(NSMutableArray *)arg2;
- (RadioPlayEventsRequest *)initWithPlayEventCollection:(RadioPlayEventCollection *)arg0;
- (RadioPlayEventsRequest *)initWithStation:(ATVRadioStation *)arg0 playEvents:(NSMutableArray *)arg1;
- (void)setDeviceName:(NSString *)arg0;

@end
