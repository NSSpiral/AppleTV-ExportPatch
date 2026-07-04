/* Runtime dump - MKLocalSearch
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocalSearch : NSObject
{
    MKLocalSearchRequest * _request;
    <MKMapServiceTicket> * _ticket;
}

@property (readonly, nonatomic) char searching;

- (char)isSearching;
- (void)_handleMapItems:(NSArray *)arg0 boundingRegion:(struct ?)arg1 error:(NSError *)arg2 withCompletionHandler:(id /* block */)arg3 queue:(/* block */ id)arg4;
- (void)_startWithCompletionHandler:(id /* block */)arg0 queue:(/* block */ id)arg1;
- (void)_phoneOnlyStartWithCompletionHandler:(id /* block */)arg0 queue:(/* block */ id)arg1;
- (void)cancel;
- (MKLocalSearch *)init;
- (MKLocalSearch *)initWithRequest:(MKLocalSearchRequest *)arg0;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;

@end
