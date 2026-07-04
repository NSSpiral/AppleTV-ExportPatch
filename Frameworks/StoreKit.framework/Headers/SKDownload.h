/* Runtime dump - SKDownload
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKDownload : NSObject
{
    NSString * _contentIdentifier;
    long long _contentLength;
    NSURL * _contentURL;
    NSNumber * _downloadID;
    int _downloadState;
    NSError * _error;
    float _progress;
    double _timeRemaining;
    SKPaymentTransaction * _transaction;
    NSString * _version;
}

@property (readonly, nonatomic) int downloadState;
@property (readonly, nonatomic) long long contentLength;
@property (readonly, nonatomic) NSString * contentIdentifier;
@property (readonly, nonatomic) NSURL * contentURL;
@property (readonly, nonatomic) NSString * contentVersion;
@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) double timeRemaining;
@property (readonly, nonatomic) SKPaymentTransaction * transaction;
@property (copy, nonatomic) NSNumber * _downloadID;

- (NSURL *)contentURL;
- (NSDictionary *)copyXPCEncoding;
- (SKDownload *)initWithXPCEncoding:(NSString *)arg0;
- (void)_setContentLength:(long long)arg0;
- (void)_setContentURL:(NSURL *)arg0;
- (int)downloadState;
- (void)_setDownloadState:(int)arg0;
- (void)_setTimeRemaining:(double)arg0;
- (void)_setContentIdentifier:(NSString *)arg0;
- (void)_applyChangeset:(NSSet *)arg0;
- (void)_setTransaction:(NSObject *)arg0;
- (NSNumber *)_downloadID;
- (void)_setDownloadID:(NSObject *)arg0;
- (void)dealloc;
- (SKDownload *)init;
- (void)_setProgress:(float)arg0;
- (float)progress;
- (double)timeRemaining;
- (NSError *)error;
- (void)_setError:(NSError *)arg0;
- (SKPaymentTransaction *)transaction;
- (long long)contentLength;
- (NSString *)contentIdentifier;
- (void)_setVersion:(NSString *)arg0;
- (NSString *)contentVersion;

@end
