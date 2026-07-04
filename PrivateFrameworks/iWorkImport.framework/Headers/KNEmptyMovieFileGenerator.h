/* Runtime dump - KNEmptyMovieFileGenerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNEmptyMovieFileGenerator : NSObject
{
    NSURL * mGeneratedFileURL;
    double mDuration;
}

@property (readonly, nonatomic) NSURL * generatedFileURL;

- (KNEmptyMovieFileGenerator *)initWithGeneratedFileURL:(NSURL *)arg0 duration:(double)arg1;
- (NSURL *)generatedFileURL;
- (void)generateFileWithCompletionHandler:(id /* block */)arg0;
- (void)dealloc;
- (KNEmptyMovieFileGenerator *)init;

@end
