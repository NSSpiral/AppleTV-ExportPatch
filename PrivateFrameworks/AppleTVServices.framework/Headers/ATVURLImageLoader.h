/* Runtime dump - ATVURLImageLoader
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVURLImageLoader : NSObject <ISURLOperationDelegate, ATVImageLoader>
{
    ISOperationQueue * imageLoadQueue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVURLImageLoader *)sharedInstance;

- (void)operation:(ISURLOperation *)arg0 failedWithError:(NSError *)arg1;
- (ATVURLImageLoader *)init;
- (void).cxx_destruct;
- (NSObject *)imageKeyForObject:(NSObject *)arg0;
- (void)operation:(ISURLOperation *)arg0 finishedWithOutput:(AVPlayerLayer *)arg1;
- (NSObject *)loadImageForObject:(NSObject *)arg0 size:(struct CGSize)arg1 crop:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelLoad:(id)arg0;

@end
