/* Runtime dump - TCExportTracing
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCExportTracing : TCTracing

- (void)dealloc;
- (TCExportTracing *)initWithFilename:(NSString *)arg0;
- (void)startExporting;
- (void)stopExporting;
- (void)startWriting;
- (void)stopWriting;

@end
