/* Runtime dump - TCImportTracing
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCImportTracing : TCTracing

- (void)dealloc;
- (void)startReading;
- (TCImportTracing *)initWithFilename:(NSString *)arg0;
- (void)stopReading;
- (void)startProcessors;
- (void)stopProcessors;
- (void)startImporting;
- (void)stopImporting;

@end
