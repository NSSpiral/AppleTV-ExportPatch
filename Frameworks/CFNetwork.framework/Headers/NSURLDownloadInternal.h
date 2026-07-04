/* Runtime dump - NSURLDownloadInternal
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLDownloadInternal : NSObject
{
    struct _CFURLDownload * cfDownload;
    struct _CFURLAuthChallenge * currCFChallenge;
    NSURLAuthenticationChallenge * currNSChallenge;
    id delegate;
    char downloadActive;
    NSOperationQueue * _targetQueue;
}

- (void)dealloc;

@end
