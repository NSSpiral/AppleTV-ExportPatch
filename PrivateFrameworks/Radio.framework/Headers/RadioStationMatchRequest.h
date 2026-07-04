/* Runtime dump - RadioStationMatchRequest
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationMatchRequest : RadioRequest
{
    NSArray * _libraryTrackDictionaries;
    SSURLConnectionRequest * _request;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)arg0;
- (RadioStationMatchRequest *)initWithLibraryTrackDictionaries:(NSArray *)arg0;

@end
