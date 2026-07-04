/* Runtime dump - PLMomentAnalyzerWorkThread
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentAnalyzerWorkThread : NSThread
{
    NSPort * _dummyPort;
}

- (void)cancel;
- (void)dealloc;
- (PLMomentAnalyzerWorkThread *)init;
- (void)main;
- (void)removeDummyPort;

@end
