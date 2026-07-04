/* Runtime dump - CPLProxyLibraryManagerOutstandingInvocation
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxyLibraryManagerOutstandingInvocation : NSObject
{
    char _didStart;
    char _didFinish;
    float _progress;
    NSError * _finalError;
    CPLResource * _finalResource;
}

@property (nonatomic) char didStart;
@property (nonatomic) float progress;
@property (nonatomic) char didFinish;
@property (retain, nonatomic) NSError * finalError;
@property (retain, nonatomic) CPLResource * finalResource;

- (NSString *)description;
- (void)setProgress:(float)arg0;
- (float)progress;
- (void).cxx_destruct;
- (char)didStart;
- (char)didFinish;
- (CPLResource *)finalResource;
- (NSError *)finalError;
- (void)setDidStart:(char)arg0;
- (void)setDidFinish:(char)arg0;
- (void)setFinalError:(NSError *)arg0;
- (void)setFinalResource:(CPLResource *)arg0;

@end
