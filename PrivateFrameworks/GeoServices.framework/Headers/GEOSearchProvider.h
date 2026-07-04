/* Runtime dump - GEOSearchProvider
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchProvider : NSObject
{
    id _error;
}

@property (copy, nonatomic) id error;

- (void)cancel;
- (void)dealloc;
- (NSError *)error;
- (void)search:(NSString *)arg0 timeout:(int)arg1 useBackgroundConnection:(char)arg2 finished:(id /* block */)arg3 refinement:(/* block */ id)arg4 error:(NSError *)arg5 isCompletions:(/* block */ id)arg6;
- (void)setError:(NSError *)arg0;

@end
