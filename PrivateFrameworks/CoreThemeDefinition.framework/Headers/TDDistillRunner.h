/* Runtime dump - TDDistillRunner
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDDistillRunner : NSObject
{
    int _capabilities;
    TDDistiller * _distiller;
    NSURL * _carScratchURL;
    NSURL * _outputURL;
    TDLogger * _logger;
    NSString * _assetStoreVersionString;
    int _assetStoreVersionNumber;
}

@property (copy, nonatomic) NSURL * outputURL;
@property (retain, nonatomic) TDLogger * logger;
@property (copy) NSString * assetStoreVersionString;
@property int assetStoreVersionNumber;

- (NSURL *)outputURL;
- (void)dealloc;
- (TDDistillRunner *)init;
- (void)setDocumentCapabilities:(int)arg0;
- (NSURL *)carScratchURL;
- (char)_isDistillUnnecessaryForDocument:(NSObject *)arg0;
- (int)assetStoreVersionNumber;
- (void)setAssetStoreVersionNumber:(int)arg0;
- (NSString *)assetStoreVersionString;
- (void)setAssetStoreVersionString:(NSString *)arg0;
- (void)_moveScratchToOutputPath;
- (void)_removeScratchPath;
- (char)runDistillWithDocumentURL:(NSURL *)arg0 outputURL:(NSURL *)arg1 attemptIncremental:(char)arg2 forceDistill:(char)arg3;
- (void)setOutputURL:(NSURL *)arg0;
- (TDLogger *)logger;
- (void)setLogger:(TDLogger *)arg0;

@end
