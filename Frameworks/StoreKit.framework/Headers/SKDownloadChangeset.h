/* Runtime dump - SKDownloadChangeset
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKDownloadChangeset : NSObject <NSCopying>
{
    NSNumber * _contentLength;
    NSURL * _contentURL;
    NSNumber * _downloadID;
    NSNumber * _downloadState;
    NSError * _error;
    NSNumber * _progress;
    NSNumber * _timeRemaining;
}

@property (copy, nonatomic) NSNumber * contentLength;
@property (copy, nonatomic) NSURL * contentURL;
@property (copy, nonatomic) NSNumber * downloadID;
@property (copy, nonatomic) NSNumber * downloadState;
@property (copy, nonatomic) NSError * error;
@property (copy, nonatomic) NSNumber * progress;
@property (copy, nonatomic) NSNumber * timeRemaining;

+ (NSObject *)changesetWithDownloadID:(NSNumber *)arg0 state:(int)arg1;

- (void)setContentURL:(NSURL *)arg0;
- (NSURL *)contentURL;
- (NSDictionary *)copyXPCEncoding;
- (SKDownloadChangeset *)initWithXPCEncoding:(NSString *)arg0;
- (NSNumber *)downloadState;
- (void)setDownloadID:(NSNumber *)arg0;
- (void)setDownloadState:(NSNumber *)arg0;
- (void)dealloc;
- (SKDownloadChangeset *)copyWithZone:(struct _NSZone *)arg0;
- (void)setProgress:(NSNumber *)arg0;
- (NSNumber *)progress;
- (NSNumber *)timeRemaining;
- (NSError *)error;
- (NSNumber *)contentLength;
- (void)setError:(NSError *)arg0;
- (void)setTimeRemaining:(NSNumber *)arg0;
- (NSNumber *)downloadID;
- (void)setContentLength:(NSNumber *)arg0;

@end
