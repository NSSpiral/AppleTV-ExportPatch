/* Runtime dump - QLThumbnailCreationOperation
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailCreationOperation : NSOperation
{
    char _finished;
    char _executing;
    UIImage * _image;
    NSError * _error;
    NSURL * _documentURL;
    float _maximumDimension;
    float _scaleFactor;
    unsigned int _useMode;
    struct CGRect _contentRect;
}

@property struct CGRect contentRect;
@property (retain) UIImage * image;
@property (retain) NSError * error;
@property (retain) NSURL * documentURL;
@property float maximumDimension;
@property float scaleFactor;
@property unsigned int useMode;

- (void)setScaleFactor:(float)arg0;
- (void)checkIfThumbnailExistsAtPhysicalURL:(NSURL *)arg0;
- (void)retrieveThumbnailForPhysicalURL:(NSURL *)arg0 hasThumbnailInIndex:(char)arg1;
- (float)maximumDimension;
- (void)setMaximumDimension:(float)arg0;
- (unsigned int)useMode;
- (void)setUseMode:(unsigned int)arg0;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (UIImage *)image;
- (struct CGRect)contentRect;
- (void)start;
- (void)setContentRect:(struct CGRect)arg0;
- (float)scaleFactor;
- (void)main;
- (void)setDocumentURL:(NSURL *)arg0;
- (NSURL *)documentURL;
- (char)isFinished;
- (char)isExecuting;
- (char)_finishIfCancelled;
- (void)setExecuting:(char)arg0;
- (void)setFinished:(char)arg0;
- (char)isConcurrent;
- (NSError *)error;
- (void)_finish;
- (void)setError:(NSError *)arg0;

@end
