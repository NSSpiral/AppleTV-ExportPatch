/* Runtime dump - TDDistiller
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDDistiller : NSObject
{
    CoreThemeDocument * document;
    CUIMutableCommonAssetStorage * assetStore;
    NSMutableArray * renditionEntries;
    NSArray * _changedProductions;
    NSArray * _mainThreadPerformRunLoopModes;
    int _fileCompression;
    char _incremental;
    char _cancelled;
    char _successful;
    char _finished;
    NSString * _assetStoreVersionString;
    int _assetStoreVersionNumber;
    TDLogger * _logger;
    NSString * _accumulatedErrorDescription;
    NSThread * _callbackThread;
    id _oldCompletionHandler;
    id _completionHandler;
}

@property int fileCompression;
@property char incremental;
@property (copy) NSString * assetStoreVersionString;
@property int assetStoreVersionNumber;
@property char cancelled;
@property char successful;
@property (retain) TDLogger * logger;
@property char finished;
@property (retain, nonatomic) NSString * accumulatedErrorDescription;
@property (retain) NSThread * callbackThread;
@property (copy) id oldCompletionHandler;
@property (copy) id completionHandler;

- (void)dealloc;
- (id /* block */)completionHandler;
- (char)isCancelled;
- (void)setCancelled:(char)arg0;
- (void)setCompletionHandler:(id /* block */)arg0;
- (char)isFinished;
- (char)isSuccessful;
- (void)setFinished:(char)arg0;
- (void)waitUntilFinished;
- (void)_logError:(NSError *)arg0;
- (void)_logExtra:(id)arg0;
- (void)_logWarning:(id)arg0;
- (TDDistiller *)initWithDocument:(CoreThemeDocument *)arg0 outputPath:(NSURL *)arg1 attemptIncremental:(char)arg2;
- (int)assetStoreVersionNumber;
- (void)setAssetStoreVersionNumber:(int)arg0;
- (NSString *)assetStoreVersionString;
- (void)setAssetStoreVersionString:(NSString *)arg0;
- (char)isIncremental;
- (void)beginDistillWithCompletionHandler:(id /* block */)arg0;
- (NSString *)accumulatedErrorDescription;
- (void)setAccumulatedErrorDescription:(NSString *)arg0;
- (void)_accumulateErrorDescription:(NSString *)arg0;
- (void)_logInfo:(NSDictionary *)arg0;
- (TDDistiller *)initWithDocument:(CoreThemeDocument *)arg0 outputPath:(NSURL *)arg1 attemptIncremental:(char)arg2 versionString:(NSString *)arg3;
- (char)_setupWithOutputPath:(NSURL *)arg0 attemptIncremental:(char)arg1;
- (void)setOldCompletionHandler:(id /* block */)arg0;
- (void)_logErrorAndAccumulateDescription:(NSString *)arg0;
- (NSString *)_keyDataFromKey:(struct _renditionkeytoken *)arg0;
- (char)_sortRenditionEntries;
- (void)_storeRenditions;
- (void)setAsset:(NSSet *)arg0 withKey:(struct _renditionkeytoken *)arg1 fromRenditionSpec:(struct _renditionkeytoken)arg2;
- (NSError *)_renditionsWithError:(id *)arg0;
- (NSObject *)_productionForRenditionSpec:(NSObject *)arg0;
- (char)_distillColorDefinitions:(id)arg0;
- (char)_distillFonts:(id)arg0;
- (char)_distillNamedElements:(id)arg0;
- (NSObject *)zeroCodeArtworkInfoOfType:(int)arg0 error:(id *)arg1;
- (char)distillZeroCodeArtworkInfo:(NSDictionary *)arg0 ofType:(int)arg1;
- (char)distillZeroCodeArtworkInfoOfType:(int)arg0;
- (char)_distillCursorFacetDefinitions:(id)arg0;
- (void)_distillDebuggingInfoForConstants:(id)arg0 isElement:(char)arg1;
- (void)setSuccessful:(char)arg0;
- (void)markDistillationAsFinished;
- (void)performSelectorOnCallbackThread:(SEL)arg0 withObject:(NSObject *)arg1 waitUntilDone:(char)arg2;
- (id /* block */)oldCompletionHandler;
- (char)distillCustomFontSizes;
- (char)distillDebuggingInfo;
- (id)_keySpecsToRemoveFromKeySpecs:(id)arg0;
- (unsigned int)_removeRenditionsWithKeySpecs:(id)arg0;
- (id)_renditionsFromProductions:(id)arg0 error:(id *)arg1;
- (char)_recordRenditionEntryFromRendition:(id)arg0;
- (char)sortAndStoreRenditions;
- (void)_resetDocumentUuid:(id)arg0;
- (void)finishDistillationWithSuccess:(char)arg0;
- (char)distillCustomColors;
- (char)distillCustomFonts;
- (char)distillNamedElements;
- (char)distillCursorFacetDefinitions;
- (char)distillRenditions;
- (void)_distillChanges:(id)arg0;
- (void)_distill:(id)arg0;
- (void)saveAndDistillWithCompletionHandler:(id /* block */)arg0;
- (void)waitTimerDidFire:(id)arg0;
- (void)setCallbackThread:(NSThread *)arg0;
- (NSThread *)callbackThread;
- (TDDistiller *)initWithDocument:(CoreThemeDocument *)arg0 outputPath:(NSURL *)arg1;
- (TDDistiller *)initWithDocument:(CoreThemeDocument *)arg0 outputPath:(NSURL *)arg1 versionString:(NSString *)arg2;
- (NSString *)documentPath;
- (NSArray *)_copyStandardEffectDefinitions;
- (char)distillZeroCodeArtworkElementAndPartIdentifiers;
- (void)distillWithCompletionHandler:(id /* block */)arg0;
- (void)cancelDistill;
- (void)setFileCompression:(int)arg0;
- (int)fileCompression;
- (NSData *)keyFormatData;
- (TDLogger *)logger;
- (void)setLogger:(TDLogger *)arg0;
- (void)setIncremental:(char)arg0;

@end
