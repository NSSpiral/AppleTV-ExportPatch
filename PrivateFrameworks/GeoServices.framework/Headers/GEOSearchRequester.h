/* Runtime dump - GEOSearchRequester
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchRequester : NSObject
{
    NSMapTable * _pendingSearches;
    NSLock * _pendingSearchesLock;
}

+ (GEOSearchRequester *)sharedSearchRequester;

- (void)dealloc;
- (GEOSearchRequester *)init;
- (void)search:(NSString *)arg0 timeout:(int)arg1 useBackgroundConnection:(char)arg2 finished:(id /* block */)arg3 refinement:(/* block */ id)arg4 networkActivity:(/* block */ id)arg5 error:(/* block */ id)arg6;
- (void)search:(NSString *)arg0 timeout:(int)arg1 useBackgroundConnection:(char)arg2 finished:(id /* block */)arg3 refinement:(/* block */ id)arg4 networkActivity:(/* block */ id)arg5 error:(/* block */ id)arg6 isCompletions:(/* block */ id)arg7;
- (void)search:(NSString *)arg0 finished:(id /* block */)arg1 refinement:(/* block */ id)arg2 networkActivity:(/* block */ id)arg3 error:(/* block */ id)arg4;
- (void)search:(NSString *)arg0 useBackgroundConnection:(char)arg1 finished:(id /* block */)arg2 refinement:(/* block */ id)arg3 networkActivity:(/* block */ id)arg4 error:(/* block */ id)arg5;
- (void)completions:(NSMutableArray *)arg0 timeout:(int)arg1 useBackgroundConnection:(char)arg2 finished:(id /* block */)arg3 refinement:(/* block */ id)arg4 networkActivity:(/* block */ id)arg5 error:(/* block */ id)arg6;
- (void)cancelSearch:(id)arg0;

@end
