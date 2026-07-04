/* Runtime dump - NSURLSessionAVAssetDownloadTask
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask
{
    NSURL * _URL;
    NSURL * _destinationURL;
    unsigned long long _AVAssetDownloadToken;
}

@property (readonly) unsigned long long AVAssetDownloadToken;
@property (readonly, copy) NSURL * URL;
@property (readonly, copy) NSURL * destinationURL;

- (unsigned long long)AVAssetDownloadToken;
- (NSURL *)destinationURL;
- (NSURL *)URL;

@end
