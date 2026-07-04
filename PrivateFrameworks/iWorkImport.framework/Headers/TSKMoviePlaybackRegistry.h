/* Runtime dump - TSKMoviePlaybackRegistry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKMoviePlaybackRegistry : NSObject

+ (TSKMoviePlaybackRegistry *)sharedMoviePlaybackRegistry;

- (void)objectWillBeginMoviePlayback:(id)arg0;
- (void)objectDidEndMoviePlayback:(id)arg0;

@end
